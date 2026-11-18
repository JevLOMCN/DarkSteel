// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 12

// StaticClass @ 14cf2d300

UClass * __cdecl UARCandidateObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateObject",
               &Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton,
               StaticRegisterNativesUARCandidateObject,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARCandidateObject>,
               InternalVTableHelperCtorCaller<UARCandidateObject>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton;
}

// UARCandidateObject @ 14cf40cf0

UARCandidateObject * __thiscall
UARCandidateObject::UARCandidateObject(UARCandidateObject *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
  (this->CandidateObjectData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateObjectData).ArrayNum = 0;
  (this->CandidateObjectData).ArrayMax = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->BoundingBox).IsValid = '\0';
  return this;
}

// UARCandidateObject @ 14cf40d30

UARCandidateObject * __thiscall
UARCandidateObject::UARCandidateObject(UARCandidateObject *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
  (this->CandidateObjectData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CandidateObjectData).ArrayNum = 0;
  (this->CandidateObjectData).ArrayMax = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  (this->BoundingBox).IsValid = '\0';
  return this;
}

// ~UARCandidateObject @ 14cf44030

void __thiscall UARCandidateObject::~UARCandidateObject(UARCandidateObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateObjectData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14cf53fe0

UClass * __cdecl UARCandidateObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateObject",
               &Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton,
               StaticRegisterNativesUARCandidateObject,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARCandidateObject>,
               InternalVTableHelperCtorCaller<UARCandidateObject>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton;
}

// StaticRegisterNativesUARCandidateObject @ 14cf60ea0

void __cdecl UARCandidateObject::StaticRegisterNativesUARCandidateObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UARCandidateObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoundingBox @ 14cf6d870

void __cdecl UARCandidateObject::execGetBoundingBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[2].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)&param_1[2].field_0x18;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&param_1[2].field_0x10;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 3);
  *(undefined8 *)((longlong)param_3 + 0x20) = *(undefined8 *)&param_1[2].field_0x20;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x30) = *(undefined8 *)&param_1[3].field_0x8;
  return;
}

// execGetCandidateObjectData @ 14cf6db20

void __cdecl
UARCandidateObject::execGetCandidateObjectData(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1].field_0x8);
  return;
}

// execGetFriendlyName @ 14cf6e1c0

void __cdecl UARCandidateObject::execGetFriendlyName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)&param_1[1].field_0x18);
  return;
}

