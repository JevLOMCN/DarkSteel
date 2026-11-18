// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// ReleaseRHI @ 1484305f0

void __thiscall FSubsurfaceProfileTexture::ReleaseRHI(FSubsurfaceProfileTexture *this)

{
  TRefCountPtr<IPooledRenderTarget> TVar1;
  
  TVar1.Reference = GSSProfiles.Reference;
  if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
    GSSProfiles.Reference = (IPooledRenderTarget *)0x0;
    (**(code **)((TVar1.Reference)->_padding_ + 0x38))();
  }
  TVar1.Reference = GSSProfilesPreIntegratedTexture.Reference;
  if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
    GSSProfilesPreIntegratedTexture.Reference = (IPooledRenderTarget *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014843062f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((TVar1.Reference)->_padding_ + 0x38))();
    return;
  }
  return;
}

// FSubsurfaceProfileTexture @ 148443590

FSubsurfaceProfileTexture * __thiscall
FSubsurfaceProfileTexture::FSubsurfaceProfileTexture(FSubsurfaceProfileTexture *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSubsurfaceProfileTexture *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FLinearColor_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSubsurfaceProfileTexture__6B_;
  (this->SubsurfaceProfileEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsurfaceProfileEntries).ArrayNum = 0;
  (this->SubsurfaceProfileEntries).ArrayMax = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSubsurfaceProfileTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&local_a8._s_0);
  UpgradeSubsurfaceProfileParameters((FSubsurfaceProfileStruct *)&local_a8._s_0);
  pFVar5 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data;
  local_158 = local_a8._0_8_;
  uStack_150 = local_a8._8_8_;
  local_148 = local_98;
  uStack_140 = uStack_90;
  local_138 = local_88;
  uStack_130 = uStack_80;
  local_128 = local_78;
  uStack_120 = uStack_70;
  local_118 = local_68;
  uStack_110 = uStack_60;
  local_108 = local_58;
  uStack_100 = uStack_50;
  local_f8 = local_48;
  uStack_f0 = uStack_40;
  local_e8 = local_38;
  uStack_e0 = uStack_30;
  local_d8 = local_28;
  uStack_d0 = uStack_20;
  local_c8 = local_18;
  uStack_c0 = uStack_10;
  local_b8 = 0;
  if ((pFVar5 <= (FScriptContainerElement *)&local_158) &&
     ((FScriptContainerElement *)&local_158 <
      pFVar5 + (longlong)(this->SubsurfaceProfileEntries).ArrayMax * 0xa8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSubsurfaceProfileTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (this->SubsurfaceProfileEntries).ArrayNum;
  if (iVar3 == (this->SubsurfaceProfileEntries).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,&(this->SubsurfaceProfileEntries).AllocatorInstance,
                       &(this->SubsurfaceProfileEntries).ArrayMax);
  }
  (this->SubsurfaceProfileEntries).ArrayNum = iVar3 + 1;
  pFVar5 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data + (longlong)iVar3 * 0xa8;
  *(undefined8 *)pFVar5 = local_158;
  *(undefined8 *)(pFVar5 + 8) = uStack_150;
  *(undefined8 *)(pFVar5 + 0x10) = local_148;
  *(undefined8 *)(pFVar5 + 0x18) = uStack_140;
  *(undefined8 *)(pFVar5 + 0x20) = local_138;
  *(undefined8 *)(pFVar5 + 0x28) = uStack_130;
  *(undefined8 *)(pFVar5 + 0x30) = local_128;
  *(undefined8 *)(pFVar5 + 0x38) = uStack_120;
  *(undefined8 *)(pFVar5 + 0x40) = local_118;
  *(undefined8 *)(pFVar5 + 0x48) = uStack_110;
  *(undefined8 *)(pFVar5 + 0x50) = local_108;
  *(undefined8 *)(pFVar5 + 0x58) = uStack_100;
  *(undefined8 *)(pFVar5 + 0x60) = local_f8;
  *(undefined8 *)(pFVar5 + 0x68) = uStack_f0;
  *(undefined8 *)(pFVar5 + 0x70) = local_e8;
  *(undefined8 *)(pFVar5 + 0x78) = uStack_e0;
  *(undefined8 *)(pFVar5 + 0x80) = local_d8;
  *(undefined8 *)(pFVar5 + 0x88) = uStack_d0;
  *(undefined8 *)(pFVar5 + 0x90) = local_c8;
  *(undefined8 *)(pFVar5 + 0x98) = uStack_c0;
  *(undefined8 *)(pFVar5 + 0xa0) = local_b8;
  return this;
}

// ~FSubsurfaceProfileTexture @ 148446960

