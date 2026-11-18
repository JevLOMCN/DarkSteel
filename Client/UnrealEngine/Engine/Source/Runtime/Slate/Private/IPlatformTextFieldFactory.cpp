// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// TryCreateInstance @ 1426e26a0

TUniquePtr<IPlatformTextField,TDefaultDelete<IPlatformTextField>_> __cdecl
IPlatformTextFieldFactory::TryCreateInstance(void)

{
  uint uVar1;
  IPlatformTextField *pIVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  TUniquePtr<IPlatformTextField,TDefaultDelete<IPlatformTextField>_> TVar9;
  IPlatformTextField *pIVar10;
  IPlatformTextField *in_RCX;
  ulonglong uVar11;
  IPlatformTextField IVar12;
  IPlatformTextField IVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  IPlatformTextField local_58;
  IPlatformTextField local_50;
  ForAnyElementType local_48;
  uint local_40;
  uint uStack_3c;
  
  IVar12 = (IPlatformTextField)0x0;
  pIVar7 = IModularFeatures::Get();
  FVar4 = FeatureName;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uStack_3c = 0;
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,FeatureName);
  IVar13 = IVar12;
  if (0 < iVar6) {
    do {
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,IVar13);
      local_58 = (IPlatformTextField)(lVar8 + -8);
      if (lVar8 == 0) {
        local_58 = IVar12;
      }
      if (((local_48.Data <= &local_58) &&
          (&local_58 < (IPlatformTextField *)(local_48.Data + (longlong)(int)uStack_3c * 8))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IPlatformTextField *)(*pcVar3)();
        return (TUniquePtr<IPlatformTextField,TDefaultDelete<IPlatformTextField>_>)TVar9.Ptr;
      }
      if (local_40 == uStack_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_48,(int *)&uStack_3c);
      }
      uVar1 = local_40 + 1;
      IVar13._0_4_ = IVar13._0_4_ + 1;
      IVar13._4_4_ = 0;
      *(IPlatformTextField *)(local_48.Data + (longlong)(int)local_40 * 8) = local_58;
      local_40 = uVar1;
    } while ((int)IVar13._0_4_ < iVar6);
  }
  uVar1 = local_40;
  uVar11 = (ulonglong)(int)local_40;
  pIVar2 = (IPlatformTextField *)(local_48.Data + uVar11 * 8);
  FVar14.Data = local_48.Data;
  while( true ) {
    if ((uint)uVar11 != uVar1) {
      `TCheckedPointerIterator<IPlatformTextFieldFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((IPlatformTextField *)FVar14.Data == pIVar2) break;
    pIVar10 = (IPlatformTextField *)
              (*(code *)**(undefined8 **)*(IPlatformTextField *)FVar14.Data)
                        (*(IPlatformTextField *)FVar14.Data,&local_res10);
    if (&local_50 != pIVar10) {
      IVar12 = *pIVar10;
      *pIVar10 = (IPlatformTextField)0x0;
    }
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
    if (IVar12 != (IPlatformTextField)0x0) break;
    uVar11 = (ulonglong)local_40;
    FVar14.Data = FVar14.Data + 8;
  }
  *in_RCX = IVar12;
  if ((IPlatformTextField *)local_48.Data != (IPlatformTextField *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (TUniquePtr<IPlatformTextField,TDefaultDelete<IPlatformTextField>_>)in_RCX;
}

