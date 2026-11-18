// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory> @ 148012d20

TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory> *
__thiscall
UE::Net::
TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>
::
TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>
          (void *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FEscalationCounter *pFVar4;
  ForElementType<UE::Net::FEscalationCounter> *pFVar5;
  ForElementType<UE::Net::FEscalationCounter> *pFVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *pTVar11;
  longlong lVar12;
  ForElementType<UE::Net::FEscalationCounter> *pFVar13;
  ForElementType<UE::Net::FEscalationCounter> *pFVar14;
  int iVar15;
  undefined1 local_98 [16];
  ForElementType<UE::Net::FEscalationCounter> *local_88;
  UScriptStruct *pUStack_80;
  ForElementType<UE::Net::FEscalationCounter> *local_78;
  undefined8 uStack_70;
  FEscalationCounter *local_68;
  TArrayView<int,int> *pTStack_60;
  ForElementType<UE::Net::FEscalationCounter> *local_58;
  UScriptStruct *pUStack_50;
  ForElementType<UE::Net::FEscalationCounter> *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_98._0_4_ = 2;
  local_88 = (ForElementType<UE::Net::FEscalationCounter> *)CONCAT44(local_88._4_4_,1);
  local_98._8_8_ = (TArrayView<int,int> *)((longlong)this + 0x948);
  pUStack_80 = FNetFaultState::StaticStruct();
  pFVar4 = (FEscalationCounter *)((longlong)this + 0x1f0);
  local_68 = (FEscalationCounter *)local_98._0_8_;
  pTStack_60 = (TArrayView<int,int> *)local_98._8_8_;
  local_58 = local_88;
  local_78 = (ForElementType<UE::Net::FEscalationCounter> *)pFVar4;
  pUStack_50 = pUStack_80;
  local_48 = (ForElementType<UE::Net::FEscalationCounter> *)pFVar4;
  FEscalationManager::FEscalationManager(this,(FEscalationManagerParms *)&local_68);
  *(undefined4 *)((longlong)this + 0x208) = 0xffff0000;
  *(undefined8 *)((longlong)this + 0x1f8) = 0;
  pFVar5 = (ForElementType<UE::Net::FEscalationCounter> *)((longlong)this + 0x2a0);
  *(undefined8 *)((longlong)this + 0x200) = 0;
  pFVar6 = (ForElementType<UE::Net::FEscalationCounter> *)((longlong)this + 0x310);
  *(undefined1 *)((longlong)this + 0x20e) = 0;
  *(undefined ***)pFVar4 = &___7FNetFaultState__6B_;
  piVar1 = (int *)((longlong)this + 0x308);
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  piVar2 = (int *)((longlong)this + 0x298);
  *(undefined1 *)((longlong)this + 0x220) = 0;
  piVar3 = (int *)((longlong)this + 0x29c);
  *(undefined4 *)((longlong)this + 0x226) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  piVar7 = (int *)((longlong)this + 0x918);
  *(undefined2 *)((longlong)this + 0x20c) = 0xffff;
  *(undefined2 *)((longlong)this + 0x222) = 0xffff;
  *(undefined1 *)((longlong)this + 0x224) = 0xff;
  *piVar2 = 0;
  *piVar3 = 6;
  *(undefined8 *)((longlong)this + 0x300) = 0;
  *piVar1 = 0;
  *(undefined4 *)((longlong)this + 0x30c) = 6;
  *(undefined8 *)((longlong)this + 0x910) = 0;
  *piVar7 = 0;
  *(undefined4 *)((longlong)this + 0x91c) = 0x60;
  *(undefined8 *)((longlong)this + 0x938) = 0;
  *(undefined4 *)((longlong)this + 0x940) = 0;
  *(undefined4 *)((longlong)this + 0x944) = 6;
  ((TArrayView<int,int> *)((longlong)this + 0x948))->DataPtr = (int *)0x0;
  *(undefined4 *)((longlong)this + 0x950) = 0;
  iVar15 = *piVar2;
  if (iVar15 < 6) {
    iVar10 = Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                       (0x10,8,6 - iVar15,
                        (ForElementType<UE::Net::FEscalationCounter> *)((longlong)this + 0x230),
                        piVar2,piVar3);
    lVar12 = *(longlong *)((longlong)this + 0x290);
    if (*(longlong *)((longlong)this + 0x290) == 0) {
      lVar12 = (longlong)this + 0x230;
    }
    DefaultConstructItems<UE::Net::FEscalationCounter,int>
              ((void *)(lVar12 + (longlong)iVar10 * 0x10),6 - iVar15);
  }
  else if (6 < iVar15) {
    iVar15 = iVar15 + -6;
    if (iVar15 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                   *)(*pcVar8)();
        return pTVar11;
      }
    }
    else if (iVar15 == 0) goto LAB_148012f73;
    lVar12 = *(longlong *)((longlong)this + 0x290);
    if (*(longlong *)((longlong)this + 0x290) == 0) {
      lVar12 = (longlong)this + 0x230;
    }
    iVar10 = (*piVar2 - iVar15) + -6;
    if (iVar10 != 0) {
      memmove((void *)(lVar12 + 0x60),(void *)((longlong)iVar15 * 0x10 + lVar12 + 0x60),
              (longlong)iVar10 << 4);
    }
    *piVar2 = *piVar2 - iVar15;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
              (0x10,8,(ForElementType<UE::Net::FEscalationCounter> *)((longlong)this + 0x230),
               *piVar2,piVar3);
  }
