/* Silicon Labs Si3226x FXS Driver
 */

/*
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2 as published by the
 * Free Software Foundation. See the LICENSE file included with
 * this program for more details.
 */


static int __init si3226x_init(void)
{

}

static void __exit si3226x_exit(void)
{

}

MODULE_DESCRIPTION("Silicon Labs Si3226x FXS Driver");

MODULE_ALIAS("Si3226x");
MODULE_LICENSE("GPL v2");

module_init(si3226x_init);
module_exit(si3226x_exit);
