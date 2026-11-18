// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f0f0e0

UClass * __cdecl UEnvQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQuery",&Z_Registration_Info_UClass_UEnvQuery.InnerSingleton,
               StaticRegisterNativesUEnvQuery,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQuery>,InternalVTableHelperCtorCaller<UEnvQuery>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQuery.InnerSingleton;
}

// UEnvQuery @ 146f2a300

UEnvQuery * __thiscall UEnvQuery::UEnvQuery(UEnvQuery *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQuery__6B_;
  (this->QueryName).ComparisonIndex = 0;
  (this->QueryName).Number = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  return this;
}

// UEnvQuery @ 146f2a340

UEnvQuery * __thiscall UEnvQuery::UEnvQuery(UEnvQuery *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQuery__6B_;
  (this->QueryName).ComparisonIndex = 0;
  (this->QueryName).Number = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  return this;
}

// ~UEnvQuery @ 146f2e830

void __thiscall UEnvQuery::~UEnvQuery(UEnvQuery *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQuery__6B_;
  pFVar1 = (this->Options).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// CollectQueryParams @ 146f3a060

void __thiscall
UEnvQuery::CollectQueryParams
          (UEnvQuery *this,UObject *param_1,
          TArray<FAIDynamicParam,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  UEnvQueryNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  longlong lVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  uVar8 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (0 < (this->Options).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Options).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((this->Options).AllocatorInstance.Data + lVar11);
      if (*(UEnvQueryNode **)(lVar1 + 0x28) != (UEnvQueryNode *)0x0) {
        FEQSParamsExporter::AddNamedValuesFromObject
                  (param_1,*(UEnvQueryNode **)(lVar1 + 0x28),param_2,&local_38);
        uVar7 = 0;
        if (0 < *(int *)(lVar1 + 0x38)) {
          lVar9 = 0;
          do {
            uVar10 = 0;
            if ((int)uVar7 < *(int *)(lVar1 + 0x38)) {
              uVar10 = ~uVar7 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar2 = *(UEnvQueryNode **)(lVar9 + *(longlong *)(lVar1 + 0x30));
            if (pUVar2 != (UEnvQueryNode *)0x0) {
              FEQSParamsExporter::AddNamedValuesFromObject(param_1,pUVar2,param_2,&local_38);
            }
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 8;
          } while ((int)uVar7 < *(int *)(lVar1 + 0x38));
        }
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar8 < (this->Options).ArrayNum);
  }
  uVar8 = param_2->ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar11 = (longlong)(int)uVar8 * 0x38;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_38.AllocatorInstance.Data !=
          local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8) {
        FVar5.Data = local_38.AllocatorInstance.Data;
        do {
          if (*(longlong *)FVar5.Data == *(longlong *)((param_2->AllocatorInstance).Data + lVar11))
          goto LAB_146f3a2d9;
          FVar5.Data = FVar5.Data + 8;
        } while (FVar5.Data != local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8);
      }
      uVar7 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Dst = (param_2->AllocatorInstance).Data + lVar11;
      if (*(void **)(_Dst + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x10));
      }
      iVar6 = param_2->ArrayNum + ~uVar8;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + 0x38,(longlong)iVar6 * 0x38);
      }
      param_2->ArrayNum = param_2->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
LAB_146f3a2d9:
      lVar11 = lVar11 + -0x38;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 146f579f0

UClass * __cdecl UEnvQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQuery.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQuery",&Z_Registration_Info_UClass_UEnvQuery.InnerSingleton,
               StaticRegisterNativesUEnvQuery,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQuery>,InternalVTableHelperCtorCaller<UEnvQuery>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQuery.InnerSingleton;
}

// PostInitProperties @ 146f5f6e0

void __thiscall UEnvQuery::PostInitProperties(UEnvQuery *this)

{
  undefined4 uVar1;
  
  UObject::PostInitProperties((UObject *)this);
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (this->QueryName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (this->QueryName).Number = uVar1;
  return;
}

// PostLoad @ 146f5f8e0

void __thiscall UEnvQuery::PostLoad(UEnvQuery *this)

{
  undefined4 uVar1;
  bool bVar2;
  
  UObject::PostLoad((UObject *)this);
  if ((this->QueryName != (FName)0x0) &&
     (bVar2 = ::FName::IsWithinBounds((FNameEntryId)(this->QueryName).ComparisonIndex.Value), bVar2)
     ) {
    return;
  }
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (this->QueryName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (this->QueryName).Number = uVar1;
  return;
}

// StaticRegisterNativesUEnvQuery @ 146f76c30

void __cdecl UEnvQuery::StaticRegisterNativesUEnvQuery(void)

{
  return;
}

