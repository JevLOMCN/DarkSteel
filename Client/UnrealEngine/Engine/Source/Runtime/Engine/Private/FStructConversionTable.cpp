// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStructConversionTable @ 147e54e70

FStructConversionTable * __thiscall
UE::Kismet::BlueprintTypeConversions::FStructConversionTable::FStructConversionTable
          (FStructConversionTable *this)

{
  code *pcVar1;
  FStructConversionEntry *pFVar2;
  bool bVar3;
  UClass *this_00;
  FStructConversionTable *pFVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  FName *pFVar7;
  UScriptStruct *pUVar8;
  undefined1 local_res8 [16];
  TPairInitializer<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>_const_&,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_const_&>
  local_res18;
  UScriptStruct *local_d8;
  TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> **local_d0;
  UScriptStruct **local_c8;
  UScriptStruct *local_c0;
  UScriptStruct *local_b8;
  _func___cdecl_void_void_ptr_void_ptr *local_b0;
  UFunction *local_a8;
  UScriptStruct **local_a0;
  _func___cdecl_void_void_ptr_void_ptr **local_98;
  UScriptStruct *local_90;
  UScriptStruct *local_88;
  _func___cdecl_void_void_ptr_void_ptr *local_80;
  UFunction *local_78;
  UScriptStruct **local_70;
  _func___cdecl_void_void_ptr_void_ptr **local_68;
  FName local_60;
  FName local_58 [3];
  
  *(undefined8 *)&this->ImplicitCastLookupTable = 0;
  *(undefined8 *)&(this->ImplicitCastLookupTable).field_0x8 = 0;
  *(undefined8 *)&(this->ImplicitCastLookupTable).field_0x20 = 0;
  *(undefined4 *)&(this->ImplicitCastLookupTable).field_0x28 = 0;
  *(undefined4 *)&(this->ImplicitCastLookupTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImplicitCastLookupTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImplicitCastLookupTable).field_0x34 = 0;
  *(undefined8 *)&(this->ImplicitCastLookupTable).field_0x40 = 0;
  *(undefined4 *)&(this->ImplicitCastLookupTable).field_0x48 = 0;
  *(undefined8 *)&this->StructVariantLookupTable = 0;
  *(undefined8 *)&(this->StructVariantLookupTable).field_0x8 = 0;
  *(undefined8 *)&(this->StructVariantLookupTable).field_0x20 = 0;
  *(undefined4 *)&(this->StructVariantLookupTable).field_0x28 = 0;
  *(undefined4 *)&(this->StructVariantLookupTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructVariantLookupTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructVariantLookupTable).field_0x34 = 0;
  *(undefined8 *)&(this->StructVariantLookupTable).field_0x40 = 0;
  *(undefined4 *)&(this->StructVariantLookupTable).field_0x48 = 0;
  this_00 = UBlueprintTypeConversions::StaticClass();
  pFVar2 = `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
           ::__l2::ListHead;
  if ((this_00 == (UClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlueprintTypeConversionsClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                         ,0x92,L""),
     pFVar2 = `public:_static_struct_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry*___ptr64&___ptr64___cdecl_UE::Kismet::BlueprintTypeConversions::Internal::FStructConversionEntry::GetListHead(void)'
              ::__l2::ListHead, bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FStructConversionTable *)(*pcVar1)();
    return pFVar4;
  }
  while( true ) {
    if (pFVar2 == (FStructConversionEntry *)0x0) {
      return this;
    }
    local_res18.Value =
         (TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*> *)(*pFVar2->GetBaseStruct)();
    local_d8 = (*pFVar2->GetVariantFromBaseStruct)();
    pUVar5 = (*pFVar2->GetDoubleVariantStruct)();
    pUVar6 = (*pFVar2->GetFloatVariantStruct)();
    if (((UScriptStruct *)local_res18.Value == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                           ,0x9f,L""), bVar3)) break;
    if ((pUVar6 == (UScriptStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatVariantStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                           ,0xa0,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStructConversionTable *)(*pcVar1)();
      return pFVar4;
    }
    if (local_d8 != (UScriptStruct *)0x0) {
      local_d0 = &local_res18.Value;
      local_c8 = &local_d8;
      TSet<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UScriptStruct_const_*_const_&,UScriptStruct_const_*_const_&>_>
                ((TSet<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                  *)&this->StructVariantLookupTable,
                 (TPairInitializer<UScriptStruct_const_*_const_&,UScriptStruct_const_*_const_&> *)
                 local_res8,(bool *)&local_d0);
    }
    pUVar8 = (UScriptStruct *)local_res18.Value;
    if (pUVar5 != (UScriptStruct *)0x0) {
      pUVar8 = pUVar5;
    }
    local_c0 = pUVar8;
    local_b8 = pUVar6;
    pFVar7 = ::FName::FName(&local_60,pFVar2->ConvertDoubleToFloatFunctionName);
    local_a8 = UClass::FindFunctionByName(this_00,*pFVar7,IncludeSuper);
    local_b0 = pFVar2->ConvertDoubleToFloatImpl;
    local_90 = pUVar6;
    local_88 = pUVar8;
    pFVar7 = ::FName::FName(local_58,pFVar2->ConvertFloatToDoubleFunctionName);
    local_78 = UClass::FindFunctionByName(this_00,*pFVar7,IncludeSuper);
    local_80 = pFVar2->ConvertFloatToDoubleImpl;
    local_a0 = &local_c0;
    local_98 = &local_b0;
    TSet<TTuple<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_>,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>_const_&,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_const_&>_>
              ((TSet<TTuple<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_>,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>_const_&,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_const_&>
                        *)(local_res8 + 8),(bool *)&local_a0);
    local_70 = &local_90;
    local_68 = &local_80;
    TSet<TTuple<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_>,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>_const_&,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_const_&>_>
              ((TSet<TTuple<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_>,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>,FDefaultSetAllocator>
                *)this,&local_res18,(bool *)&local_70);
    pFVar2 = pFVar2->NextEntry;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FStructConversionTable *)(*pcVar1)();
  return pFVar4;
}

