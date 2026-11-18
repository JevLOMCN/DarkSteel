// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 2

// Get @ 145981190

IHeadMountedDisplayModule * __cdecl IHeadMountedDisplayModule::Get(void)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  IHeadMountedDisplayModule *pIVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  IHeadMountedDisplayModule *local_38;
  ForAnyElementType local_30;
  int local_28;
  int aiStack_24 [3];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                         ,0x4d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pIVar6 = (IHeadMountedDisplayModule *)(*pcVar2)();
    return pIVar6;
  }
  pIVar7 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                    ::__l2::HMDFeatureName,L"HMD");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
          ::__l2::HMDFeatureName;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  aiStack_24[0] = 0;
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))
                    (pIVar7,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                            ::__l2::HMDFeatureName);
  pIVar6 = (IHeadMountedDisplayModule *)0x0;
  if (0 < iVar5) {
    do {
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar3,pIVar6);
      local_38 = (IHeadMountedDisplayModule *)(lVar8 - 8);
      if (lVar8 == 0) {
        local_38 = (IHeadMountedDisplayModule *)0x0;
      }
      if (((local_30.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)aiStack_24[0] * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pIVar6 = (IHeadMountedDisplayModule *)(*pcVar2)();
        return pIVar6;
      }
      if (local_28 == aiStack_24[0]) {
        local_28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_30,aiStack_24);
      }
      iVar1 = local_28 + 1;
      uVar9 = (int)pIVar6 + 1;
      *(IHeadMountedDisplayModule **)(local_30.Data + (longlong)local_28 * 8) = local_38;
      pIVar6 = (IHeadMountedDisplayModule *)(ulonglong)uVar9;
      local_28 = iVar1;
    } while ((int)uVar9 < iVar5);
  }
  AlgoImpl::
  IntroSortInternal<IHeadMountedDisplayModule_*,int,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
            ((IHeadMountedDisplayModule **)local_30.Data,local_28,local_res8[0],
             (FCompareModulePriority *)local_res8);
  if ((local_28 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pIVar6 = (IHeadMountedDisplayModule *)(*pcVar2)();
    return pIVar6;
  }
  pIVar6 = *(IHeadMountedDisplayModule **)local_30.Data;
  FMemory::Free(local_30.Data);
  return pIVar6;
}

// GetModulePriority @ 145982260

/* WARNING: Removing unreachable block (ram,0x000145982389) */

float __thiscall IHeadMountedDisplayModule::GetModulePriority(IHeadMountedDisplayModule *this)

{
  code *pcVar1;
  void *_Src;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  float fVar8;
  undefined1 local_res8 [8];
  float local_res10 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  void *local_38;
  int local_30;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  (**(code **)((longlong)*this + 0x48))(this,&local_58);
  (**(code **)((longlong)*this + 0x40))(this,&local_38);
  if (local_30 < 2) {
    ::FString::FString(&local_48,L"Default");
    if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar8 = (float)(*pcVar1)();
      return fVar8;
    }
    iVar3 = (int)local_50;
    if ((int)local_50 == local_50._4_4_) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58,(int *)((longlong)&local_50 + 4));
    }
    local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
    lVar4 = (longlong)iVar3;
    *(undefined8 *)(local_58.Data + lVar4 * 0x10) = 0;
    *(FScriptContainerElement **)(local_58.Data + lVar4 * 0x10) =
         local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_58.Data + lVar4 * 0x10 + 8) = local_48.Data.ArrayNum;
    *(int *)(local_58.Data + lVar4 * 0x10 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
  }
  else {
    if (((local_58.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < local_58.Data + (longlong)local_50._4_4_ * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar8 = (float)(*pcVar1)();
      return fVar8;
    }
    iVar3 = (int)local_50;
    if ((int)local_50 == local_50._4_4_) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58,(int *)((longlong)&local_50 + 4));
    }
    _Src = local_38;
    pFVar6 = local_58.Data + (longlong)iVar3 * 0x10;
    local_50 = CONCAT44(local_50._4_4_,iVar3 + 1);
    *(FScriptContainerElement **)pFVar6 = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_30;
    if (local_30 == 0) {
      *(int *)(pFVar6 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,(ForAnyElementType *)pFVar6,local_30,(int *)(pFVar6 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar6,_Src,(longlong)local_30 * 2);
    }
  }
  iVar3 = (int)local_50;
  local_res10[0] = 0.0;
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  FVar5.Data = local_58.Data;
  while( true ) {
    if ((int)local_50 != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar5.Data == pFVar6) break;
    if (*(int *)(FVar5.Data + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)FVar5.Data;
    }
    bVar2 = FConfigCacheIni::GetFloat(GConfig,L"HMDPluginPriority",pwVar7,local_res10,&GEngineIni);
    if (bVar2) break;
    FVar5.Data = FVar5.Data + 0x10;
  }
  fVar8 = local_res10[0];
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return fVar8;
}

