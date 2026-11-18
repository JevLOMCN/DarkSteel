// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticClass @ 14a37cf00

UClass * __cdecl UControlRigPoseProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseProjectSettings",
               &Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton,
               StaticRegisterNativesUControlRigPoseProjectSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigPoseProjectSettings>,
               InternalVTableHelperCtorCaller<UControlRigPoseProjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton;
}

// UControlRigPoseProjectSettings @ 14a3b8dd0

UControlRigPoseProjectSettings * __thiscall
UControlRigPoseProjectSettings::UControlRigPoseProjectSettings
          (UControlRigPoseProjectSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigPoseProjectSettings__6B_;
  (this->RootSaveDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSaveDirs).ArrayNum = 0;
  (this->RootSaveDirs).ArrayMax = 0;
  return this;
}

// UControlRigPoseProjectSettings @ 14a3b8e10

UControlRigPoseProjectSettings * __thiscall
UControlRigPoseProjectSettings::UControlRigPoseProjectSettings(UControlRigPoseProjectSettings *this)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UControlRigPoseProjectSettings *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FString local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UControlRigPoseProjectSettings__6B_;
  (this->RootSaveDirs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootSaveDirs).ArrayNum = 0;
  (this->RootSaveDirs).ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::operator=(&local_18,L"ControlRig/Pose");
  pFVar5 = (this->RootSaveDirs).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->RootSaveDirs).ArrayMax * 0x10
     )) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UControlRigPoseProjectSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->RootSaveDirs).ArrayNum;
  if (iVar3 == (this->RootSaveDirs).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RootSaveDirs).AllocatorInstance,&(this->RootSaveDirs).ArrayMax)
    ;
  }
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  pFVar5 = (this->RootSaveDirs).AllocatorInstance.Data;
  (this->RootSaveDirs).ArrayNum = iVar3 + 1;
  pFVar5 = pFVar5 + (longlong)iVar3 * 0x10;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  *(int *)&pFVar5[8].field_0x0 = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *(int *)(pFVar5 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar5,local_18.Data.ArrayNum,
               (int *)(pFVar5 + 0xc));
    memcpy(*(void **)&pFVar5->field_0x0,_Src.Data,lVar6 * 2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UControlRigPoseProjectSettings @ 14a3bd0c0

void __thiscall
UControlRigPoseProjectSettings::~UControlRigPoseProjectSettings
          (UControlRigPoseProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlRigPoseProjectSettings__6B_;
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)(this->RootSaveDirs).AllocatorInstance.Data,
             (this->RootSaveDirs).ArrayNum);
  pFVar1 = (this->RootSaveDirs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAssetPaths @ 14a411330

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigPoseProjectSettings::GetAssetPaths
          (UControlRigPoseProjectSettings *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->RootSaveDirs).ArrayNum;
  pFVar7 = (this->RootSaveDirs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RootSaveDirs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDirectoryPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x10))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar7);
    pFVar7 = pFVar7 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a416f00

UClass * __cdecl UControlRigPoseProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseProjectSettings",
               &Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton,
               StaticRegisterNativesUControlRigPoseProjectSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigPoseProjectSettings>,
               InternalVTableHelperCtorCaller<UControlRigPoseProjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUControlRigPoseProjectSettings @ 14a45c3c0

void __cdecl
UControlRigPoseProjectSettings::StaticRegisterNativesUControlRigPoseProjectSettings(void)

{
  return;
}

