// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 5

// StaticStruct @ 148b872a0

UScriptStruct * __cdecl FStructSerializerMapTestStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct,(UObject *)pUVar1,
                         L"StructSerializerMapTestStruct");
  }
  return Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.OuterSingleton;
}

// FStructSerializerMapTestStruct @ 148b9db70

FStructSerializerMapTestStruct * __thiscall
FStructSerializerMapTestStruct::FStructSerializerMapTestStruct
          (FStructSerializerMapTestStruct *this,FStructSerializerMapTestStruct *param_1)

{
  *(undefined8 *)&this->IntToStr = 0;
  *(undefined8 *)&(this->IntToStr).field_0x8 = 0;
  *(undefined8 *)&(this->IntToStr).field_0x20 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x28 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntToStr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntToStr).field_0x34 = 0;
  *(undefined8 *)&(this->IntToStr).field_0x40 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x48 = 0;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
             *)this,(TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                     *)param_1);
  *(undefined8 *)&(this->StrToStr).field_0x0 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToStr).field_0x34 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->StrToStr,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->StrToStr);
  *(undefined8 *)&(this->StrToVec).field_0x0 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x28 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToVec).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToVec).field_0x34 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x40 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->StrToVec,
              (TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&param_1->StrToVec);
  *(undefined8 *)&(this->StrToStruct).field_0x0 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStruct).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToStruct).field_0x34 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x48 = 0;
  TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
               *)&this->StrToStruct,
              (TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
               *)&param_1->StrToStruct);
  return this;
}

// FStructSerializerMapTestStruct @ 148b9dc70

FStructSerializerMapTestStruct * __thiscall
FStructSerializerMapTestStruct::FStructSerializerMapTestStruct
          (FStructSerializerMapTestStruct *this,ENoInit param_1)

{
  *(undefined8 *)&this->IntToStr = 0;
  *(undefined8 *)&(this->IntToStr).field_0x8 = 0;
  *(undefined8 *)&(this->IntToStr).field_0x20 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x28 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntToStr).field_0x34 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IntToStr).field_0x40 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x48 = 0;
  *(undefined8 *)&this->StrToStr = 0;
  *(undefined8 *)&(this->StrToStr).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStr).field_0x34 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StrToStr).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x48 = 0;
  *(undefined8 *)&this->StrToVec = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x28 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToVec).field_0x34 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StrToVec).field_0x40 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  *(undefined8 *)&this->StrToStruct = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStruct).field_0x34 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StrToStruct).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x48 = 0;
  return this;
}

// FStructSerializerMapTestStruct @ 148b9dd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStructSerializerMapTestStruct * __thiscall
FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(FStructSerializerMapTestStruct *this)

