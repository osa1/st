/* Terminal colors (16 first used in escape sequence) */
const char *colorname[] = {
    /* 8 normal colors */
    "#3b4252", /* black   */
    "#bf616a", /* red     */
    "#a3be8c", /* green   */
    "#ebcb8b", /* yellow  */
    "#81a1c1", /* blue    */
    "#b48ead", /* magenta */
    "#88c0d0", /* cyan    */
    "#e5e9f0", /* white   */

    /* 8 bright colors */
    "#4c566a", /* black   */
    "#bf616a", /* red     */
    "#a3be8c", /* green   */
    "#ebcb8b", /* yellow  */
    "#81a1c1", /* blue    */
    "#b48ead", /* magenta */
    "#8fbcbb", /* cyan    */
    "#eceff4", /* white   */

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#2e3440", /* background */
    "#d8dee9", /* foreground */
};

unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
