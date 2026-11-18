// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FindClassForAnimationAsset @ 14744ac30

UClass * __cdecl
UE::Anim::DataModel::IAnimationDataModels::FindClassForAnimationAsset(UAnimSequenceBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  ulonglong local_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  pIVar8 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"AnimationDataModels");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar5 = `public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
          ::__l2::FeatureName;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))
                    (pIVar8,`public:_static_class_FName___cdecl_UE::Anim::DataModel::IAnimationDataModels::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  uVar14 = 0;
  if (0 < iVar7) {
    do {
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar5,uVar14);
      local_48 = lVar9 - 8;
      if (lVar9 == 0) {
        local_48 = 0;
      }
      if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)aiStack_34[0] * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar10 = (UClass *)(*pcVar4)();
        return pUVar10;
      }
      if (local_38 == aiStack_34[0]) {
        local_38 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_40,aiStack_34);
      }
      iVar1 = local_38 + 1;
      uVar13 = (int)uVar14 + 1;
      *(ulonglong *)(local_40.Data + (longlong)local_38 * 8) = local_48;
      uVar14 = (ulonglong)uVar13;
      local_38 = iVar1;
    } while ((int)uVar13 < iVar7);
  }
  pUVar10 = UAnimDataModel::StaticClass();
  iVar7 = local_38;
  pFVar2 = local_40.Data + (longlong)local_38 * 8;
  FVar12.Data = local_40.Data;
  while( true ) {
    if (local_38 != iVar7) {
      `TCheckedPointerIterator<UE::Anim::DataModel::IAnimationDataModels_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (FVar12.Data == pFVar2) break;
    plVar3 = *(longlong **)FVar12.Data;
    if ((plVar3 != (longlong *)0x0) &&
       (pUVar11 = (UClass *)(**(code **)(*plVar3 + 8))(plVar3,param_1), pUVar11 != (UClass *)0x0)) {
      pUVar10 = pUVar11;
    }
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return pUVar10;
}

