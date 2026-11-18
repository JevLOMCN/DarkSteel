// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// `dynamic_initializer_for_'_static_init2_'' @ 14129a740

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table__5fbit_5fflags_2eproto);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_EnumOptions_default_instance_,50000,'\t',false,false
            );
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// `dynamic_initializer_for_'bit_flags_default'' @ 14129a780

void __cdecl _dynamic_initializer_for__bit_flags_default__(void)

{
  atexit(_dynamic_atexit_destructor_for__bit_flags_default__);
  return;
}

// `dynamic_atexit_destructor_for_'bit_flags_default'' @ 150443d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_atexit_destructor_for__bit_flags_default__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < bit_flags_default._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(bit_flags_default._Mypair._Myval2._Bx._1_7_,
                              bit_flags_default._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = bit_flags_default._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = bit_flags_default._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  bit_flags_default._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  bit_flags_default._Mypair._Myval2._Myres = _UNK_15076add8;
  bit_flags_default._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

