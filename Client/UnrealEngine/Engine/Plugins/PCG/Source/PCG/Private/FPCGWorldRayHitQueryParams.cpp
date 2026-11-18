// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149854d30

UScriptStruct * __cdecl FPCGWorldRayHitQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams,(UObject *)pUVar1,
                         L"PCGWorldRayHitQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWorldRayHitQueryParams.OuterSingleton;
}

// FPCGWorldRayHitQueryParams @ 14988d630

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

FPCGWorldRayHitQueryParams * __thiscall
FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(FPCGWorldRayHitQueryParams *this)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams((FPCGWorldCommonQueryParams *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x80;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->bOverrideDefaultParams = false;
  *(undefined1 *)&this->_padding_ = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RayOrigin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RayOrigin).field0_0x0._s_0.Y = (double)uVar2;
  (this->RayOrigin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RayDirection).field0_0x0._s_0.X = 0.0;
  (this->RayDirection).field0_0x0._s_0.Y = 0.0;
  (this->RayDirection).field0_0x0._s_0.Z = -1.0;
  this->RayLength = 100000.0;
  return this;
}

// operator= @ 149892d80

FPCGWorldRayHitQueryParams * __thiscall
FPCGWorldRayHitQueryParams::operator=
          (FPCGWorldRayHitQueryParams *this,FPCGWorldRayHitQueryParams *param_1)

{
  double dVar1;
  
  FPCGWorldRaycastQueryParams::operator=
            ((FPCGWorldRaycastQueryParams *)this,(FPCGWorldRaycastQueryParams *)param_1);
  this->bOverrideDefaultParams = param_1->bOverrideDefaultParams;
  dVar1 = (param_1->RayOrigin).field0_0x0._s_0.Y;
  (this->RayOrigin).field0_0x0._s_0.X = (param_1->RayOrigin).field0_0x0._s_0.X;
  (this->RayOrigin).field0_0x0._s_0.Y = dVar1;
  (this->RayOrigin).field0_0x0._s_0.Z = (param_1->RayOrigin).field0_0x0._s_0.Z;
  dVar1 = (param_1->RayDirection).field0_0x0._s_0.Y;
  (this->RayDirection).field0_0x0._s_0.X = (param_1->RayDirection).field0_0x0._s_0.X;
  (this->RayDirection).field0_0x0._s_0.Y = dVar1;
  (this->RayDirection).field0_0x0._s_0.Z = (param_1->RayDirection).field0_0x0._s_0.Z;
  this->RayLength = param_1->RayLength;
  return this;
}

// Initialize @ 1498cb250

void __thiscall FPCGWorldRayHitQueryParams::Initialize(FPCGWorldRayHitQueryParams *this)

{
  longlong *this_00;
  int iVar1;
  FName *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FName FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_38;
  
  this_00 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
    return;
  }
  PCGHelpers::GetStringArrayFromCommaSeparatedList(&TStack_38,(FString *)&this->_padding_);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  iVar1 = TStack_38.ArrayNum;
  pFVar5 = TStack_38.AllocatorInstance.Data + (longlong)TStack_38.ArrayNum * 0x10;
  FVar4.Data = TStack_38.AllocatorInstance.Data;
  while( true ) {
    if (TStack_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&FStackX_8)
      ;
    }
    if (FVar4.Data == pFVar5) break;
    iVar3 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar3 = 0;
    }
    pFVar2 = ::FName::FName(aFStackX_18,iVar3,*(wchar_t **)FVar4.Data,FNAME_Add);
    FStackX_8 = *pFVar2;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,&FStackX_10,
               (bool *)&FStackX_8);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)TStack_38.AllocatorInstance.Data,TStack_38.ArrayNum);
  if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  return;
}

// PostSerialize @ 1498d29c0

void __thiscall
FPCGWorldRayHitQueryParams::PostSerialize(FPCGWorldRayHitQueryParams *this,FArchive *param_1)

{
  return;
}