LAB_148012f73:
  iVar15 = *piVar1;
  if (iVar15 < 6) {
    iVar10 = Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                       (0x10,8,6 - iVar15,pFVar5,piVar1,(int *)((longlong)this + 0x30c));
    pFVar13 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300);
    if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300) ==
        (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
      pFVar13 = pFVar5;
    }
    DefaultConstructItems<UE::Net::FEscalationCounter,int>
              (pFVar13->InlineData + (longlong)iVar10 * 0x10,6 - iVar15);
  }
  else if (6 < iVar15) {
    iVar15 = iVar15 + -6;
    if (iVar15 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                   *)(*pcVar8)();
        return pTVar11;
      }
    }
    else if (iVar15 == 0) goto LAB_14801305e;
    pFVar13 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300);
    if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300) ==
        (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
      pFVar13 = pFVar5;
    }
    iVar10 = (*piVar1 - iVar15) + -6;
    if (iVar10 != 0) {
      memmove(&pFVar13->SecondaryData,&pFVar13->SecondaryData + (longlong)iVar15 * 2,
              (longlong)iVar10 << 4);
    }
    *piVar1 = *piVar1 - iVar15;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
              (0x10,8,pFVar5,*piVar1,(int *)((longlong)this + 0x30c));
  }
LAB_14801305e:
  iVar15 = *piVar7;
  if (iVar15 < 0x60) {
    iVar10 = Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                       (0x10,8,0x60 - iVar15,pFVar6,piVar7,(int *)((longlong)this + 0x91c));
    pFVar14 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910);
    if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910) ==
        (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
      pFVar14 = pFVar6;
    }
    DefaultConstructItems<UE::Net::FEscalationCounter,int>
              (pFVar14->InlineData + (longlong)iVar10 * 0x10,0x60 - iVar15);
  }
  else if (0x60 < iVar15) {
    iVar15 = iVar15 + -0x60;
    if (iVar15 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                   *)(*pcVar8)();
        return pTVar11;
      }
    }
    else if (iVar15 == 0) goto LAB_14801315c;
    pFVar14 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910);
    if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910) ==
        (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
      pFVar14 = pFVar6;
    }
    iVar10 = (*piVar7 - iVar15) + -0x60;
    if (iVar10 != 0) {
      memmove(&pFVar14->SecondaryData,&pFVar14->SecondaryData + (longlong)iVar15 * 2,
              (longlong)iVar10 << 4);
    }
    *piVar7 = *piVar7 - iVar15;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
              (0x10,8,pFVar6,*piVar7,(int *)((longlong)this + 0x91c));
  }
LAB_14801315c:
  pTStack_60 = (TArrayView<int,int> *)CONCAT44(pTStack_60._4_4_,2);
  pUStack_50 = (UScriptStruct *)CONCAT44(pUStack_50._4_4_,2);
  local_98._0_8_ = *(FEscalationCounter **)((longlong)this + 0x290);
  if (*(FEscalationCounter **)((longlong)this + 0x290) == (FEscalationCounter *)0x0) {
    local_98._0_8_ = (FEscalationCounter *)((longlong)this + 0x230);
  }
  uStack_40 = 0x20;
  local_88 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300);
  if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x300) ==
      (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
    local_88 = pFVar5;
  }
  local_98._8_8_ = pTStack_60;
  local_78 = *(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910);
  if (*(ForElementType<UE::Net::FEscalationCounter> **)((longlong)this + 0x910) ==
      (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
    local_78 = pFVar6;
  }
  pUStack_80 = pUStack_50;
  uStack_70._4_4_ = uStack_3c;
  uStack_70._0_4_ = 0x20;
  local_68 = (FEscalationCounter *)local_98._0_8_;
  local_58 = local_88;
  local_48 = local_78;
  FEscalationManager::InitParms(this,(FEscalationManagerInitParms *)local_98);
  return this;
}

