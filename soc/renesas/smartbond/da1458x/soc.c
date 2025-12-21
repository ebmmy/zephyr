#include <zephyr/linker/linker-defs.h>

void relocate_vector_table(void)
{
#if defined(CONFIG_SW_VECTOR_RELAY) || defined(CONFIG_SW_VECTOR_RELAY_CLIENT)
	_vector_table_pointer = _vector_start;
#endif
	// TODO: Implement remapping for DA1458x if needed
}
