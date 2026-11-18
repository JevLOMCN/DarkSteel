// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// SetResourceCollection @ 145cf1ad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`RHIValidation::CollectShaderBindingTableResources'::__l2::FResourceBinder::SetResourceCollection
          (void *this,FRHIResourceCollection *param_1,uchar param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FResourceIdentity *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  FViewIdentity *pFVar11;
  undefined1 local_98 [8];
  uint *local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  FViewIdentity local_50;
  
  iVar2 = (param_1->Members).ArrayNum;
  pFVar7 = (param_1->Members).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    if (pFVar7 == pFVar8) {
      return;
    }
    FVar1 = pFVar7[8];
    if (FVar1 == (FScriptContainerElement)0x0) {
      lVar3 = *(longlong *)pFVar7;
      if (lVar3 != 0) {
        lVar9 = *(longlong *)this;
        uVar10 = (ulonglong)*(uint *)((longlong)this + 0x10);
        local_70 = (uint *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 8))(lVar3 + 0x28);
        local_68 = 0;
        pFVar11 = (FViewIdentity *)&local_70;
        pFVar6 = (FResourceIdentity *)local_98;
        local_60 = 0;
        local_64 = *local_70;
        local_5c = local_70[1];
        local_58 = 0;
        local_54 = 1;
        goto LAB_145cf1c34;
      }
    }
    else if (FVar1 == (FScriptContainerElement)0x1) {
      lVar3 = *(longlong *)pFVar7;
      if (lVar3 != 0) {
        lVar9 = *(longlong *)this;
        uVar10 = (ulonglong)*(uint *)((longlong)this + 0x10);
        local_90 = (uint *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 8))(lVar3 + 0x28);
        local_88 = 0;
        pFVar11 = (FViewIdentity *)&local_90;
        pFVar6 = (FResourceIdentity *)&stack0x00000020;
        local_80 = 0;
        local_84 = *local_90;
        local_7c = local_90[1];
        local_78 = 0;
        local_74 = 1;
        goto LAB_145cf1c34;
      }
    }
    else if ((FVar1 == (FScriptContainerElement)0x2) && (lVar3 = *(longlong *)pFVar7, lVar3 != 0)) {
      lVar9 = *(longlong *)this;
      uVar10 = (ulonglong)*(uint *)((longlong)this + 0x10);
      RHIValidation::FViewIdentity::FViewIdentity
                (&local_50,*(FRHIViewableResource **)(lVar3 + 0x18),(FRHIViewDesc *)(lVar3 + 0x20));
      pFVar11 = &local_50;
      pFVar6 = (FResourceIdentity *)&stack0x00000010;
LAB_145cf1c34:
      TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
      ::Emplace<RHIValidation::FResourceIdentity_const_&>
                ((TSet<RHIValidation::FResourceIdentity,DefaultKeyFuncs<RHIValidation::FResourceIdentity,0>,FDefaultSetAllocator>
                  *)(uVar10 * 0xa0 + lVar9 + 8),pFVar6,(bool *)pFVar11);
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