void __thiscall
FSubsurfaceProfileTexture::~FSubsurfaceProfileTexture(FSubsurfaceProfileTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubsurfaceProfileTexture__6B_;
  pFVar1 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddProfile @ 1484515c0

int __thiscall
FSubsurfaceProfileTexture::AddProfile
          (FSubsurfaceProfileTexture *this,FSubsurfaceProfileStruct *param_1,
          USubsurfaceProfile *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  USubsurfaceProfile *local_c8;
  FLinearColor_u_0 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((param_2 == (USubsurfaceProfile *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                         ,0x92,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = FindAllocationId(this,param_2);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FindAllocationId(InProfile) == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                         ,0x93,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar7 = 1;
  if (1 < (this->SubsurfaceProfileEntries).ArrayNum) {
    lVar8 = 0xa8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->SubsurfaceProfileEntries).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (*(longlong *)((this->SubsurfaceProfileEntries).AllocatorInstance.Data + lVar8 + 0xa0) == 0
         ) {
        uVar5 = 0;
        if ((int)uVar7 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        *(USubsurfaceProfile **)
         ((this->SubsurfaceProfileEntries).AllocatorInstance.Data +
         (longlong)(int)uVar7 * 0xa8 + 0xa0) = param_2;
        if (uVar7 != 0xffffffff) goto LAB_1484518b9;
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xa8;
    } while ((int)uVar7 < (this->SubsurfaceProfileEntries).ArrayNum);
  }
  local_168 = *(undefined8 *)&(param_1->SurfaceAlbedo).field0_0x0;
  uStack_160 = *(undefined8 *)((longlong)&(param_1->SurfaceAlbedo).field0_0x0 + 8);
  pFVar6 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data;
  local_158 = *(undefined8 *)&(param_1->MeanFreePathColor).field0_0x0;
  uStack_150 = *(undefined8 *)((longlong)&(param_1->MeanFreePathColor).field0_0x0 + 8);
  uVar7 = (this->SubsurfaceProfileEntries).ArrayNum;
  local_148._0_4_ = param_1->MeanFreePathDistance;
  local_148._4_4_ = param_1->WorldUnitScale;
  uStack_140 = *(undefined8 *)&param_1->bEnableBurley;
  local_138 = *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 4);
  uStack_130 = *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 0xc);
  local_128 = *(undefined8 *)&(param_1->SubsurfaceColor).field0_0x0;
  uStack_120 = *(undefined8 *)((longlong)&(param_1->SubsurfaceColor).field0_0x0 + 8);
  local_118 = *(undefined8 *)&(param_1->FalloffColor).field0_0x0;
  uStack_110 = *(undefined8 *)((longlong)&(param_1->FalloffColor).field0_0x0 + 8);
  local_108 = *(undefined8 *)&(param_1->BoundaryColorBleed).field0_0x0;
  uStack_100 = *(undefined8 *)((longlong)&(param_1->BoundaryColorBleed).field0_0x0 + 8);
  local_f8._0_1_ = param_1->Implementation;
  local_f8._1_3_ = *(undefined3 *)&param_1->field_0x71;
  local_f8._4_4_ = param_1->ExtinctionScale;
  uStack_f0._0_4_ = param_1->NormalScale;
  uStack_f0._4_4_ = param_1->ScatteringDistribution;
  local_e8._0_4_ = param_1->IOR;
  local_e8._4_4_ = param_1->Roughness0;
  uStack_e0._0_4_ = param_1->Roughness1;
  uStack_e0._4_4_ = param_1->LobeMix;
  local_d8 = *(undefined8 *)&(param_1->TransmissionTintColor).field0_0x0;
  uStack_d0 = *(undefined8 *)((longlong)&(param_1->TransmissionTintColor).field0_0x0 + 8);
  local_c8 = param_2;
  if (((pFVar6 <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 <
       pFVar6 + (longlong)(this->SubsurfaceProfileEntries).ArrayMax * 0xa8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = (this->SubsurfaceProfileEntries).ArrayNum;
  piVar1 = &(this->SubsurfaceProfileEntries).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,&(this->SubsurfaceProfileEntries).AllocatorInstance,piVar1);
  }
  (this->SubsurfaceProfileEntries).ArrayNum = iVar4 + 1;
  pFVar6 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data + (longlong)iVar4 * 0xa8;
  *(undefined8 *)pFVar6 = local_168;
  *(undefined8 *)(pFVar6 + 8) = uStack_160;
  *(undefined8 *)(pFVar6 + 0x10) = local_158;
  *(undefined8 *)(pFVar6 + 0x18) = uStack_150;
  *(undefined8 *)(pFVar6 + 0x20) = local_148;
  *(undefined8 *)(pFVar6 + 0x28) = uStack_140;
  *(undefined8 *)(pFVar6 + 0x30) = local_138;
  *(undefined8 *)(pFVar6 + 0x38) = uStack_130;
  *(undefined8 *)(pFVar6 + 0x40) = local_128;
  *(undefined8 *)(pFVar6 + 0x48) = uStack_120;
  *(undefined8 *)(pFVar6 + 0x50) = local_118;
  *(undefined8 *)(pFVar6 + 0x58) = uStack_110;
  *(undefined8 *)(pFVar6 + 0x60) = local_108;
  *(undefined8 *)(pFVar6 + 0x68) = uStack_100;
  *(undefined8 *)(pFVar6 + 0x70) = local_f8;
  *(undefined8 *)(pFVar6 + 0x78) = uStack_f0;
  *(undefined8 *)(pFVar6 + 0x80) = local_e8;
  *(undefined8 *)(pFVar6 + 0x88) = uStack_e0;
  *(undefined8 *)(pFVar6 + 0x90) = local_d8;
  *(undefined8 *)(pFVar6 + 0x98) = uStack_d0;
  *(USubsurfaceProfile **)(pFVar6 + 0xa0) = local_c8;
LAB_1484518b9:
  local_b8._0_8_ = *(undefined8 *)&(param_1->SurfaceAlbedo).field0_0x0;
  local_b8._8_8_ = *(undefined8 *)((longlong)&(param_1->SurfaceAlbedo).field0_0x0 + 8);
  local_a8 = *(undefined8 *)&(param_1->MeanFreePathColor).field0_0x0;
  uStack_a0 = *(undefined8 *)((longlong)&(param_1->MeanFreePathColor).field0_0x0 + 8);
  local_98._0_4_ = param_1->MeanFreePathDistance;
  local_98._4_4_ = param_1->WorldUnitScale;
  uStack_90 = *(undefined8 *)&param_1->bEnableBurley;
  local_88 = *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 4);
  uStack_80 = *(undefined8 *)((longlong)&(param_1->Tint).field0_0x0 + 0xc);
  local_78 = *(undefined8 *)&(param_1->SubsurfaceColor).field0_0x0;
  uStack_70 = *(undefined8 *)((longlong)&(param_1->SubsurfaceColor).field0_0x0 + 8);
  local_68 = *(undefined8 *)&(param_1->FalloffColor).field0_0x0;
  uStack_60 = *(undefined8 *)((longlong)&(param_1->FalloffColor).field0_0x0 + 8);
  local_58 = *(undefined8 *)&(param_1->BoundaryColorBleed).field0_0x0;
  uStack_50 = *(undefined8 *)((longlong)&(param_1->BoundaryColorBleed).field0_0x0 + 8);
  local_48._0_1_ = param_1->Implementation;
  local_48._1_3_ = *(undefined3 *)&param_1->field_0x71;
  local_48._4_4_ = param_1->ExtinctionScale;
  uStack_40._0_4_ = param_1->NormalScale;
  uStack_40._4_4_ = param_1->ScatteringDistribution;
  local_38._0_4_ = param_1->IOR;
  local_38._4_4_ = param_1->Roughness0;
  uStack_30._0_4_ = param_1->Roughness1;
  uStack_30._4_4_ = param_1->LobeMix;
  local_28 = *(undefined8 *)&(param_1->TransmissionTintColor).field0_0x0;
  uStack_20 = *(undefined8 *)((longlong)&(param_1->TransmissionTintColor).field0_0x0 + 8);
  UpdateProfile(this,uVar7,(FSubsurfaceProfileStruct *)&local_b8._s_0);
  return uVar7;
}

// CreateTexture @ 14845f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSubsurfaceProfileTexture::CreateTexture
          (FSubsurfaceProfileTexture *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  FRHITextureDesc *pFVar14;
  FLinearColor *pFVar15;
  FLinearColor_u_0 *pFVar16;
  FScriptContainerElement *pFVar17;
  TIntPoint<int>_u_0 TVar18;
  ushort *puVar19;
  ulonglong uVar20;
  float *pfVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_848 [32];
  ushort local_808;
  ushort local_806;
  ushort local_804;
  ushort local_802 [5];
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  FLLMScope local_7e8;
  FLLMScope local_7e4 [4];
  undefined1 local_7d8 [8];
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  bool bStack_7af;
  undefined4 uStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  FLinearColor_u_0 local_798;
  FLinearColor_u_0 local_788;
  FLinearColor_u_0 local_778;
  ESubsurfaceImplementationTechniqueHint local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  FLinearColor_u_0 local_748;
  undefined4 local_738;
  uint local_734;
  int local_730;
  FLinearColor_u_0 local_728;
  FLinearColor_u_0 local_718;
  FLinearColor_u_0 local_708;
  FLinearColor_u_0 local_6f8;
  FLinearColor_u_0 local_6e8;
  FLinearColor_u_0 local_6d8;
  FLinearColor_u_0 local_6c8;
  FLinearColor_u_0 local_6b8;
  FLinearColor_u_0 local_6a8;
  FLinearColor_u_0 local_698;
  FMemScope local_688;
  FMemScope local_680;
  longlong local_678;
  FRHITexture *local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 local_658;
  undefined2 local_654;
  FRHICommandListImmediate *local_650;
  FLinearColor_u_0 local_648;
  FLinearColor_u_0 local_638;
  FLinearColor_u_0 local_628;
  FLinearColor_u_0 local_618;
  FLinearColor_u_0 local_608;
  longlong local_5f8 [2];
  int local_5e8;
  FLinearColor local_5e0;
  FLinearColor local_5d0;
  FPooledRenderTargetDesc local_5b8;
  undefined1 local_558 [80];
  float local_508 [7];
  float fStack_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  undefined8 local_4c8;
  undefined4 uStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  FLinearColor local_4a8 [13];
  FLinearColor local_3d8 [9];
  FLinearColor local_348 [6];
  FLinearColor local_2e8 [32];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_848;
  uVar24 = 0;
  uVar13 = (this->SubsurfaceProfileEntries).ArrayNum;
  local_734 = uVar13;
  local_650 = param_1;
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Height",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                          ,0x1ba,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = 0x40;
  if (0x40 < uVar13) {
    uVar12 = uVar13;
  }
  TVar18 = (TIntPoint<int>_u_0)((ulonglong)uVar12 << 0x20 | 0x42);
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InExtent.Y",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x6c,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_5b8.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
  local_5b8.DebugName = L"UnknownTexture2D";
  local_5b8.UAVFormat = PF_Unknown;
  local_5b8.NumSamples = '\x01';
  local_5b8.FastVRAMPercentage = 0xff;
  local_5b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_5b8.AliasableFormats.ArrayNum = 0;
  local_5b8.AliasableFormats.ArrayMax = 1;
  local_5b8.Depth = 0;
  local_5b8.ArraySize = 1;
  local_5b8.field13_0x58.PackedBits = '\0';
  local_5b8.NumMips = '\x01';
  local_5b8.Flags = ShaderResource;
  local_5b8.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
  local_5b8.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
  local_5b8.Extent.field0_0x0 = TVar18;
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewDesc.Is2DTexture()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                          ,0x7a,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_5b8.Format = PF_A16B16G16R16;
  pFVar14 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_558,&local_5b8);
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_1,pFVar14,
             &GSSProfiles,L"SSProfiles");
  if ((void *)local_558._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_558._64_8_);
  }
  pFVar1 = ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
  FLLMScope::FLLMScope(local_7e4,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_680,Textures,true);
  local_668 = 0;
  local_658 = 1;
  local_660 = 0;
  local_654 = 0x100;
  local_670 = pFVar1;
  FLLMScope::FLLMScope(&local_7e8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_688,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_5f8,param_1);
  FMemScope::~FMemScope(&local_688);
  FLLMScope::~FLLMScope(&local_7e8);
  local_678 = local_5f8[0];
  local_730 = local_5e8;
  FMemScope::~FMemScope(&local_680);
  FLLMScope::~FLLMScope(local_7e4);
  memset(local_508,0,0x420);
  fVar8 = __real_37800080;
  local_738 = 0x477fffff;
  iVar22 = local_5e8;
  if (uVar13 != 0) {
    do {
      fVar28 = __real_3c1374bc;
      fVar7 = __real_3f800000;
      fVar29 = 0.0;
      uVar13 = 0;
      if ((int)uVar24 < (this->SubsurfaceProfileEntries).ArrayNum) {
        uVar13 = ~uVar24 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar17 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data +
                (longlong)(int)uVar24 * 0xa8;
      local_7d8 = *(undefined1 (*) [8])pFVar17;
      _fStack_7d0 = *(undefined8 *)(pFVar17 + 8);
      _local_7c8 = *(undefined8 *)(pFVar17 + 0x10);
      _fStack_7c0 = *(undefined8 *)(pFVar17 + 0x18);
      _local_7b8 = *(undefined8 *)(pFVar17 + 0x20);
      _uStack_7b0 = *(undefined8 *)(pFVar17 + 0x28);
      _local_7a8 = *(undefined8 *)(pFVar17 + 0x30);
      _fStack_7a0 = *(undefined8 *)(pFVar17 + 0x38);
      local_798._0_8_ = *(undefined8 *)(pFVar17 + 0x40);
      local_798._8_8_ = *(undefined8 *)(pFVar17 + 0x48);
      local_788 = *(FLinearColor_u_0 *)(pFVar17 + 0x50);
      local_778._0_8_ = *(undefined8 *)(pFVar17 + 0x60);
      local_778._8_8_ = *(undefined8 *)(pFVar17 + 0x68);
      _local_768 = *(undefined8 *)(pFVar17 + 0x70);
      _fStack_760 = *(undefined8 *)(pFVar17 + 0x78);
      _local_758 = *(undefined8 *)(pFVar17 + 0x80);
      _fStack_750 = *(undefined8 *)(pFVar17 + 0x88);
      local_748 = *(FLinearColor_u_0 *)(pFVar17 + 0x90);
      UpgradeSubsurfaceProfileParameters((FSubsurfaceProfileStruct *)local_7d8);
      fVar32 = __real_41200000;
      local_508[0] = fStack_7ac;
      if (fVar7 <= fStack_7ac) {
        local_508[0] = fVar7;
      }
      fVar30 = fStack_7c4;
      if (fVar7 <= fStack_7c4) {
        fVar30 = fVar7;
      }
      if (fVar7 <= fStack_7c0) {
        fStack_7c0 = fVar7;
      }
      if (fVar7 <= fStack_7bc) {
        fStack_7bc = fVar7;
      }
      if (fVar7 <= (float)local_7d8._0_4_) {
        local_7d8._0_4_ = fVar7;
      }
      if (local_508[0] <= 0.0) {
        local_508[0] = fVar29;
      }
      if (fVar30 <= fVar28) {
        fVar30 = fVar28;
      }
      if (fStack_7c0 <= fVar28) {
        fStack_7c0 = fVar28;
      }
      if (fStack_7bc <= fVar28) {
        fStack_7bc = fVar28;
      }
      auVar25._4_4_ = fVar7;
      auVar25._0_4_ = fVar7;
      auVar25._8_4_ = fVar7;
      auVar25._12_4_ = fVar7;
      auVar25 = minps((undefined1  [16])local_788,auVar25);
      if ((float)local_7d8._0_4_ <= fVar28) {
        local_7d8._0_4_ = fVar28;
      }
      auVar4._4_4_ = fVar28;
      auVar4._0_4_ = fVar28;
      auVar4._8_4_ = fVar28;
      auVar4._12_4_ = fVar28;
      local_788 = (FLinearColor_u_0)maxps(auVar25,auVar4);
      if (fVar7 <= local_7a8) {
        local_7a8 = fVar7;
      }
      if (fVar7 <= fStack_7a4) {
        fStack_7a4 = fVar7;
      }
      fVar27 = fStack_7a0;
      if (fVar7 <= fStack_7a0) {
        fVar27 = fVar7;
      }
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_4_ = fVar7;
      auVar3._12_4_ = fVar7;
      auVar25 = minps((undefined1  [16])local_748,auVar3);
      if (fVar7 <= (float)local_7d8._4_4_) {
        local_7d8._4_4_ = fVar7;
      }
      local_508[1] = local_7a8;
      if (local_7a8 <= 0.0) {
        local_508[1] = fVar29;
      }
      auVar5._4_4_ = fVar28;
      auVar5._0_4_ = fVar28;
      auVar5._8_4_ = fVar28;
      auVar5._12_4_ = fVar28;
      local_748 = (FLinearColor_u_0)maxps(auVar25,auVar5);
      local_508[2] = fStack_7a4;
      if (fStack_7a4 <= 0.0) {
        local_508[2] = fVar29;
      }
      if ((float)local_7d8._4_4_ <= fVar28) {
        local_7d8._4_4_ = fVar28;
      }
      if (fVar27 <= 0.0) {
        fVar27 = fVar29;
      }
      fVar29 = fStack_7d0;
      if (fVar7 <= fStack_7d0) {
        fVar29 = fVar7;
      }
      if (fVar7 <= local_7c8) {
        local_7c8 = fVar7;
      }
      if (fVar29 <= fVar28) {
        fVar29 = fVar28;
      }
      if (local_7c8 <= fVar28) {
        local_7c8 = fVar28;
      }
      if (fVar7 <= fStack_7cc) {
        fStack_7cc = fVar7;
      }
      fStack_7c4 = fVar30;
      if (fStack_7cc <= __real_3c1374bc) {
        fStack_7cc = __real_3c1374bc;
      }
      fStack_7d0 = fVar29;
      bVar10 = bStack_7af == false;
      local_508[3] = fStack_7b4 * __real_3ca3d70a;
      fStack_7ac = local_508[0];
      fStack_7a4 = local_508[2];
      local_7a8 = local_508[1];
      fStack_7a0 = fVar27;
      if (bVar10) {
        fVar28 = local_7c8 * local_7b8 * __real_41200000;
        fVar29 = fVar30 * local_7b8 * __real_41200000;
        fVar30 = fStack_7c0 * local_7b8 * __real_41200000;
        fStack_7ec = fStack_7bc * local_7b8 * __real_41200000;
        local_7f8 = fVar28;
        fStack_7f4 = fVar29;
        fStack_7f0 = fVar30;
        if (2 < (byte)LogSubsurfaceProfile._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile)
          ;
        }
      }
      else {
        local_6f8._s_0.R = local_7c8 * local_7b8;
        local_6f8._s_0.G = fVar30 * local_7b8;
        local_6f8._s_0.B = fStack_7c0 * local_7b8;
        local_6f8._s_0.A = fStack_7bc * local_7b8;
        local_6e8._0_4_ = local_7d8._0_4_;
        local_6e8._4_4_ = local_7d8._4_4_;
        local_6e8._s_0.B = fVar29;
        local_6e8._s_0.A = fStack_7cc;
        pFVar15 = GetDiffuseMeanFreePathFromMeanFreePath
                            (&local_5e0,(FLinearColor *)&local_6e8._s_0,
                             (FLinearColor *)&local_6f8._s_0);
        fVar28 = (pFVar15->field0_0x0)._s_0.R * __real_41855555;
        fVar29 = (pFVar15->field0_0x0)._s_0.G * __real_41855555;
        fVar30 = (pFVar15->field0_0x0)._s_0.B * __real_41855555;
        fStack_7ec = (pFVar15->field0_0x0)._s_0.A * __real_41855555;
        fVar32 = __real_41200000;
        local_7f8 = fVar28;
        fStack_7f4 = fVar29;
        fStack_7f0 = fVar30;
      }
      pTVar9 = CVarSSProfilesSamplingChannelSelection.Ref;
      bVar10 = IsInParallelGameThread();
      if (bVar10) {
LAB_14845fc02:
        lVar23 = 0;
      }
      else {
        bVar10 = IsInGameThread();
        lVar23 = 4;
        if (bVar10) goto LAB_14845fc02;
      }
      uVar13 = 1;
      if (*(int *)((longlong)pTVar9->ShadowedValue + lVar23) < 1) {
        uVar13 = *(uint *)((longlong)pTVar9->ShadowedValue + lVar23);
      }
      uVar12 = 0;
      if (0 < (int)uVar13) {
        uVar12 = uVar13;
      }
      if (uVar12 == 0) {
        local_648._0_8_ = CONCAT44(fStack_7f4,local_7f8);
        local_648._8_8_ = CONCAT44(fStack_7ec,fStack_7f0);
        pFVar16 = &local_648;
      }
      else {
        local_6d8._0_8_ = local_7d8;
        local_6d8._8_8_ = _fStack_7d0;
        local_638._0_8_ = CONCAT44(fStack_7f4,local_7f8);
        local_638._8_8_ = CONCAT44(fStack_7ec,fStack_7f0);
        pFVar16 = &GetMeanFreePathFromDiffuseMeanFreePath
                             (&local_5d0,(FLinearColor *)&local_6d8._s_0,
                              (FLinearColor *)&local_638._s_0)->field0_0x0;
      }
      fVar27 = (((FLinearColor_u_0 *)&(pFVar16->_s_0).R)->_s_0).R;
      fVar6 = (pFVar16->_s_0).G;
      fVar26 = fVar27;
      if (fVar27 <= fVar6) {
        fVar26 = fVar6;
      }
      if (fVar26 <= (pFVar16->_s_0).B) {
        fVar26 = (pFVar16->_s_0).B;
      }
      local_6b8._s_0.A = (float)local_7d8._0_4_;
      fVar31 = fVar28;
      if ((fVar27 != fVar26) && (local_6b8._s_0.A = fStack_7d0, fVar31 = fVar30, fVar6 == fVar26)) {
        local_6b8._s_0.A = (float)local_7d8._4_4_;
        fVar31 = fVar29;
      }
      if (__real_43fa0000 <= fVar29) {
        fVar29 = __real_43fa0000;
      }
      if (__real_43fa0000 <= fVar31) {
        fVar31 = __real_43fa0000;
      }
      if (__real_43fa0000 <= fVar28) {
        fVar28 = __real_43fa0000;
      }
      if (__real_43fa0000 <= fVar30) {
        fVar30 = __real_43fa0000;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      _fStack_7d0 = CONCAT44(local_6b8._s_0.A,fStack_7d0);
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
      local_508[4] = (float)local_7d8._0_4_;
      local_508[5] = (float)local_7d8._4_4_;
      local_508[6] = fStack_7d0;
      local_4e4 = fVar29 * __real_3b03126f;
      local_4e8 = fVar28 * __real_3b03126f;
      local_4dc = fVar31 * __real_3b03126f;
      local_4e0 = fVar30 * __real_3b03126f;
      local_4c8 = local_778._0_8_;
      local_4b8 = fStack_754 * __real_3f000000;
      if (fVar7 <= fStack_754 * __real_3f000000) {
        local_4b8 = fVar7;
      }
      if (local_4b8 <= 0.0) {
        local_4b8 = 0.0;
      }
      _uStack_4c0 = CONCAT44((float)(local_768 != SIH_AFIS),(int)local_778._8_8_);
      local_4b4 = fStack_750 * __real_3f000000;
      if (fVar7 <= fStack_750 * __real_3f000000) {
        local_4b4 = fVar7;
      }
      local_4b0 = fStack_74c;
      if (local_4b4 <= __real_00000000) {
        local_4b4 = __real_00000000;
      }
      local_4d0 = (fStack_75c + fVar7) * __real_3f000000;
      fVar27 = fVar29;
      if (fVar29 <= fVar28) {
        fVar27 = fVar28;
      }
      local_4ac = ((fVar7 - fStack_74c) * fStack_754 + fStack_750 * fStack_74c) * __real_3f000000;
      if (fVar27 <= fVar30) {
        fVar27 = fVar30;
      }
      if (fVar7 <= local_4ac) {
        local_4ac = fVar7;
      }
      if (fVar27 <= fVar31) {
        fVar27 = fVar31;
      }
      if (local_4ac <= __real_00000000) {
        local_4ac = __real_00000000;
      }
      local_4d8 = fStack_764 * __real_3c23d70a;
      fVar6 = fVar27 * __real_3dcccccd;
      if (fVar27 * __real_3dcccccd <= __real_3dcccccd) {
        fVar6 = __real_3dcccccd;
      }
      local_4d4 = fStack_760;
      local_4cc = fVar7 / local_758;
      local_6b8._s_0.R = (float)local_7d8._0_4_;
      local_6b8._s_0.G = (float)local_7d8._4_4_;
      local_6b8._s_0.B = fStack_7d0;
      fStack_7ec = fVar31;
      local_6c8._s_0.R = fVar28;
      local_6c8._s_0.G = fVar29;
      local_6c8._s_0.B = fVar30;
      local_6c8._s_0.A = fVar31;
      fStack_4ec = local_6b8._s_0.A;
      fStack_79c = fVar6;
      ComputeMirroredBSSSKernel
                (local_4a8,0xd,(FLinearColor *)&local_6b8._s_0,(FLinearColor *)&local_6c8._s_0,fVar6
                );
      local_698._0_8_ = local_7d8;
      local_698._8_8_ = _fStack_7d0;
      local_6a8._s_0.R = fVar28;
      local_6a8._s_0.G = fVar29;
      local_6a8._s_0.B = fVar30;
      local_6a8._s_0.A = fVar31;
      ComputeMirroredBSSSKernel
                (local_3d8,9,(FLinearColor *)&local_698._s_0,(FLinearColor *)&local_6a8._s_0,
                 fStack_79c);
      local_718._0_8_ = local_7d8;
      local_718._8_8_ = _fStack_7d0;
      local_728._s_0.R = fVar28;
      local_728._s_0.G = fVar29;
      local_728._s_0.B = fVar30;
      local_728._s_0.A = fVar31;
      ComputeMirroredBSSSKernel
                (local_348,6,(FLinearColor *)&local_718._s_0,(FLinearColor *)&local_728._s_0,
                 fStack_79c);
      local_628._0_8_ = local_748._0_8_;
      local_628._8_8_ = local_748._8_8_;
      fStack_79c = fStack_79c * fStack_7b4 * fVar32;
      local_708._0_8_ = local_7d8;
      local_708._8_8_ = _fStack_7d0;
      local_608._0_8_ = local_788._0_8_;
      local_608._8_8_ = local_788._8_8_;
      local_618._s_0.A = fStack_7ec;
      local_7f8 = fVar28;
      fStack_7f4 = fVar29;
      fStack_7f0 = fVar30;
      local_618._s_0.R = fVar28;
      local_618._s_0.G = fVar29;
      local_618._s_0.B = fVar30;
      ComputeTransmissionProfileBurley
                (local_2e8,0x20,(FLinearColor *)&local_608._s_0,fStack_764,
                 (FLinearColor *)&local_708._s_0,(FLinearColor *)&local_618._s_0,fStack_7b4,
                 (FLinearColor *)&local_628._s_0);
      fVar7 = __real_3eaaaaab;
      fVar28 = fStack_79c;
      pfVar21 = local_508 + 1;
      uVar20 = 0xfffffffffffffffa;
      lVar23 = 0x42;
      puVar19 = (ushort *)((ulonglong)(iVar22 * uVar24) + local_678);
      do {
        fVar29 = *pfVar21;
        fVar32 = pfVar21[1];
        fVar30 = pfVar21[2];
        if (uVar20 < 0x1c) {
          fVar30 = fVar30 * fVar7 * fVar28 * __real_3a800000;
        }
        if (GPixelFormats[0x13].PlatformFormat == GPixelFormats[10].PlatformFormat) {
          local_808 = 0;
          FGenericPlatformMath::StoreHalf
                    (&local_808,(float)((int)(pfVar21[-1] * 65535.996) & 0xffff) * fVar8);
          *puVar19 = local_808;
          local_806 = 0;
          FGenericPlatformMath::StoreHalf
                    (&local_806,(float)((int)(fVar29 * 65535.996) & 0xffff) * fVar8);
          puVar19[1] = local_806;
          local_804 = 0;
          FGenericPlatformMath::StoreHalf
                    (&local_804,(float)((int)(fVar32 * 65535.996) & 0xffff) * fVar8);
          puVar19[2] = local_804;
          local_802[0] = 0;
          FGenericPlatformMath::StoreHalf
                    (local_802,(float)((int)(fVar30 * 65535.996) & 0xffff) * fVar8);
          uVar11 = local_802[0];
        }
        else {
          *puVar19 = (ushort)(int)(pfVar21[-1] * 65535.996);
          puVar19[1] = (ushort)(int)(fVar29 * 65535.996);
          puVar19[2] = (ushort)(int)(fVar32 * 65535.996);
          uVar11 = (ushort)(int)(fVar30 * 65535.996);
        }
        puVar19[3] = uVar11;
        pfVar21 = pfVar21 + 4;
        puVar19 = puVar19 + 4;
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      uVar24 = uVar24 + 1;
      param_1 = local_650;
      iVar22 = local_730;
    } while (uVar24 < local_734);
  }
  FRHICommandListImmediate::UnlockTexture2D
            (param_1,((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference,0,false
             ,true);
  if (local_5b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_5b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

// Dump @ 148463390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSubsurfaceProfileTexture::Dump(FSubsurfaceProfileTexture *this)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (4 < (byte)LogSubsurfaceProfile._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
  }
  uVar6 = 0;
  bVar3 = LogSubsurfaceProfile._0_1_;
  if (0 < (this->SubsurfaceProfileEntries).ArrayNum) {
    do {
      if (4 < bVar3) {
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
        bVar3 = LogSubsurfaceProfile._0_1_;
        if (4 < (byte)LogSubsurfaceProfile._0_1_) {
          uVar5 = ~uVar6 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile)
          ;
          bVar3 = LogSubsurfaceProfile._0_1_;
          if (4 < (byte)LogSubsurfaceProfile._0_1_) {
            uVar5 = ~uVar6 >> 0x1f;
            uVar4 = 0;
            if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
              uVar4 = uVar5;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar4 = 0;
            if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
              uVar4 = uVar5;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar4 = 0;
            if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
              uVar4 = uVar5;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
            bVar3 = LogSubsurfaceProfile._0_1_;
            if (4 < (byte)LogSubsurfaceProfile._0_1_) {
              uVar4 = 0;
              if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
                uVar4 = ~uVar6 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
              bVar3 = LogSubsurfaceProfile._0_1_;
            }
          }
        }
      }
      if (4 < bVar3) {
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
        bVar3 = LogSubsurfaceProfile._0_1_;
      }
      if (4 < bVar3) {
        uVar5 = ~uVar6 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
        bVar3 = LogSubsurfaceProfile._0_1_;
        if (4 < (byte)LogSubsurfaceProfile._0_1_) {
          uVar5 = ~uVar6 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u______Boundary_C_151acd428,
                     (FLogCategoryBase *)&LogSubsurfaceProfile);
          bVar3 = LogSubsurfaceProfile._0_1_;
        }
      }
      if (4 < bVar3) {
        uVar5 = ~uVar6 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = 0;
        if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
        bVar3 = LogSubsurfaceProfile._0_1_;
        if (4 < (byte)LogSubsurfaceProfile._0_1_) {
          uVar4 = 0;
          if ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile)
          ;
          bVar3 = LogSubsurfaceProfile._0_1_;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->SubsurfaceProfileEntries).ArrayNum);
  }
  if (bVar3 < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsurfaceProfile);
  return;
}

// FindAllocationId @ 148467090

int __thiscall
FSubsurfaceProfileTexture::FindAllocationId
          (FSubsurfaceProfileTexture *this,USubsurfaceProfile *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 1;
  if (1 < (this->SubsurfaceProfileEntries).ArrayNum) {
    lVar6 = 0xa8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->SubsurfaceProfileEntries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(USubsurfaceProfile **)
           ((this->SubsurfaceProfileEntries).AllocatorInstance.Data + lVar6 + 0xa0) == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xa8;
    } while ((int)uVar5 < (this->SubsurfaceProfileEntries).ArrayNum);
  }
  return -1;
}

