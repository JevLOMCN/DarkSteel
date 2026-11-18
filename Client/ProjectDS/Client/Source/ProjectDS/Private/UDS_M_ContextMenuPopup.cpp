// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b50ac90

UClass * __cdecl UDS_M_ContextMenuPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ContextMenuPopup",
               &Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_ContextMenuPopup,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ContextMenuPopup>,
               InternalVTableHelperCtorCaller<UDS_M_ContextMenuPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton;
}

// UDS_M_ContextMenuPopup @ 14b510aa0

UDS_M_ContextMenuPopup * __thiscall
UDS_M_ContextMenuPopup::UDS_M_ContextMenuPopup(UDS_M_ContextMenuPopup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ContextMenuPopup__6B_;
  (this->ContextMenu).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextMenu).ArrayNum = 0;
  (this->ContextMenu).ArrayMax = 0;
  *(undefined8 *)&this->OnClickList = 0;
  *(undefined8 *)&(this->OnClickList).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickList).field_0x10 = 0;
  return this;
}

// UDS_M_ContextMenuPopup @ 14b510af0

UDS_M_ContextMenuPopup * __thiscall
UDS_M_ContextMenuPopup::UDS_M_ContextMenuPopup
          (UDS_M_ContextMenuPopup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ContextMenuPopup__6B_;
  (this->ContextMenu).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextMenu).ArrayNum = 0;
  (this->ContextMenu).ArrayMax = 0;
  *(undefined8 *)&this->OnClickList = 0;
  *(undefined8 *)&(this->OnClickList).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickList).field_0x10 = 0;
  return this;
}

// ~UDS_M_ContextMenuPopup @ 14b512cb0

void __thiscall UDS_M_ContextMenuPopup::~UDS_M_ContextMenuPopup(UDS_M_ContextMenuPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_ContextMenuPopup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickList);
  pvVar1 = *(void **)&(this->OnClickList).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickList);
  DestructItems<FDS_Text,int>
            ((FDS_Text *)(this->ContextMenu).AllocatorInstance.Data,(this->ContextMenu).ArrayNum);
  pFVar2 = (this->ContextMenu).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5156c0

UClass * __cdecl UDS_M_ContextMenuPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ContextMenuPopup",
               &Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_ContextMenuPopup,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ContextMenuPopup>,
               InternalVTableHelperCtorCaller<UDS_M_ContextMenuPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ContextMenuPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ContextMenuPopup @ 14b516c20

void __cdecl UDS_M_ContextMenuPopup::StaticRegisterNativesUDS_M_ContextMenuPopup(void)

{
  return;
}

// AddContextMenu @ 14bce7f30

void __thiscall
UDS_M_ContextMenuPopup::AddContextMenu(UDS_M_ContextMenuPopup *this,FDS_Text *param_1)

{
  int *piVar1;
  TArray<FDS_Text,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_Text *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar2 = &this->ContextMenu;
  pFVar3 = (FDS_Text *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ContextMenu).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->ContextMenu).ArrayNum;
  piVar1 = &(this->ContextMenu).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ContextMenu).ArrayNum = iVar7 + 1;
  FDS_Text::FDS_Text((FDS_Text *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x50),param_1
                    );
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar4 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// GetDropdownList @ 14bcf6c20

TArray<FDS_Text,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ContextMenuPopup::GetDropdownList
          (UDS_M_ContextMenuPopup *this,
          TArray<FDS_Text,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FDS_Text *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ContextMenu).ArrayNum;
  pFVar2 = (FDS_Text *)(this->ContextMenu).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FDS_Text,FDS_Text,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// InitModel @ 14bd01e10

void __thiscall UDS_M_ContextMenuPopup::InitModel(UDS_M_ContextMenuPopup *this)

{
  return;
}