{
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *this_00;
  TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  *this_01;
  FStructSerializerBuiltinTestStruct *pFVar1;
  TPairInitializer<FString_&&,FString_&&> local_res8;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108;
  FStructSerializerBuiltinTestStruct local_e8;
  
  this_00 = &this->StrToVec;
  *(undefined8 *)&this->IntToStr = 0;
  this_01 = &this->StrToStruct;
  *(undefined8 *)&(this->IntToStr).field_0x8 = 0;
  *(undefined8 *)&(this->IntToStr).field_0x20 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x28 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntToStr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntToStr).field_0x34 = 0;
  *(undefined8 *)&(this->IntToStr).field_0x40 = 0;
  *(undefined4 *)&(this->IntToStr).field_0x48 = 0;
  *(undefined8 *)&this->StrToStr = 0;
  *(undefined8 *)&(this->StrToStr).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStr).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToStr).field_0x34 = 0;
  *(undefined8 *)&(this->StrToStr).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStr).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x8 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x20 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x28 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToVec).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToVec).field_0x34 = 0;
  *(undefined8 *)&(this->StrToVec).field_0x40 = 0;
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x8 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x20 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x28 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrToStruct).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrToStruct).field_0x34 = 0;
  *(undefined8 *)&(this->StrToStruct).field_0x40 = 0;
  *(undefined4 *)&(this->StrToStruct).field_0x48 = 0;
  ::FString::FString((FString *)&local_108._s_0,L"One");
  local_118._0_8_ = &local_res8;
  local_res8.Key._0_4_ = 1;
  local_118._8_8_ = &local_108;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<int_&&,FString_&&> *)&local_res8.Value,(bool *)local_118);
  if ((void *)local_108._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_108._s_0.X);
  }
  ::FString::FString((FString *)local_118,L"Two");
  local_108._s_0.X = (double)&local_res8;
  local_res8.Key._0_4_ = 2;
  local_108._s_0.Y = (double)local_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<int_&&,FString_&&> *)&local_res8.Value,(bool *)&local_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)local_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  ::FString::FString((FString *)local_118,L"Three");
  local_108._s_0.X = (double)&local_res8;
  local_res8.Key._0_4_ = 3;
  local_108._s_0.Y = (double)local_118;
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_&&,FString_&&>_>
            ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<int_&&,FString_&&> *)&local_res8.Value,(bool *)&local_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)local_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  ::FString::FString((FString *)local_128,L"All");
  ::FString::FString((FString *)local_118,L"StrAll");
  local_108._s_0.X = (double)local_118;
  local_108._s_0.Y = (double)local_128;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->StrToStr,&local_res8,(bool *)&local_108);
  if ((TPairInitializer<FString_&&,FString_&&> *)local_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  ::FString::FString((FString *)local_118,L"Your");
  ::FString::FString((FString *)&local_108._s_0,L"StrYour");
  local_128._0_8_ = &local_108;
  local_128._8_8_ = local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->StrToStr,&local_res8,(bool *)local_128);
  if ((undefined1 *)local_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)local_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)local_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  ::FString::FString((FString *)local_118,L"Base");
  ::FString::FString((FString *)&local_108._s_0,L"StrBase");
  local_128._0_8_ = &local_108;
  local_128._8_8_ = local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->StrToStr,&local_res8,(bool *)local_128);
  if ((undefined1 *)local_108._s_0.X != (undefined1 *)0x0) {
    FMemory::Free((void *)local_108._s_0.X);
  }
  if ((TPairInitializer<FString_&&,FString_&&> *)local_118._0_8_ !=
      (TPairInitializer<FString_&&,FString_&&> *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  local_108._s_0.Z = 0.0;
  local_108._s_0.X = 0.0;
  local_108._s_0.Y = 0.0;
  ::FString::FString((FString *)local_128,L"V000");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_00,(FString *)local_128,(TVector<double> *)&local_108._s_0);
  if ((TVector<double>_u_0 *)local_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_108._s_0.X = ___xmm_40000000000000003ff0000000000000;
  local_108._s_0.Y = _UNK_150744178;
  local_108._s_0.Z = __real_4008000000000000;
  ::FString::FString((FString *)local_128,L"V123");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_00,(FString *)local_128,(TVector<double> *)&local_108._s_0);
  if ((TVector<double>_u_0 *)local_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_108._s_0.X = ___xmm_40180000000000004018000000000000;
  local_108._s_0.Y = _UNK_151c790d8;
  local_108._s_0.Z = __real_4018000000000000;
  ::FString::FString((FString *)local_128,L"V666");
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  ::Emplace<FString,UE::Math::TVector<double>_>
            ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
              *)this_00,(FString *)local_128,(TVector<double> *)&local_108._s_0);
  if ((TVector<double>_u_0 *)local_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&local_e8);
  ::FString::FString((FString *)local_128,L"StructOne");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>
            ((TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
              *)this_01,(FString *)local_128,pFVar1);
  if ((TVector<double>_u_0 *)local_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.Text.TextData.Reference + 0x10))();
  }
  if (local_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.String.Data.AllocatorInstance.Data);
  }
  pFVar1 = FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(&local_e8);
  ::FString::FString((FString *)local_128,L"StructTwo");
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString,FStructSerializerBuiltinTestStruct>
            ((TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
              *)this_01,(FString *)local_128,pFVar1);
  if ((TVector<double>_u_0 *)local_128._0_8_ != (TVector<double>_u_0 *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_e8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.Text.TextData.Reference + 0x10))();
  }
  if (local_e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.String.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FStructSerializerMapTestStruct @ 148ba0650

void __thiscall
FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct
          (FStructSerializerMapTestStruct *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->StrToStruct).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StrToStruct).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StrToStruct);
  *(undefined4 *)&(this->StrToVec).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StrToVec).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StrToVec);
  *(undefined4 *)&(this->StrToStr).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StrToStr).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StrToStr);
  *(undefined4 *)&(this->IntToStr).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IntToStr).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