// Get @ 147e66cb0

FStructConversionTable * __cdecl
UE::Kismet::BlueprintTypeConversions::FStructConversionTable::Get(void)

{
  FStructConversionTable *this;
  
  if (Instance == (FStructConversionTable *)0x0) {
    this = ::operator_new(0xa0);
    if (this != (FStructConversionTable *)0x0) {
      Instance = FStructConversionTable(this);
      return Instance;
    }
    Instance = (FStructConversionTable *)0x0;
  }
  return Instance;
}

// GetConversionFunction @ 147e67970

TOptional<TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_> * __thiscall
UE::Kismet::BlueprintTypeConversions::FStructConversionTable::GetConversionFunction
          (FStructConversionTable *this,
          TOptional<TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_>
          *__return_storage_ptr__,UScriptStruct *param_1,UScriptStruct *param_2)

{
  undefined8 uVar1;
  UScriptStruct **ppUVar2;
  TOptional<TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_> *pTVar3;
  UScriptStruct *local_18;
  UScriptStruct *local_10;
  
  __return_storage_ptr__->bIsSet = false;
  ppUVar2 = TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
            ::Find((TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
                    *)&this->StructVariantLookupTable,param_1);
  local_18 = param_1;
  if (ppUVar2 != (UScriptStruct **)0x0) {
    local_18 = *ppUVar2;
  }
  ppUVar2 = TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
            ::Find((TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
                    *)&this->StructVariantLookupTable,param_2);
  local_10 = param_2;
  if (ppUVar2 != (UScriptStruct **)0x0) {
    local_10 = *ppUVar2;
  }
  pTVar3 = (TOptional<TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_> *)
           TMapBase<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>_>
           ::Find((TMapBase<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UScriptStruct_const_*,UScriptStruct_const_*>,TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>,0>_>
                   *)this,(TTuple<UScriptStruct_const_*,UScriptStruct_const_*> *)&local_18);
  if ((pTVar3 != (TOptional<TTuple<void_(__cdecl*)(void_const_*,void_*),UFunction_*>_> *)0x0) &&
     (pTVar3 != __return_storage_ptr__)) {
    uVar1 = *(undefined8 *)&(pTVar3->TypedValue).field_0x8;
    *(undefined8 *)&__return_storage_ptr__->TypedValue = *(undefined8 *)&pTVar3->TypedValue;
    *(undefined8 *)&(__return_storage_ptr__->TypedValue).field_0x8 = uVar1;
    __return_storage_ptr__->bIsSet = true;
  }
  return __return_storage_ptr__;
}

// GetVariantsFromStructs @ 147e6a910

TTuple<UScriptStruct_const_*,UScriptStruct_const_*> * __thiscall
UE::Kismet::BlueprintTypeConversions::FStructConversionTable::GetVariantsFromStructs
          (FStructConversionTable *this,
          TTuple<UScriptStruct_const_*,UScriptStruct_const_*> *__return_storage_ptr__,
          UScriptStruct *param_1,UScriptStruct *param_2)

{
  UScriptStruct **ppUVar1;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  ppUVar1 = TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
            ::Find((TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
                    *)&this->StructVariantLookupTable,param_1);
  if (ppUVar1 != (UScriptStruct **)0x0) {
    param_1 = *ppUVar1;
  }
  *(UScriptStruct **)__return_storage_ptr__ = param_1;
  ppUVar1 = TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
            ::Find((TMapBase<UScriptStruct_const_*,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,UScriptStruct_const_*,0>_>
                    *)&this->StructVariantLookupTable,param_2);
  if (ppUVar1 == (UScriptStruct **)0x0) {
    *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = param_2;
  }
  else {
    *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = *ppUVar1;
  }
  return __return_storage_ptr__;
}

