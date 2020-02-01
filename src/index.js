class main {
  static run() {
    const elements = [1, 2, 3, 4, 5, -1, -2, -3, -4, -5];
    let positives = 0,
      negatives = 0,
      zero = 0;

    /* // traditional / c style
    for (let i = 0; i < elements.length; i++) {
      const el = elements[i];
      if (el > 0) positives++;
      else if (el < 0) negatives++;
      else zero++;
    } */

    // ecma script style
    elements.forEach(el => {
      if (el > 0) positives++;
      else if (el < 0) negatives++;
      else zero++;
    });

    console.log(`positives: ${positives} -> ${positives / elements.length}`);
    console.log(`positives: ${negatives} -> ${negatives / elements.length}`);
    console.log(`positives: ${zero} -> ${zero / elements.length}`);
  }
}

main.run();
