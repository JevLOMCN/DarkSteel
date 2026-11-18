// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StartupModule @ 14cd933e0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FGeometryScriptingCoreModule::StartupModule(FGeometryScriptingCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  FCoreRedirect *pFVar7;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FCoreRedirect *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  TArrayView<FCoreRedirect_const_,int> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x8a0,&local_a8,(int *)((longlong)&local_a0 + 4));
  pFVar7 = (FCoreRedirect *)(local_a8.Data + (longlong)iVar3 * 0xa0);
  local_a0._0_4_ = iVar3 + 1;
  pFVar4 = ::FString::FString(&local_68,L"AppendRectangle_Compatibility_5_0");
  pFVar5 = ::FString::FString(&local_58,L"AppendRectangle");
  FCoreRedirect::FCoreRedirect(pFVar7,Type_Function,pFVar5,pFVar4);
  if ((int)local_a0 == local_a0._4_4_) {
    local_a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_a8,(int *)((longlong)&local_a0 + 4));
  }
  pFVar7 = (FCoreRedirect *)(local_a8.Data + (longlong)(int)local_a0 * 0xa0);
  local_a0._0_4_ = (int)local_a0 + 1;
  pFVar4 = ::FString::FString(&local_48,L"AppendRoundRectangle_Compatibility_5_0");
  pFVar5 = ::FString::FString(&local_38,L"AppendRoundRectangle");
  FCoreRedirect::FCoreRedirect(pFVar7,Type_Function,pFVar5,pFVar4);
  if ((int)local_a0 == local_a0._4_4_) {
    local_a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8a0,&local_a8,(int *)((longlong)&local_a0 + 4));
  }
  lVar6 = (longlong)(int)local_a0;
  local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + 1);
  pFVar7 = (FCoreRedirect *)(local_a8.Data + lVar6 * 0xa0);
  pFVar4 = ::FString::FString(&local_28,L"ApplyMeshExtrude_Compatibility_5p0");
  pFVar5 = ::FString::FString(&local_18,L"ApplyMeshExtrude");
  FCoreRedirect::FCoreRedirect(pFVar7,Type_Function,pFVar5,pFVar4);
  ::FString::FString(&local_88,L"GeometryScriptingCore");
  iStack_90 = (int)local_a0;
  local_98 = (FCoreRedirect *)local_a8.Data;
  if ((int)local_a0 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78._12_4_ = uStack_8c;
  local_78.ArrayNum = iStack_90;
  local_78.DataPtr = local_98;
  FCoreRedirects::AddRedirectList(&local_78,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  DestructItems<FCoreRedirect,int>((FCoreRedirect *)local_a8.Data,(int)local_a0);
  if ((FCoreRedirect *)local_a8.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// ShutdownModule @ 14cd935d0

void __thiscall FGeometryScriptingCoreModule::ShutdownModule(FGeometryScriptingCoreModule *this)

{
  return;
}