// GetEntryString @ 14846bf00

bool __thiscall
FSubsurfaceProfileTexture::GetEntryString
          (FSubsurfaceProfileTexture *this,uint param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FString local_f0 [11];
  
  uVar6 = (this->SubsurfaceProfileEntries).ArrayNum;
  if (uVar6 <= param_1) {
    return false;
  }
  uVar5 = 0;
  if ((int)param_1 < (int)uVar6) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar6 = 0;
  if ((int)param_1 < (this->SubsurfaceProfileEntries).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  ::FString::PrintfImpl
            (local_f0,
             L" %c. %p SurfaceAlbedo=%.1f %.1f %.1f, MeanFreePathColor=%.1f %.1f %.1f, MeanFreePathDistance=%.1f, WorldUnitScale=%.1f,\t\t\t\t\t\t\t\tTint=%.1f %.1f %.1f, BoundaryColorBleeding=%.1f %.1f %.1f, TransmissionTintColor=%.1f %.1f %.1f, %s"
            );
  if (param_2 != local_f0) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = local_f0[0].Data.AllocatorInstance.Data;
    (param_2->Data).ArrayNum = local_f0[0].Data.ArrayNum;
    (param_2->Data).ArrayMax = local_f0[0].Data.ArrayMax;
    local_f0[0].Data.ArrayNum = 0;
    local_f0[0].Data.ArrayMax = 0;
    local_f0[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_f0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetSSProfilesPreIntegratedTexture @ 14846edb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014846f3f6) */
/* WARNING: Removing unreachable block (ram,0x00014846f402) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

IPooledRenderTarget * __thiscall
FSubsurfaceProfileTexture::GetSSProfilesPreIntegratedTexture
          (FSubsurfaceProfileTexture *this,FRDGBuilder *param_1,EShaderPlatform param_2)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  TConsoleVariableData<int> *pTVar4;
  TRefCountPtr<IPooledRenderTarget> TVar5;
  FShader *pFVar6;
  FShaderMapBase *pFVar7;
  bool bVar8;
  ERDGPassFlags EVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  IPooledRenderTarget *pIVar13;
  ulonglong uVar14;
  longlong lVar15;
  FRDGTexture *pFVar16;
  FParameters *pFVar17;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar18;
  FName this_01;
  FRDGEventName *this_02;
  FShaderParametersMetadata *pFVar19;
  wchar_t *pwVar20;
  FRDGPass *this_03;
  TRefCountPtr<IPooledRenderTarget> *pTVar21;
  FRHITexture *pFVar22;
  ulonglong uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_228 [32];
  uint local_1f8;
  FRenderTargetBinding local_1c0;
  undefined4 local_1a8;
  FRDGUserValidation *local_1a0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_190;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_180;
  FRDGParameterStruct local_170;
  undefined1 local_158 [8];
  FString local_150;
  initializer_list<FRDGResource_*> local_138;
  FRDGEventName local_128;
  FShader *local_100;
  FShaderMapBase *pFStack_f8;
  undefined1 local_b8 [24];
  float local_a0;
  int local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined2 local_84;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar23 = 0;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pIVar13 = (IPooledRenderTarget *)(*pcVar2)();
    return pIVar13;
  }
  pTVar4 = CVarSSProfilesPreIntegratedTextureResolution.Ref;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].MaxFeatureLevel != ES3_1) {
    return (IPooledRenderTarget *)0x0;
  }
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    uVar14 = 4;
    if (!bVar8) goto LAB_14846ee6d;
  }
  uVar14 = uVar23;
LAB_14846ee6d:
  iVar24 = 0x20;
  if (0x20 < *(int *)((longlong)pTVar4->ShadowedValue + uVar14)) {
    iVar24 = *(int *)((longlong)pTVar4->ShadowedValue + uVar14);
  }
  iVar10 = 1;
  if (iVar24 != 0) {
    iVar10 = iVar24;
  }
  uVar14 = (ulonglong)(iVar10 - 1) * 2 + 1;
  lVar15 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar24 = 1 << ((byte)lVar15 & 0x1f);
  local_1a8 = (undefined4)lVar15;
  if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
    lVar15 = (**(code **)((GSSProfilesPreIntegratedTexture.Reference)->_padding_ + 0x10))();
    pTVar4 = CVarSSProfilesPreIntegratedTextureForceUpdate.Ref;
    if ((*(int *)(lVar15 + 0x2c) == iVar24) && (*(int *)(lVar15 + 0x30) == iVar24)) {
      bVar8 = IsInParallelGameThread();
      if ((bVar8) || (bVar8 = IsInGameThread(), uVar14 = 4, bVar8)) {
        uVar14 = uVar23;
      }
      if (*(int *)((longlong)pTVar4->ShadowedValue + uVar14) != 1) {
        return GSSProfilesPreIntegratedTexture.Reference;
      }
    }
    TVar5.Reference = GSSProfilesPreIntegratedTexture.Reference;
    if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
      GSSProfilesPreIntegratedTexture.Reference = (IPooledRenderTarget *)0x0;
      (**(code **)((TVar5.Reference)->_padding_ + 0x38))();
    }
  }
  iVar10 = (this->SubsurfaceProfileEntries).ArrayNum;
  local_8c = 1;
  local_6c = 1;
  local_a0 = FClearValueBinding::Black.Value.Color[3];
  local_9c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_94._4_4_ = iVar24;
  local_94._0_4_ = iVar24;
  local_b8._0_8_ = 0x1000009;
  local_b8._8_8_ = FClearValueBinding::Black._0_8_;
  local_b8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_98 = 0;
  local_8a = (undefined2)iVar10;
  local_88 = 0x12010101;
  local_84 = 0xff00;
  local_78 = (void *)0x0;
  local_70 = 0;
  pFVar16 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_b8,L"SSProfilePreIntegratedTexture",None);
  fVar3 = __real_3f800000;
  local_1f8 = 0;
  if (0 < iVar10) {
    local_1a0 = &param_1->UserValidation;
    fVar26 = (float)iVar24;
    fVar25 = __real_3f800000 / fVar26;
    do {
      pFVar17 = FRDGAllocator::Alloc<FSSProfilePreIntegratedPS::FParameters>
                          ((FRDGAllocator *)&param_1->_padding_);
      local_1c0.ResolveTexture = (FRDGTexture *)0x0;
      local_1c0.LoadAction = EClear;
      local_1c0.MipIndex = '\0';
      local_1c0.ArraySlice = (short)uVar23;
      local_1c0.Texture = pFVar16;
      bVar8 = FRenderTargetBinding::Validate(&local_1c0);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Validate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x216,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pIVar13 = (IPooledRenderTarget *)(*pcVar2)();
        return pIVar13;
      }
      *(undefined4 *)&(pFVar17->RenderTargets).Output.Elements[0].Texture = local_1c0.Texture._0_4_;
      *(undefined4 *)((longlong)&(pFVar17->RenderTargets).Output.Elements[0].Texture + 4) =
           local_1c0.Texture._4_4_;
      *(undefined4 *)&(pFVar17->RenderTargets).Output.Elements[0].ResolveTexture =
           local_1c0.ResolveTexture._0_4_;
      *(undefined4 *)((longlong)&(pFVar17->RenderTargets).Output.Elements[0].ResolveTexture + 4) =
           local_1c0.ResolveTexture._4_4_;
      (pFVar17->RenderTargets).Output.Elements[0].LoadAction = local_1c0.LoadAction;
      (pFVar17->RenderTargets).Output.Elements[0].MipIndex = local_1c0.MipIndex;
      (pFVar17->RenderTargets).Output.Elements[0].ArraySlice = local_1c0.ArraySlice;
      *(undefined4 *)&(pFVar17->RenderTargets).Output.Elements[0].field_0x14 = local_1c0._20_4_;
      if (GSSProfiles.Reference == (IPooledRenderTarget *)0x0) {
        pFVar22 = (GBlackTexture->TextureRHI).Reference;
      }
      else {
        pFVar22 = ((GSSProfiles.Reference)->RenderTargetItem).TargetableTexture.Reference;
      }
      pFVar17->SourceSSProfilesTexture = pFVar22;
      pFVar17->SourceSSProfilesSampler =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      lVar15 = (**(code **)(pFVar22->_padding_ + 0x20))();
      cVar1 = *(char *)(lVar15 + 0x32);
      if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
         ((cVar1 == '\x03' || (cVar1 == '\x04')))) {
        iVar12 = *(int *)(lVar15 + 0x24);
        iVar11 = *(int *)(lVar15 + 0x28);
      }
      else {
        iVar12 = 0;
        iVar11 = iVar12;
      }
      (pFVar17->SourceSSProfilesTextureSizeAndInvSize).field0_0x0._s_0.X = (float)iVar12;
      (pFVar17->SourceSSProfilesTextureSizeAndInvSize).field0_0x0._s_0.Y = (float)iVar11;
      (pFVar17->SourceSSProfilesTextureSizeAndInvSize).field0_0x0._s_0.Z = fVar3 / (float)iVar12;
      (pFVar17->SourceSSProfilesTextureSizeAndInvSize).field0_0x0._s_0.W = fVar3 / (float)iVar11;
      (pFVar17->TargetSSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.X = fVar26;
      (pFVar17->TargetSSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.Y = fVar26;
      (pFVar17->TargetSSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.Z = fVar25;
      (pFVar17->TargetSSProfilesPreIntegratedTextureSizeAndInvSize).field0_0x0._s_0.W = fVar25;
      pFVar17->SourceSubsurfaceProfileInt = (int)uVar23;
      this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[1]);
      pFVar18 = (FShaderType *)FSSProfilePreIntegratedPS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_190,pFVar18,0);
      if (local_190.ShaderContent == (FShader *)0x0) {
        this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
        ::FName::ToString((FName *)this_01,&local_150);
        FSSProfilePreIntegratedPS::GetStaticType();
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          pIVar13 = (IPooledRenderTarget *)(*pcVar2)();
          return pIVar13;
        }
      }
      FSSProfilePreIntegratedPS::GetStaticType();
      pFVar7 = local_190.ShaderMap;
      pFVar6 = local_190.ShaderContent;
      this_02 = FRDGEventName::FRDGEventName(&local_128,1,L"SSS::SSProfilePreIntegrated");
      if ((pFVar6 == (FShader *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("PixelShader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\PixelShaderUtils.h"
                             ,0xa8,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pIVar13 = (IPooledRenderTarget *)(*pcVar2)();
        return pIVar13;
      }
      pFVar19 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
      local_180.ShaderContent = pFVar6;
      local_180.ShaderMap = pFVar7;
      ValidateShaderParameters(&local_180,pFVar19,pFVar17);
      local_138._First = (FRDGResource **)0x0;
      local_138._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&pFVar6->Bindings,pFVar19,pFVar17,&local_138);
      local_100 = pFVar6;
      pFStack_f8 = pFVar7;
      pFVar19 = FSSProfilePreIntegratedPS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(local_1a0,pFVar17,pFVar19,this_02,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar20 = FRDGEventName::GetTCHAR(this_02);
      EVar9 = FRDGBuilder::OverridePassFlags(param_1,pwVar20,Raster);
      this_03 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d8,8);
      local_170.Contents = (uchar *)pFVar17;
      if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pIVar13 = (IPooledRenderTarget *)(*pcVar2)();
        return pIVar13;
      }
      local_170.Layout.Reference = (pFVar19->Layout).Reference;
      if (local_170.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_170.Layout.Reference);
      }
      local_170.Metadata = pFVar19;
      FRDGPass::FRDGPass(this_03,this_02,&local_170,EVar9,Async);
      this_03->_padding_ =
           (longlong)
           &
           ___7__TRDGLambdaPass_VFParameters_FSSProfilePreIntegratedPS__V<lambda_1>__1____AddFullscreenPass_VFSSProfilePreIntegratedPS___FPixelShaderUtils__SAXAEAVFRDGBuilder__PEBVFGlobalShaderMap____QEAVFRDGEventName__AEBV__TShaderRefBase_VFSSProfilePreIntegratedPS__VFShaderMapPointerTable____PEAV12_AEBU__TIntRect_H_Math_UE__PEAVFRHIBlendState__PEAVFRHIRasterizerState__PEAVFRHIDepthStencilState__IW4ERDGPassFlags___Z___6B_
      ;
      *(FShader **)&this_03[1].FullPathIfDebug.Data.ArrayNum = local_100;
      this_03[1].Name.EventFormat = (wchar_t *)pFStack_f8;
      this_03[1]._padding_ = (longlong)pFVar17;
      this_03[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)this_00;
      this_03[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      this_03[1].Name.FormattedEventName.Data.ArrayNum = iVar24;
      this_03[1].Name.FormattedEventName.Data.ArrayMax = iVar24;
      this_03[1].ParameterStruct.Contents = (uchar *)0x0;
      this_03[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)0x0;
      this_03[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)0x0;
      this_03[1].Flags = None;
      this_03[1].TaskMode = Inline;
      this_03[1].Pipeline = None;
      *(FParameters **)&this_03[1].Workload = pFVar17;
      FRDGBuilder::ClobberPassOutputs(param_1,this_03);
      iVar12 = (param_1->Passes).Array.ArrayNum;
      if (iVar12 == (param_1->Passes).Array.ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,
                            &(param_1->Passes).Array.ArrayMax);
      }
      (param_1->Passes).Array.ArrayNum = iVar12 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar12] = this_03;
      (this_03->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,this_03);
      if (local_128.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_128.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_1f8 = local_1f8 + 1;
      uVar23 = (ulonglong)local_1f8;
    } while ((int)local_1f8 < iVar10);
  }
  pTVar21 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar16);
  FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar16,SRVMask,Graphics);
  TVar5 = GSSProfilesPreIntegratedTexture;
  pIVar13 = pTVar21->Reference;
  if (GSSProfilesPreIntegratedTexture.Reference != pIVar13) {
    GSSProfilesPreIntegratedTexture.Reference = pIVar13;
    if (pIVar13 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar13->_padding_ + 0x30))();
    }
    if (TVar5.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((TVar5.Reference)->_padding_ + 0x38))(TVar5.Reference);
    }
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return GSSProfilesPreIntegratedTexture.Reference;
}

// GetTexture @ 148470d20

IPooledRenderTarget * __thiscall
FSubsurfaceProfileTexture::GetTexture
          (FSubsurfaceProfileTexture *this,FRHICommandListImmediate *param_1)

{
  if (GSSProfiles.Reference == (IPooledRenderTarget *)0x0) {
    CreateTexture(this,param_1);
  }
  return GSSProfiles.Reference;
}

// GetTexture @ 148470d50

IPooledRenderTarget * __thiscall
FSubsurfaceProfileTexture::GetTexture(FSubsurfaceProfileTexture *this)

{
  return GSSProfiles.Reference;
}

// RemoveProfile @ 148487160

void __thiscall
FSubsurfaceProfileTexture::RemoveProfile
          (FSubsurfaceProfileTexture *this,USubsurfaceProfile *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FSubsurfaceProfileStruct *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  FSubsurfaceProfileStruct local_b8;
  
  uVar4 = FindAllocationId(this,param_1);
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                         ,0xb9,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar9 = ~uVar4 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar4 < (this->SubsurfaceProfileEntries).ArrayNum) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar8 = (longlong)(int)uVar4 * 0xa8;
    if (*(USubsurfaceProfile **)
         ((this->SubsurfaceProfileEntries).AllocatorInstance.Data + lVar8 + 0xa0) != param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubsurfaceProfileEntries[AllocationId].Profile == InProfile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                         ,0xbb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = 0;
    if ((int)uVar4 < (this->SubsurfaceProfileEntries).ArrayNum) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined8 *)((this->SubsurfaceProfileEntries).AllocatorInstance.Data + lVar8 + 0xa0) = 0;
    uVar5 = 0;
    if ((int)uVar4 < (this->SubsurfaceProfileEntries).ArrayNum) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FSubsurfaceProfileStruct::FSubsurfaceProfileStruct(&local_b8);
    pFVar7 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data + lVar8;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->SurfaceAlbedo).field0_0x0 + 8);
    *(undefined8 *)pFVar7 = *(undefined8 *)&(pFVar6->SurfaceAlbedo).field0_0x0;
    *(undefined8 *)(pFVar7 + 8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->MeanFreePathColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)&(pFVar6->MeanFreePathColor).field0_0x0;
    *(undefined8 *)(pFVar7 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)&pFVar6->bEnableBurley;
    *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)&pFVar6->MeanFreePathDistance;
    *(undefined8 *)(pFVar7 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->Tint).field0_0x0 + 0xc);
    *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)((longlong)&(pFVar6->Tint).field0_0x0 + 4);
    *(undefined8 *)(pFVar7 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->SubsurfaceColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar7 + 0x40) = *(undefined8 *)&(pFVar6->SubsurfaceColor).field0_0x0;
    *(undefined8 *)(pFVar7 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->FalloffColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar7 + 0x50) = *(undefined8 *)&(pFVar6->FalloffColor).field0_0x0;
    *(undefined8 *)(pFVar7 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->BoundaryColorBleed).field0_0x0 + 8);
    *(undefined8 *)(pFVar7 + 0x60) = *(undefined8 *)&(pFVar6->BoundaryColorBleed).field0_0x0;
    *(undefined8 *)(pFVar7 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)&pFVar6->NormalScale;
    *(undefined8 *)(pFVar7 + 0x70) = *(undefined8 *)&pFVar6->Implementation;
    *(undefined8 *)(pFVar7 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)&pFVar6->Roughness1;
    *(undefined8 *)(pFVar7 + 0x80) = *(undefined8 *)&pFVar6->IOR;
    *(undefined8 *)(pFVar7 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->TransmissionTintColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar7 + 0x90) = *(undefined8 *)&(pFVar6->TransmissionTintColor).field0_0x0;
    *(undefined8 *)(pFVar7 + 0x98) = uVar2;
  }
  return;
}

// UpdateProfile @ 14849beb0

void __thiscall
FSubsurfaceProfileTexture::UpdateProfile
          (FSubsurfaceProfileTexture *this,int param_1,FSubsurfaceProfileStruct *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  TRefCountPtr<IPooledRenderTarget> TVar24;
  bool bVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar25 = IsInRenderingThread();
  if (!bVar25) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                        ,0xc4,L"");
    if (bVar25) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != -1) {
    if ((this->SubsurfaceProfileEntries).ArrayNum <= param_1) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationId < SubsurfaceProfileEntries.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                          ,0xcd,L"");
      if (bVar25) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar2 = *(undefined8 *)&(param_2->SurfaceAlbedo).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(param_2->SurfaceAlbedo).field0_0x0 + 8);
    uVar4 = *(undefined8 *)&(param_2->MeanFreePathColor).field0_0x0;
    uVar5 = *(undefined8 *)((longlong)&(param_2->MeanFreePathColor).field0_0x0 + 8);
    uVar6 = *(undefined8 *)&param_2->MeanFreePathDistance;
    uVar7 = *(undefined8 *)&param_2->bEnableBurley;
    uVar8 = *(undefined8 *)((longlong)&(param_2->Tint).field0_0x0 + 4);
    uVar9 = *(undefined8 *)((longlong)&(param_2->Tint).field0_0x0 + 0xc);
    uVar10 = *(undefined8 *)&(param_2->SubsurfaceColor).field0_0x0;
    uVar11 = *(undefined8 *)((longlong)&(param_2->SubsurfaceColor).field0_0x0 + 8);
    uVar12 = *(undefined8 *)&(param_2->FalloffColor).field0_0x0;
    uVar13 = *(undefined8 *)((longlong)&(param_2->FalloffColor).field0_0x0 + 8);
    uVar14 = *(undefined8 *)&(param_2->BoundaryColorBleed).field0_0x0;
    uVar15 = *(undefined8 *)((longlong)&(param_2->BoundaryColorBleed).field0_0x0 + 8);
    uVar16 = param_2->IOR;
    uVar17 = param_2->Roughness0;
    uVar18 = param_2->Roughness1;
    uVar19 = param_2->LobeMix;
    uVar20 = *(undefined8 *)&param_2->Implementation;
    uVar21 = *(undefined8 *)&param_2->NormalScale;
    uVar22 = *(undefined8 *)&(param_2->TransmissionTintColor).field0_0x0;
    uVar23 = *(undefined8 *)((longlong)&(param_2->TransmissionTintColor).field0_0x0 + 8);
    uVar26 = 0;
    if (param_1 < (this->SubsurfaceProfileEntries).ArrayNum) {
      uVar26 = (uint)~param_1 >> 0x1f;
    }
    if (uVar26 == 0) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar25) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar27 = (this->SubsurfaceProfileEntries).AllocatorInstance.Data + (longlong)param_1 * 0xa8;
    *(undefined8 *)pFVar27 = uVar2;
    *(undefined8 *)(pFVar27 + 8) = uVar3;
    *(undefined8 *)(pFVar27 + 0x10) = uVar4;
    *(undefined8 *)(pFVar27 + 0x18) = uVar5;
    *(undefined8 *)(pFVar27 + 0x20) = uVar6;
    *(undefined8 *)(pFVar27 + 0x28) = uVar7;
    *(undefined8 *)(pFVar27 + 0x30) = uVar8;
    *(undefined8 *)(pFVar27 + 0x38) = uVar9;
    *(undefined8 *)(pFVar27 + 0x40) = uVar10;
    *(undefined8 *)(pFVar27 + 0x48) = uVar11;
    *(undefined8 *)(pFVar27 + 0x50) = uVar12;
    *(undefined8 *)(pFVar27 + 0x58) = uVar13;
    *(undefined8 *)(pFVar27 + 0x60) = uVar14;
    *(undefined8 *)(pFVar27 + 0x68) = uVar15;
    *(undefined8 *)(pFVar27 + 0x70) = uVar20;
    *(undefined8 *)(pFVar27 + 0x78) = uVar21;
    local_18 = (undefined4)uVar22;
    uStack_14 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uStack_10 = (undefined4)uVar23;
    uStack_c = (undefined4)((ulonglong)uVar23 >> 0x20);
    *(undefined4 *)(pFVar27 + 0x80) = uVar16;
    *(undefined4 *)(pFVar27 + 0x84) = uVar17;
    *(undefined4 *)(pFVar27 + 0x88) = uVar18;
    *(undefined4 *)(pFVar27 + 0x8c) = uVar19;
    *(undefined4 *)(pFVar27 + 0x90) = local_18;
    *(undefined4 *)(pFVar27 + 0x94) = uStack_14;
    *(undefined4 *)(pFVar27 + 0x98) = uStack_10;
    *(undefined4 *)(pFVar27 + 0x9c) = uStack_c;
    TVar24 = GSSProfiles;
    if (GSSProfiles.Reference != (IPooledRenderTarget *)0x0) {
      GSSProfiles.Reference = (IPooledRenderTarget *)0x0;
      (**(code **)((TVar24.Reference)->_padding_ + 0x38))();
    }
    TVar24.Reference = GSSProfilesPreIntegratedTexture.Reference;
    if (GSSProfilesPreIntegratedTexture.Reference != (IPooledRenderTarget *)0x0) {
      GSSProfilesPreIntegratedTexture.Reference = (IPooledRenderTarget *)0x0;
      (**(code **)((TVar24.Reference)->_padding_ + 0x38))();
    }
  }
  return;
}

