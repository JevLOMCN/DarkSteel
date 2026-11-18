// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// `dynamic_initializer_for_'_static_init2_'' @ 14129ab90

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table__5foptions_2eproto);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc35a,'\t',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc35b,'\t',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc365,'\t',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc36f,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc370,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc371,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc372,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc373,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc374,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc378,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_MessageOptions_default_instance_,0xc379,'\b',false,
             false);
  google::protobuf::internal::ExtensionSet::RegisterExtension
            ((MessageLite *)&google::protobuf::_EnumOptions_default_instance_,0xc37a,'\b',false,
             false);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// `dynamic_initializer_for_'db_one_of_default'' @ 14129ad10

void __cdecl _dynamic_initializer_for__db_one_of_default__(void)

{
  atexit(_dynamic_atexit_destructor_for__db_one_of_default__);
  return;
}

// `dynamic_initializer_for_'parser_one_of_default'' @ 14129ad30

void __cdecl _dynamic_initializer_for__parser_one_of_default__(void)

{
  atexit(_dynamic_atexit_destructor_for__parser_one_of_default__);
  return;
}

// `dynamic_initializer_for_'prost_attributes_default'' @ 14129ad50

void __cdecl _dynamic_initializer_for__prost_attributes_default__(void)

{
  atexit(_dynamic_atexit_destructor_for__prost_attributes_default__);
  return;
}

// `dynamic_atexit_destructor_for_'db_one_of_default'' @ 150443f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_atexit_destructor_for__db_one_of_default__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < db_one_of_default._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(db_one_of_default._Mypair._Myval2._Bx._1_7_,
                              db_one_of_default._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = db_one_of_default._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = db_one_of_default._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  db_one_of_default._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  db_one_of_default._Mypair._Myval2._Myres = _UNK_15076add8;
  db_one_of_default._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// `dynamic_atexit_destructor_for_'parser_one_of_default'' @ 150444010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_atexit_destructor_for__parser_one_of_default__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < parser_one_of_default._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(parser_one_of_default._Mypair._Myval2._Bx._1_7_,
                              parser_one_of_default._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = parser_one_of_default._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = parser_one_of_default._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  parser_one_of_default._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  parser_one_of_default._Mypair._Myval2._Myres = _UNK_15076add8;
  parser_one_of_default._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// `dynamic_atexit_destructor_for_'prost_attributes_default'' @ 150444090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_atexit_destructor_for__prost_attributes_default__(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < prost_attributes_default._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(prost_attributes_default._Mypair._Myval2._Bx._1_7_,
                              prost_attributes_default._Mypair._Myval2._Bx._Buf[0]);
    uVar3 = prost_attributes_default._Mypair._Myval2._Myres + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = prost_attributes_default._Mypair._Myval2._Myres + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  prost_attributes_default._Mypair._Myval2._Mysize = ___xmm_000000000000000f0000000000000000;
  prost_attributes_default._Mypair._Myval2._Myres = _UNK_15076add8;
  prost_attributes_default._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

