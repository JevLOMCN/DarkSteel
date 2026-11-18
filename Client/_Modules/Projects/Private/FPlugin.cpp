// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 23

// FPlugin @ 141e0d450

FPlugin * __thiscall
FPlugin::FPlugin(FPlugin *this,FString *param_1,FPluginDescriptor *param_2,EPluginType param_3)

{
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPlugin__6B_;
  FPaths::GetBaseFilename(&this->Name,param_1,true);
  ::FString::FString(&this->FileName,param_1);
  (this->PluginExtensionFileNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PluginExtensionFileNameList).ArrayNum = 0;
  (this->PluginExtensionFileNameList).ArrayMax = 0;
  FPluginDescriptor::FPluginDescriptor(&this->Descriptor,param_2);
  this->bEnabled = false;
  this->bIsMounted = false;
  this->Type = param_3;
  this->ExplicitlyLoadedLocalizationDataMountedRefCount = '\0';
  return this;
}

// ~FPlugin @ 141e0f2a0

void __thiscall FPlugin::~FPlugin(FPlugin *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FPlugin__6B_;
  FPluginDescriptor::~FPluginDescriptor(&this->Descriptor);
  DestructItems<FString,int>
            ((FString *)(this->PluginExtensionFileNameList).AllocatorInstance.Data,
             (this->PluginExtensionFileNameList).ArrayNum);
  pFVar3 = (this->PluginExtensionFileNameList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IPlugin__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141e0f321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CanContainContent @ 141e15970

bool __thiscall FPlugin::CanContainContent(FPlugin *this)

{
  return (this->Descriptor).bCanContainContent;
}

// CanContainVerse @ 141e15980

bool __thiscall FPlugin::CanContainVerse(FPlugin *this)

{
  return (this->Descriptor).bCanContainVerse;
}

// GetBaseDir @ 141e22030

FString * __thiscall FPlugin::GetBaseDir(FPlugin *this,FString *__return_storage_ptr__)

{
  FPaths::GetPath(__return_storage_ptr__,&this->FileName);
  return __return_storage_ptr__;
}

// GetContentDir @ 141e22f50

FString * __thiscall FPlugin::GetContentDir(FPlugin *this,FString *__return_storage_ptr__)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  pTVar1 = &FPaths::GetPath(&local_18,&this->FileName)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar1,9 - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend(__return_storage_ptr__,L"Content",7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDeprecatedEngineVersion @ 141e230d0

FString * __thiscall FPlugin::GetDeprecatedEngineVersion(FPlugin *this)

{
  return &(this->Descriptor).DeprecatedEngineVersion;
}

// GetDescriptor @ 141e230e0

FPluginDescriptor * __thiscall FPlugin::GetDescriptor(FPlugin *this)

{
  return &this->Descriptor;
}

// GetDescriptorFileName @ 141e230f0

FString * __thiscall FPlugin::GetDescriptorFileName(FPlugin *this)

{
  return &this->FileName;
}

// GetExtensionBaseDirs @ 141e248b0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FPlugin::GetExtensionBaseDirs
          (FPlugin *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FString local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->PluginExtensionFileNameList).ArrayNum;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar3 = (this->PluginExtensionFileNameList).ArrayNum;
    pFVar7 = (this->PluginExtensionFileNameList).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this->PluginExtensionFileNameList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar8) break;
      pFVar5 = FPaths::GetPath(&local_38,(FString *)pFVar7);
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = (pFVar5->Data).ArrayNum;
      *(int *)(pFVar6 + 0xc) = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0x10;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// GetFriendlyName @ 141e24d30

FString * __thiscall FPlugin::GetFriendlyName(FPlugin *this)

{
  longlong lVar1;
  
  lVar1 = 0x18;
  if (1 < (this->Descriptor).FriendlyName.Data.ArrayNum) {
    lVar1 = 0x60;
  }
  return (FString *)((longlong)&this->_padding_ + lVar1);
}

// GetLoadedFrom @ 141e24ec0

EPluginLoadedFrom __thiscall FPlugin::GetLoadedFrom(FPlugin *this)

{
  EPluginLoadedFrom EVar1;
  
  EVar1 = Engine;
  if (this->Type != Engine) {
    EVar1 = (EPluginLoadedFrom)(this->Type != Enterprise);
  }
  return EVar1;
}

// GetMountedAssetPath @ 141e254d0

FString * __thiscall FPlugin::GetMountedAssetPath(FPlugin *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->Name).Data.ArrayNum;
  iVar2 = iVar1 + 1;
  if (iVar1 == 0) {
    iVar2 = 2;
  }
  ::FString::Reserve(__return_storage_ptr__,iVar2);
  ::FString::AppendChar(__return_storage_ptr__,L'/');
  iVar1 = (this->Name).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChar(__return_storage_ptr__,L'/');
  return __return_storage_ptr__;
}

// GetName @ 141e25560

FString * __thiscall FPlugin::GetName(FPlugin *this)

{
  return &this->Name;
}

// GetType @ 141e25880

EPluginType __thiscall FPlugin::GetType(FPlugin *this)

{
  return this->Type;
}

// GetVersePath @ 141e25a00

FString * __thiscall FPlugin::GetVersePath(FPlugin *this)

{
  return &(this->Descriptor).VersePath;
}

// GetVerseVersion @ 141e25a10

TOptional<unsigned_int> __thiscall FPlugin::GetVerseVersion(FPlugin *this)

{
  bool bVar1;
  TOptional<unsigned_int> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  bVar1 = (this->Descriptor).VerseVersion.bIsSet;
  *(bool *)((longlong)in_RDX + 4) = bVar1;
  if (bVar1 != false) {
    *(uint *)in_RDX = (this->Descriptor).VerseVersion.TypedValue;
  }
  return in_RDX;
}

// IsEnabled @ 141e26620

bool __thiscall FPlugin::IsEnabled(FPlugin *this)

{
  return this->bEnabled;
}

// IsEnabledByDefault @ 141e26630

/* WARNING: Removing unreachable block (ram,0x000141e26666) */

bool __thiscall FPlugin::IsEnabledByDefault(FPlugin *this,bool param_1)

{
  EPluginEnabledByDefault EVar1;
  
  EVar1 = (this->Descriptor).EnabledByDefault;
  if (EVar1 == Enabled) {
    if ((this->Type != Engine) && (this->Type != Enterprise)) {
      return true;
    }
    return param_1;
  }
  if (((EVar1 != Disabled) && (this->Type != Engine)) && (this->Type != Enterprise)) {
    return true;
  }
  return false;
}

// IsHidden @ 141e26800

bool __thiscall FPlugin::IsHidden(FPlugin *this)

{
  return (this->Descriptor).bIsHidden;
}

// IsMounted @ 141e26ab0

bool __thiscall FPlugin::IsMounted(FPlugin *this)

{
  return this->bIsMounted;
}

// IsSceneGraphEnabled @ 141e26cf0

bool __thiscall FPlugin::IsSceneGraphEnabled(FPlugin *this)

{
  return (this->Descriptor).bEnableSceneGraph;
}

// UpdateDescriptor @ 141e3f470

bool __thiscall FPlugin::UpdateDescriptor(FPlugin *this,FPluginDescriptor *param_1,FText *param_2)

{
  bool bVar1;
  IPluginManager *pIVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this_01;
  
  bVar1 = FPluginDescriptor::UpdatePluginFile(param_1,&this->FileName,param_2);
  if (!bVar1) {
    return false;
  }
  FPluginDescriptor::operator=(&this->Descriptor,param_1);
  pIVar2 = IPluginManager::Get();
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar2 + 0x130))(pIVar2);
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
  if (bVar1) {
    this_01 = (TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar2 + 0x130))(pIVar2);
    TMulticastDelegate<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::Broadcast
              (this_01,(IPlugin *)this);
  }
  return true;
}