// execSetBoundingBox @ 14cf73840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UARCandidateObject::execSetBoundingBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  undefined1 auStack_68 [32];
  uchar local_48 [48];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar17 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[2].field_0x0 = puVar17[0];
  param_1[2].field_0x1 = uVar2;
  param_1[2].field_0x2 = uVar3;
  param_1[2].field_0x3 = uVar4;
  param_1[2].field_0x4 = uVar5;
  param_1[2].field_0x5 = uVar6;
  param_1[2].field_0x6 = uVar7;
  param_1[2].field_0x7 = uVar8;
  param_1[2].field_0x8 = uVar9;
  param_1[2].field_0x9 = uVar10;
  param_1[2].field_0xa = uVar11;
  param_1[2].field_0xb = uVar12;
  param_1[2].field_0xc = uVar13;
  param_1[2].field_0xd = uVar14;
  param_1[2].field_0xe = uVar15;
  param_1[2].field_0xf = uVar16;
  uVar2 = puVar17[0x11];
  uVar3 = puVar17[0x12];
  uVar4 = puVar17[0x13];
  uVar5 = puVar17[0x14];
  uVar6 = puVar17[0x15];
  uVar7 = puVar17[0x16];
  uVar8 = puVar17[0x17];
  uVar9 = puVar17[0x18];
  uVar10 = puVar17[0x19];
  uVar11 = puVar17[0x1a];
  uVar12 = puVar17[0x1b];
  uVar13 = puVar17[0x1c];
  uVar14 = puVar17[0x1d];
  uVar15 = puVar17[0x1e];
  uVar16 = puVar17[0x1f];
  param_1[2].field_0x10 = puVar17[0x10];
  param_1[2].field_0x11 = uVar2;
  param_1[2].field_0x12 = uVar3;
  param_1[2].field_0x13 = uVar4;
  param_1[2].field_0x14 = uVar5;
  param_1[2].field_0x15 = uVar6;
  param_1[2].field_0x16 = uVar7;
  param_1[2].field_0x17 = uVar8;
  param_1[2].field_0x18 = uVar9;
  param_1[2].field_0x19 = uVar10;
  param_1[2].field_0x1a = uVar11;
  param_1[2].field_0x1b = uVar12;
  param_1[2].field_0x1c = uVar13;
  param_1[2].field_0x1d = uVar14;
  param_1[2].field_0x1e = uVar15;
  param_1[2].field_0x1f = uVar16;
  uVar2 = puVar17[0x21];
  uVar3 = puVar17[0x22];
  uVar4 = puVar17[0x23];
  uVar5 = puVar17[0x24];
  uVar6 = puVar17[0x25];
  uVar7 = puVar17[0x26];
  uVar8 = puVar17[0x27];
  uVar9 = puVar17[0x28];
  uVar10 = puVar17[0x29];
  uVar11 = puVar17[0x2a];
  uVar12 = puVar17[0x2b];
  uVar13 = puVar17[0x2c];
  uVar14 = puVar17[0x2d];
  uVar15 = puVar17[0x2e];
  uVar16 = puVar17[0x2f];
  param_1[2].field_0x20 = puVar17[0x20];
  param_1[2].field_0x21 = uVar2;
  param_1[2].field_0x22 = uVar3;
  param_1[2].field_0x23 = uVar4;
  param_1[2].field_0x24 = uVar5;
  param_1[2].field_0x25 = uVar6;
  param_1[2].field_0x26 = uVar7;
  param_1[2].field_0x27 = uVar8;
  param_1[3].field_0x0 = uVar9;
  param_1[3].field_0x1 = uVar10;
  param_1[3].field_0x2 = uVar11;
  param_1[3].field_0x3 = uVar12;
  param_1[3].field_0x4 = uVar13;
  param_1[3].field_0x5 = uVar14;
  param_1[3].field_0x6 = uVar15;
  param_1[3].field_0x7 = uVar16;
  uVar2 = puVar17[0x31];
  uVar3 = puVar17[0x32];
  uVar4 = puVar17[0x33];
  uVar5 = puVar17[0x34];
  uVar6 = puVar17[0x35];
  uVar7 = puVar17[0x36];
  uVar8 = puVar17[0x37];
  param_1[3].field_0x8 = puVar17[0x30];
  param_1[3].field_0x9 = uVar2;
  param_1[3].field_0xa = uVar3;
  param_1[3].field_0xb = uVar4;
  param_1[3].field_0xc = uVar5;
  param_1[3].field_0xd = uVar6;
  param_1[3].field_0xe = uVar7;
  param_1[3].field_0xf = uVar8;
  return;
}

// execSetCandidateObjectData @ 14cf73920

void __cdecl
UARCandidateObject::execSetCandidateObjectData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
    ;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1].field_0x8,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetFriendlyName @ 14cf73fe0

void __cdecl UARCandidateObject::execSetFriendlyName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_18.Data;
  puVar4 = &param_1[1].field_0x18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((ForAnyElementType *)puVar4 != &local_18) {
    iVar3 = (int)local_10;
    lVar5 = (longlong)(int)local_10;
    puVar1 = &param_1[1].field_0x24;
    *(int *)&param_1[1].field_0x20 = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,*(int *)puVar1,(ForAnyElementType *)puVar4,(int)local_10,
                 (int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar4,_Src.Data,lVar5 * 2);
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

