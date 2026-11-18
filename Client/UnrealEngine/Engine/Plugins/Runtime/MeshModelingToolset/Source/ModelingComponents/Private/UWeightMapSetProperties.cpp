// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14caaf810

UClass * __cdecl UWeightMapSetProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"WeightMapSetProperties",
               &Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUWeightMapSetProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<UWeightMapSetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton;
}

// UWeightMapSetProperties @ 14cad00c0

UWeightMapSetProperties * __thiscall
UWeightMapSetProperties::UWeightMapSetProperties
          (UWeightMapSetProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UWeightMapSetProperties__6B_;
  (this->WeightMap).ComparisonIndex = 0;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->bInvertWeightMap = false;
  return this;
}

// UWeightMapSetProperties @ 14cad0110

UWeightMapSetProperties * __thiscall
UWeightMapSetProperties::UWeightMapSetProperties
          (UWeightMapSetProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UWeightMapSetProperties__6B_;
  (this->WeightMap).ComparisonIndex = 0;
  (this->WeightMap).Number = 0;
  (this->WeightMapsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightMapsList).ArrayNum = 0;
  (this->WeightMapsList).ArrayMax = 0;
  this->bInvertWeightMap = false;
  return this;
}

// ~UWeightMapSetProperties @ 14cad2ef0

void __thiscall UWeightMapSetProperties::~UWeightMapSetProperties(UWeightMapSetProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWeightMapSetProperties__6B_;
  DestructItems<FString,int>
            ((FString *)(this->WeightMapsList).AllocatorInstance.Data,
             (this->WeightMapsList).ArrayNum);
  pFVar1 = (this->WeightMapsList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cb134a0

UClass * __cdecl UWeightMapSetProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"WeightMapSetProperties",
               &Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton,
               StaticRegisterNativesUWeightMapSetProperties,0xd0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UWeightMapSetProperties>,
               InternalVTableHelperCtorCaller<UWeightMapSetProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeightMapSetProperties.InnerSingleton;
}

// GetWeightMapsFunc @ 14cb156b0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UWeightMapSetProperties::GetWeightMapsFunc
          (UWeightMapSetProperties *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->WeightMapsList).ArrayNum;
  pFVar2 = (this->WeightMapsList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FString,FString,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  return __return_storage_ptr__;
}

// HasSelectedWeightMap @ 14cb1af90

bool __thiscall UWeightMapSetProperties::HasSelectedWeightMap(UWeightMapSetProperties *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  int iVar7;
  FName local_res8;
  
  if ((this->WeightMapsList).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->WeightMapsList).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + 8);
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar7,*(wchar_t **)pFVar2,FNAME_Add);
  return this->WeightMap != *pFVar6;
}

// InitializeFromMesh @ 14cb1f2b0

void __thiscall
UWeightMapSetProperties::InitializeFromMesh(UWeightMapSetProperties *this,FMeshDescription *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UE::WeightMaps::FindVertexWeightMaps(param_1,&local_18);
  InitializeWeightMaps(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// InitializeWeightMaps @ 14cb20c40

/* WARNING: Removing unreachable block (ram,0x00014cb20d3b) */

void __thiscall
UWeightMapSetProperties::InitializeWeightMaps
          (UWeightMapSetProperties *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  
  pTVar1 = &this->WeightMapsList;
  ::FString::FString(&local_58,L"None");
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar9 + (longlong)(this->WeightMapsList).ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->WeightMapsList).ArrayNum;
  if (iVar4 == (this->WeightMapsList).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->WeightMapsList).ArrayMax);
  }
  (this->WeightMapsList).ArrayNum = iVar4 + 1;
  pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar7 = pFVar8 + iVar4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_res10 = *pFVar8;
    pFVar6 = (FScriptContainerElement *)::FName::ToString(&local_res10,&local_48);
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar6) && (pFVar6 < pFVar9 + (longlong)(this->WeightMapsList).ArrayMax * 0x10))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->WeightMapsList).ArrayNum;
    if (iVar5 == (this->WeightMapsList).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,&(this->WeightMapsList).ArrayMax);
    }
    (this->WeightMapsList).ArrayNum = iVar5 + 1;
    pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    *(int *)(pFVar9 + 8) = *(int *)(pFVar6 + 8);
    *(int *)(pFVar9 + 0xc) = *(int *)(pFVar6 + 0xc);
    *(undefined8 *)(pFVar6 + 8) = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 1;
  }
  pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + param_1->ArrayNum;
  if (pFVar8 != pFVar7) {
    do {
      if (*pFVar8 == this->WeightMap) {
        return;
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar7);
  }
  if (((this->WeightMapsList).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  iVar5 = *(int *)(pFVar9 + 8);
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  pFVar7 = ::FName::FName(&local_res18,iVar4,*(wchar_t **)pFVar9,FNAME_Add);
  this->WeightMap = *pFVar7;
  return;
}

// SetSelectedFromWeightMapIndex @ 14cb378a0

void __thiscall
UWeightMapSetProperties::SetSelectedFromWeightMapIndex(UWeightMapSetProperties *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FName local_res18;
  FName local_res20;
  
  iVar7 = (this->WeightMapsList).ArrayNum;
  if (-1 < param_1) {
    uVar8 = param_1 + 1;
    uVar6 = 0;
    if ((int)uVar8 < iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->WeightMapsList).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar8 * 0x10 + 8);
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res20,iVar7,*(wchar_t **)(pFVar2 + (longlong)(int)uVar8 * 0x10),
                            FNAME_Add);
    this->WeightMap = *pFVar5;
    return;
  }
  if (iVar7 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->WeightMapsList).AllocatorInstance.Data;
  iVar7 = *(int *)(pFVar2 + 8);
  uVar6 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  pFVar5 = ::FName::FName(&local_res18,uVar6,*(wchar_t **)pFVar2,FNAME_Add);
  this->WeightMap = *pFVar5;
  return;
}

// StaticRegisterNativesUWeightMapSetProperties @ 14cb3ed00

void __cdecl UWeightMapSetProperties::StaticRegisterNativesUWeightMapSetProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UWeightMapSetProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetWeightMapsFunc @ 14cb50f30

void __cdecl
UWeightMapSetProperties::execGetWeightMapsFunc(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[4].field_0x20;
  pFVar1 = *(FString **)&param_1[4].field_0x18;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

