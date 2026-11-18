// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 16

// CopyPose<FCSPose<FCompactPose>_> @ 1463f3860

void __thiscall
FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>
          (FCSPose<FCompactHeapPose> *this,FCSPose<FCompactPose> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)&(param_1->Pose).field_0x8;
  puVar1 = &(this->Pose).field_0xc;
  pvVar3 = *(void **)&param_1->Pose;
  *(int *)&(this->Pose).field_0x8 = iVar2;
  if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar2,*(int *)puVar1,(ForAnyElementType *)this,iVar2,(int *)puVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Pose,pvVar3,(longlong)iVar2 * 0x60);
    }
  }
  *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  iVar2 = *(int *)&(param_1->ComponentSpaceFlags).field_0x8;
  puVar1 = &(this->ComponentSpaceFlags).field_0xc;
  pvVar3 = *(void **)&param_1->ComponentSpaceFlags;
  *(int *)&(this->ComponentSpaceFlags).field_0x8 = iVar2;
  if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,*(int *)puVar1,(ForAnyElementType *)&this->ComponentSpaceFlags,iVar2,
               (int *)puVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)&this->ComponentSpaceFlags,pvVar3,(longlong)iVar2);
    }
  }
  return;
}

// CalculateComponentSpaceTransform @ 14641aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCSPose<FCompactHeapPose>::CalculateComponentSpaceTransform
          (FCSPose<FCompactHeapPose> *this,FCompactPoseBoneIndex param_1)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  int iVar15;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 extraout_EAX_01;
  uint extraout_EAX_02;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FString *pFVar18;
  undefined7 extraout_var_01;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  ForAnyElementType FVar22;
  TTransform<double> *pTVar23;
  uint uVar24;
  longlong lVar25;
  TTransform<double> *this_00;
  ForElementType<FCompactPoseBoneIndex> FVar26;
  int iVar27;
  longlong lVar28;
  TTransform<double> *this_01;
  uint uVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar76;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  FCompactPoseBoneIndex local_res10 [2];
  undefined1 auStackY_458 [32];
  ForElementType<FCompactPoseBoneIndex> local_408;
  int local_400;
  int local_3fc;
  FCompactPoseBoneIndex local_3f8;
  undefined1 local_3f4 [4];
  FString local_3f0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3e0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3c0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3b0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_390;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_380;
  FMemMark local_370;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  code *local_2d8;
  undefined1 *local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FStringFormatArg local_268;
  FStringFormatArg local_248;
  FStringFormatArg local_228;
  FStringFormatArg local_208;
  FStringFormatArg local_1e8;
  FStringFormatArg local_1c8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TTransform<double> local_148;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_458;
  uVar29 = 0;
  uVar20 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar20 = ~(uint)param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar20 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(char *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) != '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentSpaceFlags[BoneIndex] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                          ,0x262,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_2d0 = local_3f4;
  local_2d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d8,puVar16);
  local_408.Data = (FCompactPoseBoneIndex *)0x0;
  uVar24 = 0;
  local_400 = 0;
  local_3fc = 0;
  local_370.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_370.Top = (local_370.Mem)->Top;
  local_370.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_370.bPopped = false;
  local_370.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_370;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  uVar20 = *(uint *)&(this->ComponentSpaceFlags).field_0x8;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (((((int)uVar20 < 1) ||
       (UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                  (4,4,uVar20,&local_408,0,&local_3fc), FVar26.Data = local_408.Data,
       iVar15 = local_400, local_408.Data <= local_res10)) &&
      (iVar15 = local_400, FVar26.Data = local_408.Data, local_res10 < local_408.Data + local_3fc))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar15 == local_3fc) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                       (0x404,&local_408,&local_3fc);
    FVar26.Data = local_408.Data;
  }
  auVar13 = ___xmm_7ff00000000000007ff0000000000000;
  iVar27 = iVar15 + 1;
  FVar26.Data[iVar15] = local_res10[0];
  do {
    local_400 = iVar27;
    FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&(this->Pose).field_0x10,&local_3f8);
    lVar25 = (longlong)(int)local_3f8;
    uVar20 = uVar24;
    if ((int)local_3f8 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
      uVar20 = ~(uint)local_3f8 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(lVar25 + *(longlong *)&this->ComponentSpaceFlags) == '\0') {
      if (((FVar26.Data <= local_res10) && (local_res10 < FVar26.Data + local_3fc)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar27 == local_3fc) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                           (0x404,&local_408,&local_3fc);
        FVar26.Data = local_408.Data;
      }
      lVar25 = (longlong)iVar27;
      iVar27 = iVar27 + 1;
      FVar26.Data[lVar25] = local_res10[0];
      local_res10[0] = local_3f8;
      FVar1 = local_res10[0];
    }
    else {
      lVar25 = (longlong)(int)local_res10[0];
      uVar20 = uVar24;
      if ((int)local_res10[0] < *(int *)&(this->Pose).field_0x8) {
        uVar20 = ~(uint)local_res10[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar28 = (longlong)(int)local_3f8;
      this_00 = (TTransform<double> *)(lVar25 * 0x60 + *(longlong *)&this->Pose);
      uVar19 = ~(uint)local_3f8 >> 0x1f;
      uVar20 = uVar29;
      if ((int)local_3f8 < *(int *)&(this->Pose).field_0x8) {
        uVar20 = uVar19;
      }
      if (uVar20 == 0) {
        uVar19 = 0x506106c8;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = (uint)CONCAT71(extraout_var,bVar14);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar114 = auVar13._0_4_;
      uVar115 = auVar13._4_4_;
      dVar35 = auVar13._0_8_;
      uVar116 = auVar13._8_4_;
      uVar117 = auVar13._12_4_;
      dVar76 = auVar13._8_8_;
      auVar68._0_8_ =
           (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4),
                            uVar114 & *(uint *)(this_00->Rotation).ZW.m128d_f64);
      auVar68._8_4_ = uVar116 & *(uint *)((this_00->Rotation).ZW.m128d_f64 + 1);
      auVar68._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
      auVar77._0_8_ =
           (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4),
                            uVar114 & *(uint *)(this_00->Rotation).XY.m128d_f64);
      auVar77._8_4_ = uVar116 & *(uint *)((this_00->Rotation).XY.m128d_f64 + 1);
      auVar77._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
      this_01 = (TTransform<double> *)(lVar28 * 0x60 + *(longlong *)&this->Pose);
      auVar106._8_8_ = -(ulonglong)(auVar68._8_8_ == dVar76);
      auVar106._0_8_ = -(ulonglong)(auVar68._0_8_ == dVar35);
      uVar19 = movmskpd(uVar19,auVar106);
      auVar78._8_8_ = -(ulonglong)(auVar77._8_8_ == dVar76);
      auVar78._0_8_ = -(ulonglong)(auVar77._0_8_ == dVar35);
      iVar15 = movmskpd(uVar20,auVar78);
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar36._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
        auVar36._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar36._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ == dVar76);
        auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ == dVar35);
        uVar20 = movmskpd(0,auVar37);
        auVar38._0_8_ =
             (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4)
                              ,uVar114 & *(uint *)(this_00->Translation).XY.m128d_f64);
        auVar38._8_4_ = uVar116 & *(uint *)((this_00->Translation).XY.m128d_f64 + 1);
        auVar38._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
        auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ == dVar76);
        auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar39);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641aee3;
        auVar40._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
        auVar40._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar40._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ == dVar76);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ == dVar35);
        auVar79._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
        auVar79._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar79._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar41);
        auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ == dVar76);
        auVar80._0_8_ = -(ulonglong)(auVar79._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar80);
        uVar21 = 0;
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641aee3;
      }
      else {
LAB_14641aee3:
        FBase64::Encode(&local_2c8,(uchar *)this_00,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_00,&local_278);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x27f,L"Pose[%d] contains NaN: %s\nBase64: %s");
        iVar15 = (int)CONCAT71(extraout_var_00,bVar14);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
          iVar15 = extraout_EAX;
        }
        FVar22.Data = local_2c8.Data.AllocatorInstance.Data;
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          iVar15 = extraout_EAX_00;
        }
        uVar21 = SUB84(FVar22.Data,0);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      auVar42._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_01->Rotation).ZW.m128d_f64 & uVar114);
      auVar42._8_4_ = *(uint *)((this_01->Rotation).ZW.m128d_f64 + 1) & uVar116;
      auVar42._12_4_ = *(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
      auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ == dVar76);
      auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ == dVar35);
      auVar81._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_01->Rotation).XY.m128d_f64 & uVar114);
      auVar81._8_4_ = *(uint *)((this_01->Rotation).XY.m128d_f64 + 1) & uVar116;
      auVar81._12_4_ = *(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 0xc) & uVar117;
      uVar20 = movmskpd(uVar21,auVar43);
      auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ == dVar76);
      auVar82._0_8_ = -(ulonglong)(auVar81._0_8_ == dVar35);
      iVar15 = movmskpd(iVar15,auVar82);
      if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar44._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_01->Translation).ZW.m128d_f64 & uVar114);
        auVar44._8_4_ = *(uint *)((this_01->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar44._12_4_ = *(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ == dVar76);
        auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ == dVar35);
        auVar83._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_01->Translation).XY.m128d_f64 & uVar114);
        auVar83._8_4_ = *(uint *)((this_01->Translation).XY.m128d_f64 + 1) & uVar116;
        auVar83._12_4_ = *(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar45);
        auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ == dVar76);
        auVar84._0_8_ = -(ulonglong)(auVar83._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar84);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641b006;
        auVar46._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Scale3D).ZW.m128d_f64 & uVar114);
        auVar46._8_4_ = *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar46._12_4_ = *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ == dVar76);
        auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ == dVar35);
        auVar85._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Scale3D).XY.m128d_f64 & uVar114);
        auVar85._8_4_ = *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar85._12_4_ = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar47);
        auVar86._8_8_ = -(ulonglong)(auVar85._8_8_ == dVar76);
        auVar86._0_8_ = -(ulonglong)(auVar85._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar86);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641b006;
      }
      else {
LAB_14641b006:
        FBase64::Encode(&local_2a8,(uchar *)this_01,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_01,&local_2b8);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ParentBone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x285,L"Pose[%d] contains NaN: %s\nBase64: %s");
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar23 = &local_148;
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(pTVar23,this_00,this_01);
      auVar48._0_8_ =
           (double)CONCAT44(local_148.Rotation.ZW.m128d_f64[0]._4_4_ & uVar115,
                            local_148.Rotation.ZW.m128d_f64[0]._0_4_ & uVar114);
      auVar48._8_4_ = local_148.Rotation.ZW.m128d_f64[1]._0_4_ & uVar116;
      auVar48._12_4_ = local_148.Rotation.ZW.m128d_f64[1]._4_4_ & uVar117;
      auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ == dVar76);
      auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ == dVar35);
      auVar87._0_8_ =
           (double)CONCAT44(local_148.Rotation.XY.m128d_f64[0]._4_4_ & uVar115,
                            local_148.Rotation.XY.m128d_f64[0]._0_4_ & uVar114);
      auVar87._8_4_ = local_148.Rotation.XY.m128d_f64[1]._0_4_ & uVar116;
      auVar87._12_4_ = local_148.Rotation.XY.m128d_f64[1]._4_4_ & uVar117;
      iVar15 = movmskpd((int)pTVar23,auVar49);
      auVar88._8_8_ = -(ulonglong)(auVar87._8_8_ == dVar76);
      auVar88._0_8_ = -(ulonglong)(auVar87._0_8_ == dVar35);
      uVar20 = movmskpd(extraout_EAX_01,auVar88);
      uVar19 = iVar15 << 2 | uVar20;
      if (uVar19 == 0) {
        auVar50._0_8_ =
             (double)CONCAT44(local_148.Translation.ZW.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Translation.ZW.m128d_f64[0]._0_4_ & uVar114);
        auVar50._8_4_ = local_148.Translation.ZW.m128d_f64[1]._0_4_ & uVar116;
        auVar50._12_4_ = local_148.Translation.ZW.m128d_f64[1]._4_4_ & uVar117;
        auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ == dVar76);
        auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ == dVar35);
        auVar89._0_8_ =
             (double)CONCAT44(local_148.Translation.XY.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Translation.XY.m128d_f64[0]._0_4_ & uVar114);
        auVar89._8_4_ = local_148.Translation.XY.m128d_f64[1]._0_4_ & uVar116;
        auVar89._12_4_ = local_148.Translation.XY.m128d_f64[1]._4_4_ & uVar117;
        iVar15 = movmskpd(0,auVar51);
        auVar90._8_8_ = -(ulonglong)(auVar89._8_8_ == dVar76);
        auVar90._0_8_ = -(ulonglong)(auVar89._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar90);
        uVar19 = iVar15 << 2 | uVar20;
        if (uVar19 != 0) goto LAB_14641b1a6;
        auVar52._0_8_ =
             (double)CONCAT44(local_148.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar114);
        auVar52._8_4_ = local_148.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar116;
        auVar52._12_4_ = local_148.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar117;
        auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ == dVar76);
        auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ == dVar35);
        auVar91._0_8_ =
             (double)CONCAT44(local_148.Scale3D.XY.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Scale3D.XY.m128d_f64[0]._0_4_ & uVar114);
        auVar91._8_4_ = local_148.Scale3D.XY.m128d_f64[1]._0_4_ & uVar116;
        auVar91._12_4_ = local_148.Scale3D.XY.m128d_f64[1]._4_4_ & uVar117;
        iVar15 = movmskpd(0,auVar53);
        auVar92._8_8_ = -(ulonglong)(auVar91._8_8_ == dVar76);
        auVar92._0_8_ = -(ulonglong)(auVar91._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar92);
        uVar19 = iVar15 << 2 | uVar20;
        FVar22.Data = (FScriptContainerElement *)(ulonglong)uVar19;
        if (uVar19 != 0) goto LAB_14641b1a6;
      }
      else {
LAB_14641b1a6:
        auVar54._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Rotation).ZW.m128d_f64 & uVar114);
        auVar54._8_4_ = *(uint *)((this_00->Rotation).ZW.m128d_f64 + 1) & uVar116;
        auVar54._12_4_ = *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ == dVar76);
        auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ == dVar35);
        auVar93._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Rotation).XY.m128d_f64 & uVar114);
        auVar93._8_4_ = *(uint *)((this_00->Rotation).XY.m128d_f64 + 1) & uVar116;
        auVar93._12_4_ = *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc) & uVar117;
        iVar15 = movmskpd(uVar19,auVar55);
        auVar94._8_8_ = -(ulonglong)(auVar93._8_8_ == dVar76);
        auVar94._0_8_ = -(ulonglong)(auVar93._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar94);
        uVar19 = iVar15 << 2 | uVar20;
        if (uVar19 == 0) {
          auVar56._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
          auVar56._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
          auVar56._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
          auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ == dVar76);
          auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ == dVar35);
          auVar95._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_00->Translation).XY.m128d_f64 & uVar114);
          auVar95._8_4_ = *(uint *)((this_00->Translation).XY.m128d_f64 + 1) & uVar116;
          auVar95._12_4_ = *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc) & uVar117;
          iVar15 = movmskpd(0,auVar57);
          auVar96._8_8_ = -(ulonglong)(auVar95._8_8_ == dVar76);
          auVar96._0_8_ = -(ulonglong)(auVar95._0_8_ == dVar35);
          uVar20 = movmskpd(uVar20,auVar96);
          uVar19 = iVar15 << 2 | uVar20;
          if (uVar19 == 0) {
            auVar58._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
            auVar58._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
            auVar58._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
            auVar59._8_8_ = -(ulonglong)(auVar58._8_8_ == dVar76);
            auVar59._0_8_ = -(ulonglong)(auVar58._0_8_ == dVar35);
            auVar97._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
            auVar97._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
            auVar97._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
            iVar15 = movmskpd(0,auVar59);
            auVar98._8_8_ = -(ulonglong)(auVar97._8_8_ == dVar76);
            auVar98._0_8_ = -(ulonglong)(auVar97._0_8_ == dVar35);
            uVar19 = movmskpd(uVar20,auVar98);
            uVar19 = iVar15 << 2 | uVar19;
            uVar20 = (uint)(uVar19 != 0);
          }
          else {
            uVar20 = 1;
          }
        }
        else {
          uVar20 = 1;
        }
        pwVar30 = L"false";
        auVar60._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Rotation).ZW.m128d_f64 & uVar114);
        auVar60._8_4_ = *(uint *)((this_01->Rotation).ZW.m128d_f64 + 1) & uVar116;
        auVar60._12_4_ = *(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar99._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Rotation).XY.m128d_f64 & uVar114);
        auVar99._8_4_ = *(uint *)((this_01->Rotation).XY.m128d_f64 + 1) & uVar116;
        auVar99._12_4_ = *(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 0xc) & uVar117;
        if (uVar20 != 0) {
          pwVar30 = L"true";
        }
        auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ == dVar76);
        auVar61._0_8_ = -(ulonglong)(auVar60._0_8_ == dVar35);
        uVar19 = movmskpd(uVar19,auVar61);
        auVar100._8_8_ = -(ulonglong)(auVar99._8_8_ == dVar76);
        auVar100._0_8_ = -(ulonglong)(auVar99._0_8_ == dVar35);
        iVar15 = movmskpd(uVar20,auVar100);
        if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
          auVar62._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_01->Translation).ZW.m128d_f64 & uVar114);
          auVar62._8_4_ = *(uint *)((this_01->Translation).ZW.m128d_f64 + 1) & uVar116;
          auVar62._12_4_ = *(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 0xc) & uVar117;
          auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ == dVar76);
          auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ == dVar35);
          auVar101._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_01->Translation).XY.m128d_f64 & uVar114);
          auVar101._8_4_ = *(uint *)((this_01->Translation).XY.m128d_f64 + 1) & uVar116;
          auVar101._12_4_ = *(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 0xc) & uVar117
          ;
          uVar20 = movmskpd(0,auVar63);
          auVar102._8_8_ = -(ulonglong)(auVar101._8_8_ == dVar76);
          auVar102._0_8_ = -(ulonglong)(auVar101._0_8_ == dVar35);
          iVar15 = movmskpd(iVar15,auVar102);
          if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
            auVar64._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_01->Scale3D).ZW.m128d_f64 & uVar114);
            auVar64._8_4_ = *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) & uVar116;
            auVar64._12_4_ = *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
            auVar65._8_8_ = -(ulonglong)(auVar64._8_8_ == dVar76);
            auVar65._0_8_ = -(ulonglong)(auVar64._0_8_ == dVar35);
            auVar103._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_01->Scale3D).XY.m128d_f64 & uVar114);
            auVar103._8_4_ = *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) & uVar116;
            auVar103._12_4_ = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
            uVar20 = movmskpd(0,auVar65);
            auVar104._8_8_ = -(ulonglong)(auVar103._8_8_ == dVar76);
            auVar104._0_8_ = -(ulonglong)(auVar103._0_8_ == dVar35);
            iVar15 = movmskpd(iVar15,auVar104);
            bVar14 = (uVar20 & 0x3fffffff) != 0 || iVar15 != 0;
          }
          else {
            bVar14 = true;
          }
        }
        else {
          bVar14 = true;
        }
        ::FString::FString(&local_3f0,L"NaN created in during FTransform Multiplication\n");
        FStringFormatArg::FStringFormatArg(&local_e8,(int)local_res10[0]);
        FStringFormatArg::FStringFormatArg(&local_c8,(int)local_3f8);
        FStringFormatArg::FStringFormatArg(&local_a8,pwVar30);
        pwVar30 = L"false";
        if (bVar14) {
          pwVar30 = L"true";
        }
        FStringFormatArg::FStringFormatArg(&local_88,pwVar30);
        local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e0.ArrayNum = 4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,4,0,&local_3e0.AllocatorInstance,4,&local_3e0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3e0.AllocatorInstance.Data,&local_e8,4);
        ::FString::FormatImpl
                  (&local_348,
                   L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                   ,&local_3e0);
        uVar20 = local_348.Data.ArrayNum - 1;
        if (local_348.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_348.Data.AllocatorInstance.Data,uVar20);
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum);
        if ((FStringFormatArg *)local_3e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3e0.AllocatorInstance.Data);
        }
        if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(this_00,&local_158);
        FStringFormatArg::FStringFormatArg(&local_268,pFVar18);
        local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3d0.AllocatorInstance,1,&local_3d0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3d0.AllocatorInstance.Data,&local_268,1);
        ::FString::FormatImpl(&local_338,L"\tBone {0}\n",&local_3d0);
        uVar20 = local_338.Data.ArrayNum - 1;
        if (local_338.Data.ArrayNum == 0) {
          uVar20 = uVar29;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_338.Data.AllocatorInstance.Data,uVar20);
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
        if ((FStringFormatArg *)local_3d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3d0.AllocatorInstance.Data);
        }
        if (local_268.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(this_01,&local_1a8);
        FStringFormatArg::FStringFormatArg(&local_248,pFVar18);
        local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3c0.AllocatorInstance,1,&local_3c0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3c0.AllocatorInstance.Data,&local_248,1);
        ::FString::FormatImpl(&local_328,L"\tParent {0}\n",&local_3c0);
        uVar20 = local_328.Data.ArrayNum - 1;
        if (local_328.Data.ArrayNum == 0) {
          uVar20 = uVar29;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_328.Data.AllocatorInstance.Data,uVar20);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
        if ((FStringFormatArg *)local_3c0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3c0.AllocatorInstance.Data);
        }
        if (local_248.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(&local_148,&local_198);
        FStringFormatArg::FStringFormatArg(&local_228,pFVar18);
        local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3b0.AllocatorInstance,1,&local_3b0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3b0.AllocatorInstance.Data,&local_228,1);
        ::FString::FormatImpl(&local_318,L"\tResult {0}\n",&local_3b0);
        uVar20 = local_318.Data.ArrayNum - 1;
        if (local_318.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_318.Data.AllocatorInstance.Data,uVar20);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
        if ((FStringFormatArg *)local_3b0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3b0.AllocatorInstance.Data);
        }
        if (local_228.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_188,(uchar *)this_00,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_208,pFVar18);
        local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3a0.AllocatorInstance,1,&local_3a0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3a0.AllocatorInstance.Data,&local_208,1);
        ::FString::FormatImpl(&local_308,L"\tBone B64 {0}\n",&local_3a0);
        uVar20 = local_308.Data.ArrayNum - 1;
        if (local_308.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_308.Data.AllocatorInstance.Data,uVar20);
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
        if ((FStringFormatArg *)local_3a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3a0.AllocatorInstance.Data);
        }
        if (local_208.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_178,(uchar *)this_01,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_1e8,pFVar18);
        local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_390.AllocatorInstance,1,&local_390.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_390.AllocatorInstance.Data,&local_1e8,1);
        ::FString::FormatImpl(&local_2f8,L"\tParent B64 {0}\n",&local_390);
        uVar20 = local_2f8.Data.ArrayNum - 1;
        if (local_2f8.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,uVar20);
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
        if ((FStringFormatArg *)local_390.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_390.AllocatorInstance.Data);
        }
        if (local_1e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_168,(uchar *)&local_148,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_1c8,pFVar18);
        local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_380.AllocatorInstance,1,&local_380.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_380.AllocatorInstance.Data,&local_1c8,1);
        ::FString::FormatImpl(&local_2e8,L"\tResult B64 {0}\n",&local_380);
        uVar20 = local_2e8.Data.ArrayNum - 1;
        if (local_2e8.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,uVar20);
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
        if ((FStringFormatArg *)local_380.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
        }
        if (local_1c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.StringValue.Data.AllocatorInstance.Data);
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x298,L"Error during CalculateComponentSpaceTransform\n%s");
        uVar20 = (uint)CONCAT71(extraout_var_01,bVar14);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar22.Data = local_3f0.Data.AllocatorInstance.Data;
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          uVar20 = extraout_EAX_02;
        }
      }
      (this_00->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      (this_00->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
      (this_00->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
      (this_00->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
      (this_00->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
      (this_00->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
      (this_00->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
      (this_00->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
      (this_00->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
      (this_00->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
      (this_00->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
      (this_00->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
      dVar9 = (this_00->Rotation).XY.m128d_f64[0];
      dVar10 = (this_00->Rotation).XY.m128d_f64[1];
      dVar11 = (this_00->Rotation).ZW.m128d_f64[0];
      dVar12 = (this_00->Rotation).ZW.m128d_f64[1];
      auVar105._0_8_ = dVar11 * dVar11 + dVar9 * dVar9;
      auVar105._8_8_ = dVar12 * dVar12 + dVar10 * dVar10;
      auVar66._8_4_ = SUB84(auVar105._8_8_,0);
      auVar66._0_8_ = auVar105._0_8_;
      auVar66._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
      auVar67._0_8_ = auVar66._8_8_ + auVar105._0_8_;
      auVar67._8_8_ = auVar105._0_8_ + auVar105._8_8_;
      auVar106 = sqrtpd(auVar105,auVar67);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar67._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar67._8_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar67._0_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar67._8_8_)
      ;
      auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar106);
      auVar106 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar106);
      auVar69._0_8_ = uVar32 & (ulonglong)(auVar68._0_8_ * dVar9);
      uVar8 = uVar34 & (ulonglong)(auVar68._8_8_ * dVar10);
      auVar69._8_4_ = (undefined4)uVar8;
      auVar69._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar7._4_4_ = ~(uint)(uVar32 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar7._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar7._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar7._12_4_ =
           ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar113._0_8_ = uVar31 & (ulonglong)(auVar106._0_8_ * dVar11);
      uVar8 = uVar33 & (ulonglong)(auVar106._8_8_ * dVar12);
      auVar113._8_4_ = (undefined4)uVar8;
      auVar113._12_4_ = (undefined4)(uVar8 >> 0x20);
      uVar19 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64 = auVar69 | auVar7;
      auVar6._4_4_ = ~(uint)(uVar31 >> 0x20) & uVar3;
      auVar6._0_4_ = ~(uint)uVar31 & uVar19;
      auVar6._8_4_ = ~(uint)uVar33 & uVar4;
      auVar6._12_4_ = ~(uint)(uVar33 >> 0x20) & uVar5;
      auVar113 = auVar113 | auVar6;
      *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64 = auVar113;
      auVar70._0_8_ = (double)CONCAT44(auVar113._4_4_ & uVar115,auVar113._0_4_ & uVar114);
      auVar70._8_4_ = auVar113._8_4_ & uVar116;
      auVar70._12_4_ = auVar113._12_4_ & uVar117;
      auVar71._8_8_ = -(ulonglong)(auVar70._8_8_ == dVar76);
      auVar71._0_8_ = -(ulonglong)(auVar70._0_8_ == dVar35);
      auVar107._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_00->Rotation).XY.m128d_f64 & uVar114);
      auVar107._8_4_ = *(uint *)((this_00->Rotation).XY.m128d_f64 + 1) & uVar116;
      auVar107._12_4_ = *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc) & uVar117;
      uVar19 = movmskpd((int)FVar22.Data,auVar71);
      auVar108._8_8_ = -(ulonglong)(auVar107._8_8_ == dVar76);
      auVar108._0_8_ = -(ulonglong)(auVar107._0_8_ == dVar35);
      iVar15 = movmskpd(uVar20,auVar108);
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar72._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
        auVar72._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar72._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar73._8_8_ = -(ulonglong)(auVar72._8_8_ == dVar76);
        auVar73._0_8_ = -(ulonglong)(auVar72._0_8_ == dVar35);
        auVar109._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).XY.m128d_f64 & uVar114);
        auVar109._8_4_ = *(uint *)((this_00->Translation).XY.m128d_f64 + 1) & uVar116;
        auVar109._12_4_ = *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar73);
        auVar110._8_8_ = -(ulonglong)(auVar109._8_8_ == dVar76);
        auVar110._0_8_ = -(ulonglong)(auVar109._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar110);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641baf5;
        auVar74._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
        auVar74._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar74._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar75._8_8_ = -(ulonglong)(auVar74._8_8_ == dVar76);
        auVar75._0_8_ = -(ulonglong)(auVar74._0_8_ == dVar35);
        auVar111._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
        auVar111._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar111._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar75);
        auVar112._8_8_ = -(ulonglong)(auVar111._8_8_ == dVar76);
        auVar112._0_8_ = -(ulonglong)(auVar111._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar112);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641baf5;
      }
      else {
LAB_14641baf5:
        FBase64::Encode(&local_288,(uchar *)this_00,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_00,&local_298);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x2a1,
                            L"Normalized ComponentTransform for Pose[%d] contains NaN: %s\nBase64: %s"
                           );
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar25 = (longlong)(int)local_res10[0];
      uVar20 = uVar29;
      if ((int)local_res10[0] < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
        uVar20 = ~(uint)local_res10[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = local_400;
      *(undefined1 *)(lVar25 + *(longlong *)&this->ComponentSpaceFlags) = 1;
      if ((local_400 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar26.Data = local_408.Data;
      iVar27 = iVar15 + -1;
      FVar1 = local_408.Data[iVar27];
      iVar15 = (iVar15 - iVar27) + -1;
      if (iVar15 != 0) {
        memmove(local_408.Data + iVar27,local_408.Data + iVar27 + 1,(longlong)iVar15 << 2);
      }
    }
    local_res10[0] = FVar1;
    if (iVar27 == 0) {
      if (local_370.bPopped == false) {
        local_400 = iVar27;
        if (((local_370.Mem)->TopMark != &local_370) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mem.TopMark == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x215,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_370.bPopped = true;
        (local_370.Mem)->NumMarks = (local_370.Mem)->NumMarks + -1;
        if (local_370.SavedChunk != (local_370.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_370.Mem,local_370.SavedChunk);
        }
        (local_370.Mem)->Top = local_370.Top;
        (local_370.Mem)->TopMark = local_370.NextTopmostMark;
      }
      return;
    }
  } while( true );
}

// CalculateComponentSpaceTransform @ 14641bd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCSPose<FCompactPose>::CalculateComponentSpaceTransform
          (FCSPose<FCompactPose> *this,FCompactPoseBoneIndex param_1)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  int iVar15;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 extraout_EAX_01;
  uint extraout_EAX_02;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FString *pFVar18;
  undefined7 extraout_var_01;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  ForAnyElementType FVar22;
  TTransform<double> *pTVar23;
  uint uVar24;
  longlong lVar25;
  TTransform<double> *this_00;
  ForElementType<FCompactPoseBoneIndex> FVar26;
  int iVar27;
  longlong lVar28;
  TTransform<double> *this_01;
  uint uVar29;
  wchar_t *pwVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar76;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  FCompactPoseBoneIndex local_res10 [2];
  undefined1 auStackY_458 [32];
  ForElementType<FCompactPoseBoneIndex> local_408;
  int local_400;
  int local_3fc;
  FCompactPoseBoneIndex local_3f8;
  undefined1 local_3f4 [4];
  FString local_3f0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3e0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3c0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3b0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_390;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_380;
  FMemMark local_370;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  code *local_2d8;
  undefined1 *local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FStringFormatArg local_268;
  FStringFormatArg local_248;
  FStringFormatArg local_228;
  FStringFormatArg local_208;
  FStringFormatArg local_1e8;
  FStringFormatArg local_1c8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  TTransform<double> local_148;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_458;
  uVar29 = 0;
  uVar20 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar20 = ~(uint)param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar20 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(char *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) != '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentSpaceFlags[BoneIndex] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                          ,0x262,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_2d0 = local_3f4;
  local_2d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d8,puVar16);
  local_408.Data = (FCompactPoseBoneIndex *)0x0;
  uVar24 = 0;
  local_400 = 0;
  local_3fc = 0;
  local_370.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_370.Top = (local_370.Mem)->Top;
  local_370.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_370.bPopped = false;
  local_370.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_370;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  uVar20 = *(uint *)&(this->ComponentSpaceFlags).field_0x8;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (((((int)uVar20 < 1) ||
       (UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                  (4,4,uVar20,&local_408,0,&local_3fc), FVar26.Data = local_408.Data,
       iVar15 = local_400, local_408.Data <= local_res10)) &&
      (iVar15 = local_400, FVar26.Data = local_408.Data, local_res10 < local_408.Data + local_3fc))
     && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar15 == local_3fc) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                       (0x404,&local_408,&local_3fc);
    FVar26.Data = local_408.Data;
  }
  auVar13 = ___xmm_7ff00000000000007ff0000000000000;
  iVar27 = iVar15 + 1;
  FVar26.Data[iVar15] = local_res10[0];
  do {
    local_400 = iVar27;
    FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&(this->Pose).field_0x10,&local_3f8);
    lVar25 = (longlong)(int)local_3f8;
    uVar20 = uVar24;
    if ((int)local_3f8 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
      uVar20 = ~(uint)local_3f8 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(lVar25 + *(longlong *)&this->ComponentSpaceFlags) == '\0') {
      if (((FVar26.Data <= local_res10) && (local_res10 < FVar26.Data + local_3fc)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar27 == local_3fc) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                           (0x404,&local_408,&local_3fc);
        FVar26.Data = local_408.Data;
      }
      lVar25 = (longlong)iVar27;
      iVar27 = iVar27 + 1;
      FVar26.Data[lVar25] = local_res10[0];
      local_res10[0] = local_3f8;
      FVar1 = local_res10[0];
    }
    else {
      lVar25 = (longlong)(int)local_res10[0];
      uVar20 = uVar24;
      if ((int)local_res10[0] < *(int *)&(this->Pose).field_0x8) {
        uVar20 = ~(uint)local_res10[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar28 = (longlong)(int)local_3f8;
      this_00 = (TTransform<double> *)(lVar25 * 0x60 + *(longlong *)&this->Pose);
      uVar19 = ~(uint)local_3f8 >> 0x1f;
      uVar20 = uVar29;
      if ((int)local_3f8 < *(int *)&(this->Pose).field_0x8) {
        uVar20 = uVar19;
      }
      if (uVar20 == 0) {
        uVar19 = 0x506106c8;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = (uint)CONCAT71(extraout_var,bVar14);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar114 = auVar13._0_4_;
      uVar115 = auVar13._4_4_;
      dVar35 = auVar13._0_8_;
      uVar116 = auVar13._8_4_;
      uVar117 = auVar13._12_4_;
      dVar76 = auVar13._8_8_;
      auVar68._0_8_ =
           (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4),
                            uVar114 & *(uint *)(this_00->Rotation).ZW.m128d_f64);
      auVar68._8_4_ = uVar116 & *(uint *)((this_00->Rotation).ZW.m128d_f64 + 1);
      auVar68._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc);
      auVar77._0_8_ =
           (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4),
                            uVar114 & *(uint *)(this_00->Rotation).XY.m128d_f64);
      auVar77._8_4_ = uVar116 & *(uint *)((this_00->Rotation).XY.m128d_f64 + 1);
      auVar77._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc);
      this_01 = (TTransform<double> *)(lVar28 * 0x60 + *(longlong *)&this->Pose);
      auVar106._8_8_ = -(ulonglong)(auVar68._8_8_ == dVar76);
      auVar106._0_8_ = -(ulonglong)(auVar68._0_8_ == dVar35);
      uVar19 = movmskpd(uVar19,auVar106);
      auVar78._8_8_ = -(ulonglong)(auVar77._8_8_ == dVar76);
      auVar78._0_8_ = -(ulonglong)(auVar77._0_8_ == dVar35);
      iVar15 = movmskpd(uVar20,auVar78);
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar36._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
        auVar36._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar36._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ == dVar76);
        auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ == dVar35);
        uVar20 = movmskpd(0,auVar37);
        auVar38._0_8_ =
             (double)CONCAT44(uVar115 & *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4)
                              ,uVar114 & *(uint *)(this_00->Translation).XY.m128d_f64);
        auVar38._8_4_ = uVar116 & *(uint *)((this_00->Translation).XY.m128d_f64 + 1);
        auVar38._12_4_ = uVar117 & *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc);
        auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ == dVar76);
        auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar39);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641c1f3;
        auVar40._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
        auVar40._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar40._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ == dVar76);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ == dVar35);
        auVar79._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
        auVar79._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar79._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar41);
        auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ == dVar76);
        auVar80._0_8_ = -(ulonglong)(auVar79._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar80);
        uVar21 = 0;
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641c1f3;
      }
      else {
LAB_14641c1f3:
        FBase64::Encode(&local_2c8,(uchar *)this_00,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_00,&local_278);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x27f,L"Pose[%d] contains NaN: %s\nBase64: %s");
        iVar15 = (int)CONCAT71(extraout_var_00,bVar14);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
          iVar15 = extraout_EAX;
        }
        FVar22.Data = local_2c8.Data.AllocatorInstance.Data;
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          iVar15 = extraout_EAX_00;
        }
        uVar21 = SUB84(FVar22.Data,0);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      auVar42._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_01->Rotation).ZW.m128d_f64 & uVar114);
      auVar42._8_4_ = *(uint *)((this_01->Rotation).ZW.m128d_f64 + 1) & uVar116;
      auVar42._12_4_ = *(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
      auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ == dVar76);
      auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ == dVar35);
      auVar81._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_01->Rotation).XY.m128d_f64 & uVar114);
      auVar81._8_4_ = *(uint *)((this_01->Rotation).XY.m128d_f64 + 1) & uVar116;
      auVar81._12_4_ = *(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 0xc) & uVar117;
      uVar20 = movmskpd(uVar21,auVar43);
      auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ == dVar76);
      auVar82._0_8_ = -(ulonglong)(auVar81._0_8_ == dVar35);
      iVar15 = movmskpd(iVar15,auVar82);
      if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar44._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_01->Translation).ZW.m128d_f64 & uVar114);
        auVar44._8_4_ = *(uint *)((this_01->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar44._12_4_ = *(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ == dVar76);
        auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ == dVar35);
        auVar83._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_01->Translation).XY.m128d_f64 & uVar114);
        auVar83._8_4_ = *(uint *)((this_01->Translation).XY.m128d_f64 + 1) & uVar116;
        auVar83._12_4_ = *(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar45);
        auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ == dVar76);
        auVar84._0_8_ = -(ulonglong)(auVar83._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar84);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641c316;
        auVar46._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Scale3D).ZW.m128d_f64 & uVar114);
        auVar46._8_4_ = *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar46._12_4_ = *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ == dVar76);
        auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ == dVar35);
        auVar85._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Scale3D).XY.m128d_f64 & uVar114);
        auVar85._8_4_ = *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar85._12_4_ = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar47);
        auVar86._8_8_ = -(ulonglong)(auVar85._8_8_ == dVar76);
        auVar86._0_8_ = -(ulonglong)(auVar85._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar86);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641c316;
      }
      else {
LAB_14641c316:
        FBase64::Encode(&local_2a8,(uchar *)this_01,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_01,&local_2b8);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ParentBone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x285,L"Pose[%d] contains NaN: %s\nBase64: %s");
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar23 = &local_148;
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(pTVar23,this_00,this_01);
      auVar48._0_8_ =
           (double)CONCAT44(local_148.Rotation.ZW.m128d_f64[0]._4_4_ & uVar115,
                            local_148.Rotation.ZW.m128d_f64[0]._0_4_ & uVar114);
      auVar48._8_4_ = local_148.Rotation.ZW.m128d_f64[1]._0_4_ & uVar116;
      auVar48._12_4_ = local_148.Rotation.ZW.m128d_f64[1]._4_4_ & uVar117;
      auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ == dVar76);
      auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ == dVar35);
      auVar87._0_8_ =
           (double)CONCAT44(local_148.Rotation.XY.m128d_f64[0]._4_4_ & uVar115,
                            local_148.Rotation.XY.m128d_f64[0]._0_4_ & uVar114);
      auVar87._8_4_ = local_148.Rotation.XY.m128d_f64[1]._0_4_ & uVar116;
      auVar87._12_4_ = local_148.Rotation.XY.m128d_f64[1]._4_4_ & uVar117;
      iVar15 = movmskpd((int)pTVar23,auVar49);
      auVar88._8_8_ = -(ulonglong)(auVar87._8_8_ == dVar76);
      auVar88._0_8_ = -(ulonglong)(auVar87._0_8_ == dVar35);
      uVar20 = movmskpd(extraout_EAX_01,auVar88);
      uVar19 = iVar15 << 2 | uVar20;
      if (uVar19 == 0) {
        auVar50._0_8_ =
             (double)CONCAT44(local_148.Translation.ZW.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Translation.ZW.m128d_f64[0]._0_4_ & uVar114);
        auVar50._8_4_ = local_148.Translation.ZW.m128d_f64[1]._0_4_ & uVar116;
        auVar50._12_4_ = local_148.Translation.ZW.m128d_f64[1]._4_4_ & uVar117;
        auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ == dVar76);
        auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ == dVar35);
        auVar89._0_8_ =
             (double)CONCAT44(local_148.Translation.XY.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Translation.XY.m128d_f64[0]._0_4_ & uVar114);
        auVar89._8_4_ = local_148.Translation.XY.m128d_f64[1]._0_4_ & uVar116;
        auVar89._12_4_ = local_148.Translation.XY.m128d_f64[1]._4_4_ & uVar117;
        iVar15 = movmskpd(0,auVar51);
        auVar90._8_8_ = -(ulonglong)(auVar89._8_8_ == dVar76);
        auVar90._0_8_ = -(ulonglong)(auVar89._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar90);
        uVar19 = iVar15 << 2 | uVar20;
        if (uVar19 != 0) goto LAB_14641c4b6;
        auVar52._0_8_ =
             (double)CONCAT44(local_148.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar114);
        auVar52._8_4_ = local_148.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar116;
        auVar52._12_4_ = local_148.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar117;
        auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ == dVar76);
        auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ == dVar35);
        auVar91._0_8_ =
             (double)CONCAT44(local_148.Scale3D.XY.m128d_f64[0]._4_4_ & uVar115,
                              local_148.Scale3D.XY.m128d_f64[0]._0_4_ & uVar114);
        auVar91._8_4_ = local_148.Scale3D.XY.m128d_f64[1]._0_4_ & uVar116;
        auVar91._12_4_ = local_148.Scale3D.XY.m128d_f64[1]._4_4_ & uVar117;
        iVar15 = movmskpd(0,auVar53);
        auVar92._8_8_ = -(ulonglong)(auVar91._8_8_ == dVar76);
        auVar92._0_8_ = -(ulonglong)(auVar91._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar92);
        uVar19 = iVar15 << 2 | uVar20;
        FVar22.Data = (FScriptContainerElement *)(ulonglong)uVar19;
        if (uVar19 != 0) goto LAB_14641c4b6;
      }
      else {
LAB_14641c4b6:
        auVar54._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Rotation).ZW.m128d_f64 & uVar114);
        auVar54._8_4_ = *(uint *)((this_00->Rotation).ZW.m128d_f64 + 1) & uVar116;
        auVar54._12_4_ = *(uint *)((longlong)(this_00->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ == dVar76);
        auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ == dVar35);
        auVar93._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Rotation).XY.m128d_f64 & uVar114);
        auVar93._8_4_ = *(uint *)((this_00->Rotation).XY.m128d_f64 + 1) & uVar116;
        auVar93._12_4_ = *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc) & uVar117;
        iVar15 = movmskpd(uVar19,auVar55);
        auVar94._8_8_ = -(ulonglong)(auVar93._8_8_ == dVar76);
        auVar94._0_8_ = -(ulonglong)(auVar93._0_8_ == dVar35);
        uVar20 = movmskpd(uVar20,auVar94);
        uVar19 = iVar15 << 2 | uVar20;
        if (uVar19 == 0) {
          auVar56._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
          auVar56._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
          auVar56._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
          auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ == dVar76);
          auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ == dVar35);
          auVar95._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_00->Translation).XY.m128d_f64 & uVar114);
          auVar95._8_4_ = *(uint *)((this_00->Translation).XY.m128d_f64 + 1) & uVar116;
          auVar95._12_4_ = *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc) & uVar117;
          iVar15 = movmskpd(0,auVar57);
          auVar96._8_8_ = -(ulonglong)(auVar95._8_8_ == dVar76);
          auVar96._0_8_ = -(ulonglong)(auVar95._0_8_ == dVar35);
          uVar20 = movmskpd(uVar20,auVar96);
          uVar19 = iVar15 << 2 | uVar20;
          if (uVar19 == 0) {
            auVar58._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
            auVar58._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
            auVar58._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
            auVar59._8_8_ = -(ulonglong)(auVar58._8_8_ == dVar76);
            auVar59._0_8_ = -(ulonglong)(auVar58._0_8_ == dVar35);
            auVar97._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
            auVar97._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
            auVar97._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
            iVar15 = movmskpd(0,auVar59);
            auVar98._8_8_ = -(ulonglong)(auVar97._8_8_ == dVar76);
            auVar98._0_8_ = -(ulonglong)(auVar97._0_8_ == dVar35);
            uVar19 = movmskpd(uVar20,auVar98);
            uVar19 = iVar15 << 2 | uVar19;
            uVar20 = (uint)(uVar19 != 0);
          }
          else {
            uVar20 = 1;
          }
        }
        else {
          uVar20 = 1;
        }
        pwVar30 = L"false";
        auVar60._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Rotation).ZW.m128d_f64 & uVar114);
        auVar60._8_4_ = *(uint *)((this_01->Rotation).ZW.m128d_f64 + 1) & uVar116;
        auVar60._12_4_ = *(uint *)((longlong)(this_01->Rotation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar99._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_01->Rotation).XY.m128d_f64 & uVar114);
        auVar99._8_4_ = *(uint *)((this_01->Rotation).XY.m128d_f64 + 1) & uVar116;
        auVar99._12_4_ = *(uint *)((longlong)(this_01->Rotation).XY.m128d_f64 + 0xc) & uVar117;
        if (uVar20 != 0) {
          pwVar30 = L"true";
        }
        auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ == dVar76);
        auVar61._0_8_ = -(ulonglong)(auVar60._0_8_ == dVar35);
        uVar19 = movmskpd(uVar19,auVar61);
        auVar100._8_8_ = -(ulonglong)(auVar99._8_8_ == dVar76);
        auVar100._0_8_ = -(ulonglong)(auVar99._0_8_ == dVar35);
        iVar15 = movmskpd(uVar20,auVar100);
        if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
          auVar62._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_01->Translation).ZW.m128d_f64 & uVar114);
          auVar62._8_4_ = *(uint *)((this_01->Translation).ZW.m128d_f64 + 1) & uVar116;
          auVar62._12_4_ = *(uint *)((longlong)(this_01->Translation).ZW.m128d_f64 + 0xc) & uVar117;
          auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ == dVar76);
          auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ == dVar35);
          auVar101._0_8_ =
               (double)CONCAT44(*(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 4) &
                                uVar115,*(uint *)(this_01->Translation).XY.m128d_f64 & uVar114);
          auVar101._8_4_ = *(uint *)((this_01->Translation).XY.m128d_f64 + 1) & uVar116;
          auVar101._12_4_ = *(uint *)((longlong)(this_01->Translation).XY.m128d_f64 + 0xc) & uVar117
          ;
          uVar20 = movmskpd(0,auVar63);
          auVar102._8_8_ = -(ulonglong)(auVar101._8_8_ == dVar76);
          auVar102._0_8_ = -(ulonglong)(auVar101._0_8_ == dVar35);
          iVar15 = movmskpd(iVar15,auVar102);
          if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
            auVar64._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_01->Scale3D).ZW.m128d_f64 & uVar114);
            auVar64._8_4_ = *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1) & uVar116;
            auVar64._12_4_ = *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
            auVar65._8_8_ = -(ulonglong)(auVar64._8_8_ == dVar76);
            auVar65._0_8_ = -(ulonglong)(auVar64._0_8_ == dVar35);
            auVar103._0_8_ =
                 (double)CONCAT44(*(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4) & uVar115
                                  ,*(uint *)(this_01->Scale3D).XY.m128d_f64 & uVar114);
            auVar103._8_4_ = *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1) & uVar116;
            auVar103._12_4_ = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
            uVar20 = movmskpd(0,auVar65);
            auVar104._8_8_ = -(ulonglong)(auVar103._8_8_ == dVar76);
            auVar104._0_8_ = -(ulonglong)(auVar103._0_8_ == dVar35);
            iVar15 = movmskpd(iVar15,auVar104);
            bVar14 = (uVar20 & 0x3fffffff) != 0 || iVar15 != 0;
          }
          else {
            bVar14 = true;
          }
        }
        else {
          bVar14 = true;
        }
        ::FString::FString(&local_3f0,L"NaN created in during FTransform Multiplication\n");
        FStringFormatArg::FStringFormatArg(&local_e8,(int)local_res10[0]);
        FStringFormatArg::FStringFormatArg(&local_c8,(int)local_3f8);
        FStringFormatArg::FStringFormatArg(&local_a8,pwVar30);
        pwVar30 = L"false";
        if (bVar14) {
          pwVar30 = L"true";
        }
        FStringFormatArg::FStringFormatArg(&local_88,pwVar30);
        local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e0.ArrayNum = 4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,4,0,&local_3e0.AllocatorInstance,4,&local_3e0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3e0.AllocatorInstance.Data,&local_e8,4);
        ::FString::FormatImpl
                  (&local_348,
                   L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                   ,&local_3e0);
        uVar20 = local_348.Data.ArrayNum - 1;
        if (local_348.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_348.Data.AllocatorInstance.Data,uVar20);
        if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_348.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3e0.AllocatorInstance.Data,local_3e0.ArrayNum);
        if ((FStringFormatArg *)local_3e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3e0.AllocatorInstance.Data);
        }
        if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(this_00,&local_158);
        FStringFormatArg::FStringFormatArg(&local_268,pFVar18);
        local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3d0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3d0.AllocatorInstance,1,&local_3d0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3d0.AllocatorInstance.Data,&local_268,1);
        ::FString::FormatImpl(&local_338,L"\tBone {0}\n",&local_3d0);
        uVar20 = local_338.Data.ArrayNum - 1;
        if (local_338.Data.ArrayNum == 0) {
          uVar20 = uVar29;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_338.Data.AllocatorInstance.Data,uVar20);
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3d0.AllocatorInstance.Data,local_3d0.ArrayNum);
        if ((FStringFormatArg *)local_3d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3d0.AllocatorInstance.Data);
        }
        if (local_268.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(this_01,&local_1a8);
        FStringFormatArg::FStringFormatArg(&local_248,pFVar18);
        local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3c0.AllocatorInstance,1,&local_3c0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3c0.AllocatorInstance.Data,&local_248,1);
        ::FString::FormatImpl(&local_328,L"\tParent {0}\n",&local_3c0);
        uVar20 = local_328.Data.ArrayNum - 1;
        if (local_328.Data.ArrayNum == 0) {
          uVar20 = uVar29;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_328.Data.AllocatorInstance.Data,uVar20);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3c0.AllocatorInstance.Data,local_3c0.ArrayNum);
        if ((FStringFormatArg *)local_3c0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3c0.AllocatorInstance.Data);
        }
        if (local_248.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = UE::Math::TTransform<double>::ToString(&local_148,&local_198);
        FStringFormatArg::FStringFormatArg(&local_228,pFVar18);
        local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3b0.AllocatorInstance,1,&local_3b0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3b0.AllocatorInstance.Data,&local_228,1);
        ::FString::FormatImpl(&local_318,L"\tResult {0}\n",&local_3b0);
        uVar20 = local_318.Data.ArrayNum - 1;
        if (local_318.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_318.Data.AllocatorInstance.Data,uVar20);
        if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3b0.AllocatorInstance.Data,local_3b0.ArrayNum);
        if ((FStringFormatArg *)local_3b0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3b0.AllocatorInstance.Data);
        }
        if (local_228.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_188,(uchar *)this_00,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_208,pFVar18);
        local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_3a0.AllocatorInstance,1,&local_3a0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_3a0.AllocatorInstance.Data,&local_208,1);
        ::FString::FormatImpl(&local_308,L"\tBone B64 {0}\n",&local_3a0);
        uVar20 = local_308.Data.ArrayNum - 1;
        if (local_308.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_308.Data.AllocatorInstance.Data,uVar20);
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
        if ((FStringFormatArg *)local_3a0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_3a0.AllocatorInstance.Data);
        }
        if (local_208.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_178,(uchar *)this_01,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_1e8,pFVar18);
        local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_390.AllocatorInstance,1,&local_390.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_390.AllocatorInstance.Data,&local_1e8,1);
        ::FString::FormatImpl(&local_2f8,L"\tParent B64 {0}\n",&local_390);
        uVar20 = local_2f8.Data.ArrayNum - 1;
        if (local_2f8.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,uVar20);
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
        if ((FStringFormatArg *)local_390.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_390.AllocatorInstance.Data);
        }
        if (local_1e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar18 = FBase64::Encode(&local_168,(uchar *)&local_148,0x60,Standard);
        FStringFormatArg::FStringFormatArg(&local_1c8,pFVar18);
        local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_380.AllocatorInstance,1,&local_380.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_380.AllocatorInstance.Data,&local_1c8,1);
        ::FString::FormatImpl(&local_2e8,L"\tResult B64 {0}\n",&local_380);
        uVar20 = local_2e8.Data.ArrayNum - 1;
        if (local_2e8.Data.ArrayNum == 0) {
          uVar20 = uVar24;
        }
        ::FString::AppendChars(&local_3f0,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,uVar20);
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
        if ((FStringFormatArg *)local_380.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
        }
        if (local_1c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.StringValue.Data.AllocatorInstance.Data);
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x298,L"Error during CalculateComponentSpaceTransform\n%s");
        uVar20 = (uint)CONCAT71(extraout_var_01,bVar14);
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar22.Data = local_3f0.Data.AllocatorInstance.Data;
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          uVar20 = extraout_EAX_02;
        }
      }
      (this_00->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      (this_00->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
      (this_00->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
      (this_00->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
      (this_00->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
      (this_00->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
      (this_00->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
      (this_00->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
      (this_00->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
      (this_00->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
      (this_00->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
      (this_00->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
      dVar9 = (this_00->Rotation).XY.m128d_f64[0];
      dVar10 = (this_00->Rotation).XY.m128d_f64[1];
      dVar11 = (this_00->Rotation).ZW.m128d_f64[0];
      dVar12 = (this_00->Rotation).ZW.m128d_f64[1];
      auVar105._0_8_ = dVar11 * dVar11 + dVar9 * dVar9;
      auVar105._8_8_ = dVar12 * dVar12 + dVar10 * dVar10;
      auVar66._8_4_ = SUB84(auVar105._8_8_,0);
      auVar66._0_8_ = auVar105._0_8_;
      auVar66._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
      auVar67._0_8_ = auVar66._8_8_ + auVar105._0_8_;
      auVar67._8_8_ = auVar105._0_8_ + auVar105._8_8_;
      auVar106 = sqrtpd(auVar105,auVar67);
      uVar31 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar67._0_8_)
      ;
      uVar33 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar67._8_8_)
      ;
      uVar32 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar67._0_8_)
      ;
      uVar34 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar67._8_8_)
      ;
      auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar106);
      auVar106 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar106);
      auVar69._0_8_ = uVar32 & (ulonglong)(auVar68._0_8_ * dVar9);
      uVar8 = uVar34 & (ulonglong)(auVar68._8_8_ * dVar10);
      auVar69._8_4_ = (undefined4)uVar8;
      auVar69._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar7._4_4_ = ~(uint)(uVar32 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar7._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar7._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar7._12_4_ =
           ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar113._0_8_ = uVar31 & (ulonglong)(auVar106._0_8_ * dVar11);
      uVar8 = uVar33 & (ulonglong)(auVar106._8_8_ * dVar12);
      auVar113._8_4_ = (undefined4)uVar8;
      auVar113._12_4_ = (undefined4)(uVar8 >> 0x20);
      uVar19 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64 = auVar69 | auVar7;
      auVar6._4_4_ = ~(uint)(uVar31 >> 0x20) & uVar3;
      auVar6._0_4_ = ~(uint)uVar31 & uVar19;
      auVar6._8_4_ = ~(uint)uVar33 & uVar4;
      auVar6._12_4_ = ~(uint)(uVar33 >> 0x20) & uVar5;
      auVar113 = auVar113 | auVar6;
      *(undefined1 (*) [16])(this_00->Rotation).ZW.m128d_f64 = auVar113;
      auVar70._0_8_ = (double)CONCAT44(auVar113._4_4_ & uVar115,auVar113._0_4_ & uVar114);
      auVar70._8_4_ = auVar113._8_4_ & uVar116;
      auVar70._12_4_ = auVar113._12_4_ & uVar117;
      auVar71._8_8_ = -(ulonglong)(auVar70._8_8_ == dVar76);
      auVar71._0_8_ = -(ulonglong)(auVar70._0_8_ == dVar35);
      auVar107._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 4) & uVar115,
                            *(uint *)(this_00->Rotation).XY.m128d_f64 & uVar114);
      auVar107._8_4_ = *(uint *)((this_00->Rotation).XY.m128d_f64 + 1) & uVar116;
      auVar107._12_4_ = *(uint *)((longlong)(this_00->Rotation).XY.m128d_f64 + 0xc) & uVar117;
      uVar19 = movmskpd((int)FVar22.Data,auVar71);
      auVar108._8_8_ = -(ulonglong)(auVar107._8_8_ == dVar76);
      auVar108._0_8_ = -(ulonglong)(auVar107._0_8_ == dVar35);
      iVar15 = movmskpd(uVar20,auVar108);
      if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar72._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).ZW.m128d_f64 & uVar114);
        auVar72._8_4_ = *(uint *)((this_00->Translation).ZW.m128d_f64 + 1) & uVar116;
        auVar72._12_4_ = *(uint *)((longlong)(this_00->Translation).ZW.m128d_f64 + 0xc) & uVar117;
        auVar73._8_8_ = -(ulonglong)(auVar72._8_8_ == dVar76);
        auVar73._0_8_ = -(ulonglong)(auVar72._0_8_ == dVar35);
        auVar109._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 4) & uVar115
                              ,*(uint *)(this_00->Translation).XY.m128d_f64 & uVar114);
        auVar109._8_4_ = *(uint *)((this_00->Translation).XY.m128d_f64 + 1) & uVar116;
        auVar109._12_4_ = *(uint *)((longlong)(this_00->Translation).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar73);
        auVar110._8_8_ = -(ulonglong)(auVar109._8_8_ == dVar76);
        auVar110._0_8_ = -(ulonglong)(auVar109._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar110);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641ce05;
        auVar74._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar114);
        auVar74._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar116;
        auVar74._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar117;
        auVar75._8_8_ = -(ulonglong)(auVar74._8_8_ == dVar76);
        auVar75._0_8_ = -(ulonglong)(auVar74._0_8_ == dVar35);
        auVar111._0_8_ =
             (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar115,
                              *(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar114);
        auVar111._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar116;
        auVar111._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & uVar117;
        uVar20 = movmskpd(0,auVar75);
        auVar112._8_8_ = -(ulonglong)(auVar111._8_8_ == dVar76);
        auVar112._0_8_ = -(ulonglong)(auVar111._0_8_ == dVar35);
        iVar15 = movmskpd(iVar15,auVar112);
        if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14641ce05;
      }
      else {
LAB_14641ce05:
        FBase64::Encode(&local_288,(uchar *)this_00,0x60,Standard);
        UE::Math::TTransform<double>::ToString(this_00,&local_298);
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bone.ContainsNaN()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x2a1,
                            L"Normalized ComponentTransform for Pose[%d] contains NaN: %s\nBase64: %s"
                           );
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar25 = (longlong)(int)local_res10[0];
      uVar20 = uVar29;
      if ((int)local_res10[0] < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
        uVar20 = ~(uint)local_res10[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = local_400;
      *(undefined1 *)(lVar25 + *(longlong *)&this->ComponentSpaceFlags) = 1;
      if ((local_400 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar26.Data = local_408.Data;
      iVar27 = iVar15 + -1;
      FVar1 = local_408.Data[iVar27];
      iVar15 = (iVar15 - iVar27) + -1;
      if (iVar15 != 0) {
        memmove(local_408.Data + iVar27,local_408.Data + iVar27 + 1,(longlong)iVar15 << 2);
      }
    }
    local_res10[0] = FVar1;
    if (iVar27 == 0) {
      if (local_370.bPopped == false) {
        local_400 = iVar27;
        if (((local_370.Mem)->TopMark != &local_370) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mem.TopMark == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x215,L""), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_370.bPopped = true;
        (local_370.Mem)->NumMarks = (local_370.Mem)->NumMarks + -1;
        if (local_370.SavedChunk != (local_370.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_370.Mem,local_370.SavedChunk);
        }
        (local_370.Mem)->Top = local_370.Top;
        (local_370.Mem)->TopMark = local_370.NextTopmostMark;
      }
      return;
    }
  } while( true );
}

// ConvertBoneToLocalSpace @ 146420340

void __thiscall
FCSPose<FCompactPose>::ConvertBoneToLocalSpace
          (FCSPose<FCompactPose> *this,FCompactPoseBoneIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  FCompactPoseBoneIndex local_res18 [4];
  
  if (param_1 != (FCompactPoseBoneIndex)0x0) {
    uVar3 = 0;
    if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
      uVar3 = ~(uint)param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) == '\x01') {
      FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&(this->Pose).field_0x10,local_res18);
      lVar4 = (longlong)(int)local_res18[0];
      uVar3 = 0;
      if ((int)local_res18[0] < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
        uVar3 = ~(uint)local_res18[0] >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(char *)(lVar4 + *(longlong *)&this->ComponentSpaceFlags) != '\x01') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComponentSpaceFlags[ParentIndex] == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                             ,0x2b5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)param_1 < *(int *)&(this->Pose).field_0x8) {
        uVar3 = ~(uint)param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = *(longlong *)&this->Pose;
      uVar3 = 0;
      if ((int)local_res18[0] < *(int *)&(this->Pose).field_0x8) {
        uVar3 = ~(uint)local_res18[0] >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Math::TTransform<double>::SetToRelativeTransform
                ((TTransform<double> *)((longlong)(int)param_1 * 0x60 + lVar4),
                 (TTransform<double> *)
                 ((longlong)(int)local_res18[0] * 0x60 + *(longlong *)&this->Pose));
      uVar3 = 0;
      if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
        uVar3 = ~(uint)param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined1 *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) = 0;
    }
  }
  return;
}

// ConvertComponentPosesToLocalPoses @ 146420660

void __cdecl
FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
          (FCSPose<FCompactPose> *param_1,FCompactPose *param_2)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 local_res8 [8];
  uint local_res10;
  FCompactPoseBoneIndex local_res18 [4];
  
  iVar2 = *(int *)&(param_1->Pose).field_0x8;
  if (*(int *)&(param_1->ComponentSpaceFlags).field_0x8 < 1) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (**(char **)&param_1->ComponentSpaceFlags != '\0') {
    if (*(int *)&(param_1->Pose).field_0x8 < 1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar4 = *(undefined8 **)&param_1->Pose;
    uVar12 = *puVar4;
    uVar13 = puVar4[1];
    uVar14 = puVar4[2];
    uVar15 = puVar4[3];
    uVar16 = puVar4[4];
    uVar17 = puVar4[5];
    uVar18 = puVar4[6];
    uVar19 = puVar4[7];
    uVar20 = puVar4[8];
    uVar21 = puVar4[9];
    uVar22 = puVar4[10];
    uVar23 = puVar4[0xb];
    if (*(int *)&param_2->field_0x8 < 1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar4 = *(undefined8 **)param_2;
    *puVar4 = uVar12;
    puVar4[1] = uVar13;
    puVar4[2] = uVar14;
    puVar4[3] = uVar15;
    puVar4[4] = uVar16;
    puVar4[5] = uVar17;
    puVar4[6] = uVar18;
    puVar4[7] = uVar19;
    puVar4[8] = uVar20;
    puVar4[9] = uVar21;
    puVar4[10] = uVar22;
    puVar4[0xb] = uVar23;
  }
  uVar29 = 0;
  if ((FCSPose<FCompactPose> *)param_2 != param_1) {
    *(undefined8 *)param_2 = *(undefined8 *)&param_1->Pose;
    uVar3 = *(undefined4 *)&(param_1->Pose).field_0x8;
    *(undefined8 *)&param_1->Pose = 0;
    *(undefined4 *)&param_2->field_0x8 = uVar3;
    *(undefined4 *)&param_2->field_0xc = *(undefined4 *)&(param_1->Pose).field_0xc;
    *(undefined4 *)&(param_1->Pose).field_0x8 = 0;
    *(undefined4 *)&(param_1->Pose).field_0xc = 0;
  }
  uVar28 = iVar2 - 1;
  *(undefined8 *)&param_2->field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  if (0 < (int)uVar28) {
    lVar30 = (longlong)(int)uVar28;
    do {
      uVar25 = uVar29;
      if ((int)uVar28 < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      local_res10 = uVar28;
      if (uVar25 == 0) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar24) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(char *)(lVar30 + *(longlong *)&param_1->ComponentSpaceFlags) != '\0') {
        FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&param_2->field_0x10,local_res18);
        lVar27 = (longlong)(int)local_res18[0];
        uVar25 = uVar29;
        if ((int)local_res18[0] < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
          uVar25 = ~(uint)local_res18[0] >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(char *)(lVar27 + *(longlong *)&param_1->ComponentSpaceFlags) == '\0') {
          local_res8[0] = 0;
          `FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses'::__l11::<lambda_1>::operator()
                    (local_res8);
        }
        lVar27 = (longlong)(int)local_res10;
        uVar25 = uVar29;
        if ((int)local_res10 < *(int *)&param_2->field_0x8) {
          uVar25 = ~local_res10 >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar26 = (longlong)(int)local_res18[0];
        lVar5 = *(longlong *)param_2;
        uVar25 = 0;
        if ((int)local_res18[0] < *(int *)&param_2->field_0x8) {
          uVar25 = ~(uint)local_res18[0] >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        UE::Math::TTransform<double>::SetToRelativeTransform
                  ((TTransform<double> *)(lVar27 * 0x60 + lVar5),
                   (TTransform<double> *)(lVar26 * 0x60 + *(longlong *)param_2));
        lVar27 = (longlong)(int)local_res10;
        uVar25 = 0;
        if ((int)local_res10 < *(int *)&param_2->field_0x8) {
          uVar25 = ~local_res10 >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar5 = *(longlong *)param_2;
        lVar27 = lVar27 * 0x60;
        dVar8 = *(double *)(lVar27 + lVar5);
        dVar9 = ((double *)(lVar27 + lVar5))[1];
        pdVar1 = (double *)(lVar27 + 0x10 + lVar5);
        dVar10 = *pdVar1;
        dVar11 = pdVar1[1];
        auVar39._0_8_ = dVar10 * dVar10 + dVar8 * dVar8;
        auVar39._8_8_ = dVar11 * dVar11 + dVar9 * dVar9;
        auVar35._8_4_ = SUB84(auVar39._8_8_,0);
        auVar35._0_8_ = auVar39._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
        auVar36._0_8_ = auVar35._8_8_ + auVar39._0_8_;
        auVar36._8_8_ = auVar39._0_8_ + auVar39._8_8_;
        auVar40 = sqrtpd(auVar39,auVar36);
        uVar31 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar36._0_8_);
        uVar33 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar36._8_8_);
        uVar32 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar36._0_8_);
        uVar34 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar36._8_8_);
        auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
        auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
        auVar38._0_8_ = uVar32 & (ulonglong)(auVar37._0_8_ * dVar8);
        uVar7 = uVar34 & (ulonglong)(auVar37._8_8_ * dVar9);
        auVar38._8_4_ = (undefined4)uVar7;
        auVar38._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar41._0_8_ = uVar31 & (ulonglong)(auVar40._0_8_ * dVar10);
        uVar7 = uVar33 & (ulonglong)(auVar40._8_8_ * dVar11);
        auVar41._8_4_ = (undefined4)uVar7;
        auVar41._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar40._4_4_ =
             ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar40._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar40._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar40._12_4_ =
             ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar37._4_4_ =
             ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar37._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar37._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar37._12_4_ =
             ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(lVar27 + lVar5) = auVar38 | auVar40;
        *(undefined1 (*) [16])(lVar27 + 0x10 + lVar5) = auVar41 | auVar37;
      }
      uVar28 = uVar28 - 1;
      lVar30 = lVar30 + -1;
    } while (0 < (int)uVar28);
  }
  return;
}

// ConvertComponentPosesToLocalPoses @ 146420ab0

void __cdecl
FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses
          (FCSPose<FCompactPose> *param_1,FCompactPose *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 local_res8 [8];
  uint local_res10;
  FCompactPoseBoneIndex local_res18 [2];
  
  TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_2,
             (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_1);
  *(undefined8 *)&param_2->field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  if ((*(int *)&(param_1->ComponentSpaceFlags).field_0x8 < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (**(char **)&param_1->ComponentSpaceFlags != '\0') {
    if ((*(int *)&(param_1->Pose).field_0x8 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar2 = *(undefined8 **)&param_1->Pose;
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    uVar14 = puVar2[4];
    uVar15 = puVar2[5];
    uVar16 = puVar2[6];
    uVar17 = puVar2[7];
    uVar18 = puVar2[8];
    uVar19 = puVar2[9];
    uVar20 = puVar2[10];
    uVar21 = puVar2[0xb];
    if ((*(int *)&param_2->field_0x8 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar2 = *(undefined8 **)param_2;
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2[2] = uVar12;
    puVar2[3] = uVar13;
    puVar2[4] = uVar14;
    puVar2[5] = uVar15;
    puVar2[6] = uVar16;
    puVar2[7] = uVar17;
    puVar2[8] = uVar18;
    puVar2[9] = uVar19;
    puVar2[10] = uVar20;
    puVar2[0xb] = uVar21;
  }
  uVar24 = *(int *)&(param_1->Pose).field_0x8 - 1;
  if (0 < (int)uVar24) {
    lVar27 = (longlong)(int)uVar24;
    do {
      uVar23 = 0;
      if ((int)uVar24 < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      local_res10 = uVar24;
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(char *)(lVar27 + *(longlong *)&param_1->ComponentSpaceFlags) != '\0') {
        FBoneContainer::GetParentBoneIndex
                  (*(FBoneContainer **)&(param_1->Pose).field_0x10,local_res18);
        lVar26 = (longlong)(int)local_res18[0];
        uVar23 = 0;
        if ((int)local_res18[0] < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
          uVar23 = ~(uint)local_res18[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)(lVar26 + *(longlong *)&param_1->ComponentSpaceFlags) == '\0') {
          local_res8[0] = 0;
          `FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses'::__l11::<lambda_1>::operator()
                    (local_res8);
        }
        lVar26 = (longlong)(int)local_res10;
        uVar23 = 0;
        if ((int)local_res10 < *(int *)&param_2->field_0x8) {
          uVar23 = ~local_res10 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar25 = (longlong)(int)local_res18[0];
        lVar3 = *(longlong *)param_2;
        uVar23 = 0;
        if ((int)local_res18[0] < *(int *)&param_2->field_0x8) {
          uVar23 = ~(uint)local_res18[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Math::TTransform<double>::SetToRelativeTransform
                  ((TTransform<double> *)(lVar26 * 0x60 + lVar3),
                   (TTransform<double> *)(lVar25 * 0x60 + *(longlong *)param_2));
        lVar26 = (longlong)(int)local_res10;
        uVar23 = 0;
        if ((int)local_res10 < *(int *)&param_2->field_0x8) {
          uVar23 = ~local_res10 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)param_2;
        lVar26 = lVar26 * 0x60;
        dVar6 = *(double *)(lVar26 + lVar3);
        dVar7 = ((double *)(lVar26 + lVar3))[1];
        pdVar1 = (double *)(lVar26 + 0x10 + lVar3);
        dVar8 = *pdVar1;
        dVar9 = pdVar1[1];
        auVar36._0_8_ = dVar8 * dVar8 + dVar6 * dVar6;
        auVar36._8_8_ = dVar9 * dVar9 + dVar7 * dVar7;
        auVar32._8_4_ = SUB84(auVar36._8_8_,0);
        auVar32._0_8_ = auVar36._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
        auVar33._0_8_ = auVar32._8_8_ + auVar36._0_8_;
        auVar33._8_8_ = auVar36._0_8_ + auVar36._8_8_;
        auVar37 = sqrtpd(auVar36,auVar33);
        uVar28 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar33._0_8_);
        uVar30 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar33._8_8_);
        uVar29 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar33._0_8_);
        uVar31 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar33._8_8_);
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
        auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
        auVar35._0_8_ = uVar29 & (ulonglong)(auVar34._0_8_ * dVar6);
        uVar5 = uVar31 & (ulonglong)(auVar34._8_8_ * dVar7);
        auVar35._8_4_ = (undefined4)uVar5;
        auVar35._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar38._0_8_ = uVar28 & (ulonglong)(auVar37._0_8_ * dVar8);
        uVar5 = uVar30 & (ulonglong)(auVar37._8_8_ * dVar9);
        auVar38._8_4_ = (undefined4)uVar5;
        auVar38._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar37._4_4_ =
             ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar37._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar37._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar37._12_4_ =
             ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar34._4_4_ =
             ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar34._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar34._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar34._12_4_ =
             ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(lVar26 + lVar3) = auVar35 | auVar37;
        *(undefined1 (*) [16])(lVar26 + 0x10 + lVar3) = auVar38 | auVar34;
      }
      uVar24 = uVar24 - 1;
      lVar27 = lVar27 + -1;
    } while (0 < (int)uVar24);
  }
  return;
}

// ConvertComponentPosesToLocalPosesSafe @ 146420f00

void __cdecl
FCSPose<FCompactPose>::ConvertComponentPosesToLocalPosesSafe
          (FCSPose<FCompactPose> *param_1,FCompactPose *param_2)

{
  double *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  FCompactPoseBoneIndex local_res18 [4];
  
  iVar2 = *(int *)&(param_1->Pose).field_0x8;
  if ((*(int *)&(param_1->ComponentSpaceFlags).field_0x8 < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (**(char **)&param_1->ComponentSpaceFlags != '\0') {
    if ((*(int *)&(param_1->Pose).field_0x8 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar3 = *(undefined8 **)&param_1->Pose;
    uVar10 = *puVar3;
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    uVar14 = puVar3[4];
    uVar15 = puVar3[5];
    uVar16 = puVar3[6];
    uVar17 = puVar3[7];
    uVar18 = puVar3[8];
    uVar19 = puVar3[9];
    uVar20 = puVar3[10];
    uVar21 = puVar3[0xb];
    if ((*(int *)&param_2->field_0x8 < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar3 = *(undefined8 **)param_2;
    *puVar3 = uVar10;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    puVar3[4] = uVar14;
    puVar3[5] = uVar15;
    puVar3[6] = uVar16;
    puVar3[7] = uVar17;
    puVar3[8] = uVar18;
    puVar3[9] = uVar19;
    puVar3[10] = uVar20;
    puVar3[0xb] = uVar21;
  }
  uVar26 = iVar2 - 1;
  if (0 < (int)uVar26) {
    lVar27 = (longlong)(int)uVar26;
    do {
      uVar23 = 0;
      if ((int)uVar26 < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
        uVar23 = ~uVar26 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(char *)(lVar27 + *(longlong *)&param_1->ComponentSpaceFlags) != '\0') {
        FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&param_2->field_0x10,local_res18);
        lVar25 = (longlong)(int)local_res18[0];
        uVar23 = 0;
        if ((int)local_res18[0] < *(int *)&(param_1->ComponentSpaceFlags).field_0x8) {
          uVar23 = ~(uint)local_res18[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)(lVar25 + *(longlong *)&param_1->ComponentSpaceFlags) == '\0') {
          CalculateComponentSpaceTransform(param_1,local_res18[0]);
        }
        uVar23 = 0;
        if ((int)uVar26 < *(int *)&(param_1->Pose).field_0x8) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar25 = *(longlong *)&param_1->Pose;
        lVar24 = (longlong)(int)uVar26 * 0x60;
        uVar10 = *(undefined8 *)(lVar24 + lVar25);
        uVar11 = ((undefined8 *)(lVar24 + lVar25))[1];
        puVar3 = (undefined8 *)(lVar24 + 0x10 + lVar25);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        puVar3 = (undefined8 *)(lVar24 + 0x20 + lVar25);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        puVar3 = (undefined8 *)(lVar24 + 0x30 + lVar25);
        uVar16 = *puVar3;
        uVar17 = puVar3[1];
        puVar3 = (undefined8 *)(lVar24 + 0x40 + lVar25);
        uVar18 = *puVar3;
        uVar19 = puVar3[1];
        puVar3 = (undefined8 *)(lVar24 + 0x50 + lVar25);
        uVar20 = *puVar3;
        uVar21 = puVar3[1];
        uVar23 = 0;
        if ((int)uVar26 < *(int *)&param_2->field_0x8) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar25 = *(longlong *)param_2;
        lVar24 = (longlong)(int)uVar26 * 0x60;
        *(undefined8 *)(lVar24 + lVar25) = uVar10;
        ((undefined8 *)(lVar24 + lVar25))[1] = uVar11;
        puVar3 = (undefined8 *)(lVar24 + 0x10 + lVar25);
        *puVar3 = uVar12;
        puVar3[1] = uVar13;
        puVar3 = (undefined8 *)(lVar24 + 0x20 + lVar25);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (undefined8 *)(lVar24 + 0x30 + lVar25);
        *puVar3 = uVar16;
        puVar3[1] = uVar17;
        puVar3 = (undefined8 *)(lVar24 + 0x40 + lVar25);
        *puVar3 = uVar18;
        puVar3[1] = uVar19;
        puVar3 = (undefined8 *)(lVar24 + 0x50 + lVar25);
        *puVar3 = uVar20;
        puVar3[1] = uVar21;
        uVar23 = 0;
        if ((int)uVar26 < *(int *)&param_2->field_0x8) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar24 = (longlong)(int)local_res18[0];
        lVar25 = *(longlong *)param_2;
        uVar23 = 0;
        if ((int)local_res18[0] < *(int *)&(param_1->Pose).field_0x8) {
          uVar23 = ~(uint)local_res18[0] >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Math::TTransform<double>::SetToRelativeTransform
                  ((TTransform<double> *)((longlong)(int)uVar26 * 0x60 + lVar25),
                   (TTransform<double> *)(lVar24 * 0x60 + *(longlong *)&param_1->Pose));
        uVar23 = 0;
        if ((int)uVar26 < *(int *)&param_2->field_0x8) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar25 = *(longlong *)param_2;
        lVar24 = (longlong)(int)uVar26 * 0x60;
        dVar6 = *(double *)(lVar24 + lVar25);
        dVar7 = ((double *)(lVar24 + lVar25))[1];
        pdVar1 = (double *)(lVar24 + 0x10 + lVar25);
        dVar8 = *pdVar1;
        dVar9 = pdVar1[1];
        auVar36._0_8_ = dVar6 * dVar6 + dVar8 * dVar8;
        auVar36._8_8_ = dVar7 * dVar7 + dVar9 * dVar9;
        auVar32._8_4_ = SUB84(auVar36._8_8_,0);
        auVar32._0_8_ = auVar36._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
        auVar33._0_8_ = auVar32._8_8_ + auVar36._0_8_;
        auVar33._8_8_ = auVar36._0_8_ + auVar36._8_8_;
        auVar37 = sqrtpd(auVar36,auVar33);
        uVar28 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar33._0_8_);
        uVar30 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar33._8_8_);
        uVar29 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar33._0_8_);
        uVar31 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar33._8_8_);
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
        auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
        auVar35._0_8_ = uVar29 & (ulonglong)(auVar34._0_8_ * dVar6);
        uVar5 = uVar31 & (ulonglong)(auVar34._8_8_ * dVar7);
        auVar35._8_4_ = (undefined4)uVar5;
        auVar35._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar38._0_8_ = uVar28 & (ulonglong)(auVar37._0_8_ * dVar8);
        uVar5 = uVar30 & (ulonglong)(auVar37._8_8_ * dVar9);
        auVar38._8_4_ = (undefined4)uVar5;
        auVar38._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar37._4_4_ =
             ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar37._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar37._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar37._12_4_ =
             ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar34._4_4_ =
             ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar34._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar34._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar34._12_4_ =
             ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(lVar24 + lVar25) = auVar35 | auVar37;
        *(undefined1 (*) [16])(lVar24 + 0x10 + lVar25) = auVar38 | auVar34;
      }
      uVar26 = uVar26 - 1;
      lVar27 = lVar27 + -1;
    } while (0 < (int)uVar26);
  }
  return;
}

// Empty @ 146425da0

void __thiscall FCSPose<FCompactHeapPose>::Empty(FCSPose<FCompactHeapPose> *this)

{
  undefined1 *puVar1;
  int *piVar2;
  
  puVar1 = &(this->Pose).field_0xc;
  *(undefined8 *)&(this->Pose).field_0x10 = 0;
  *(undefined4 *)&(this->Pose).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  puVar1 = &(this->ComponentSpaceFlags).field_0xc;
  *(undefined4 *)&(this->ComponentSpaceFlags).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->ComponentSpaceFlags,0,(int *)puVar1);
  }
  piVar2 = &(this->BonesToConvert).ArrayMax;
  (this->BonesToConvert).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BonesToConvert).AllocatorInstance,0,piVar2);
  }
  puVar1 = &(this->BoneMask).field_0xc;
  *(undefined4 *)&(this->BoneMask).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->BoneMask,0,(int *)puVar1);
  }
  return;
}

// GetComponentSpaceTransform @ 146448830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FCSPose<FCompactHeapPose>::GetComponentSpaceTransform
          (FCSPose<FCompactHeapPose> *this,FCompactPoseBoneIndex param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  uint uVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 in_R8D;
  longlong lVar23;
  uint uVar24;
  uint uVar26;
  double dVar25;
  uint uVar27;
  uint uVar29;
  double dVar28;
  
  lVar21 = (longlong)(int)param_1;
  puVar1 = &(this->Pose).field_0x8;
  if (((int)param_1 < 0) || (*(int *)puVar1 <= (int)param_1)) {
    in_R8D = 0x246;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pose.IsValidIndex(BoneIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                        ,0x246,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  uVar22 = ~(uint)param_1;
  uVar16 = uVar22 >> 0x1f;
  uVar19 = 0;
  if ((int)param_1 < *(int *)puVar1) {
    uVar19 = uVar16;
  }
  if (uVar19 == 0) {
    in_R8D = 0x447;
    uVar19 = 0x506106c8;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar16 = (uint)CONCAT71(extraout_var,bVar15);
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  puVar20 = (uint *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
  uVar24 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar26 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar27 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar29 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar25 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar28 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[7] & uVar29,puVar20[6] & uVar27) == dVar28);
  auVar3._8_4_ = (int)lVar23;
  auVar3._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[5] & uVar26,puVar20[4] & uVar24) == dVar25);
  auVar3._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar19 = movmskpd(uVar19,auVar3);
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[3] & uVar29,puVar20[2] & uVar27) == dVar28);
  auVar9._8_4_ = (int)lVar23;
  auVar9._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[1] & uVar26,*puVar20 & uVar24) == dVar25);
  auVar9._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar17 = movmskpd(uVar16,auVar9);
  if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xf] & uVar29,puVar20[0xe] & uVar27) == dVar28);
    auVar4._8_4_ = (int)lVar23;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0xd] & uVar26,puVar20[0xc] & uVar24) == dVar25);
    auVar4._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar4);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xb] & uVar29,puVar20[10] & uVar27) == dVar28);
    auVar10._8_4_ = (int)lVar23;
    auVar10._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[9] & uVar26,puVar20[8] & uVar24) == dVar25);
    auVar10._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar10);
    if ((uVar19 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_146448969;
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0x17] & uVar29,puVar20[0x16] & uVar27) == dVar28)
    ;
    auVar5._8_4_ = (int)lVar23;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0x15] & uVar26,puVar20[0x14] & uVar24) == dVar25);
    auVar5._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar5);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0x13] & uVar29,puVar20[0x12] & uVar27) == dVar28)
    ;
    auVar11._8_4_ = (int)lVar23;
    auVar11._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[0x11] & uVar26,puVar20[0x10] & uVar24) == dVar25);
    auVar11._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar11);
    if ((uVar19 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_146448969;
  }
  else {
LAB_146448969:
    in_R8D = 0x249;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Pose[BoneIndex].ContainsNaN()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                        ,0x249,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  uVar19 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar19 = uVar22 >> 0x1f;
  }
  if (uVar19 == 0) {
    in_R8D = 0x447;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  if (*(char *)(lVar21 + *(longlong *)&this->ComponentSpaceFlags) == '\0') {
    CalculateComponentSpaceTransform(this,param_1);
  }
  iVar17 = *(int *)&(this->Pose).field_0x8;
  uVar19 = 0;
  if ((int)param_1 < iVar17) {
    uVar19 = uVar22 >> 0x1f;
  }
  if (uVar19 == 0) {
    iVar17 = 0x506106c8;
    in_R8D = 0x447;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar19 = (uint)CONCAT71(extraout_var_00,bVar15);
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  puVar20 = (uint *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
  uVar22 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar24 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar26 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar27 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar25 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar28 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[7] & uVar27,puVar20[6] & uVar26) == dVar28);
  auVar6._8_4_ = (int)lVar23;
  auVar6._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[5] & uVar24,puVar20[4] & uVar22) == dVar25);
  auVar6._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar16 = movmskpd(iVar17,auVar6);
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[3] & uVar27,puVar20[2] & uVar26) == dVar28);
  auVar12._8_4_ = (int)lVar23;
  auVar12._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[1] & uVar24,*puVar20 & uVar22) == dVar25);
  auVar12._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar17 = movmskpd(uVar19,auVar12);
  if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xf] & uVar27,puVar20[0xe] & uVar26) == dVar28);
    auVar7._8_4_ = (int)lVar23;
    auVar7._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0xd] & uVar24,puVar20[0xc] & uVar22) == dVar25);
    auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar7);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xb] & uVar27,puVar20[10] & uVar26) == dVar28);
    auVar13._8_4_ = (int)lVar23;
    auVar13._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[9] & uVar24,puVar20[8] & uVar22) == dVar25);
    auVar13._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar13);
    if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
      lVar23 = -(ulonglong)
                ((double)CONCAT44(puVar20[0x17] & uVar27,puVar20[0x16] & uVar26) == dVar28);
      auVar8._8_4_ = (int)lVar23;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(puVar20[0x15] & uVar24,puVar20[0x14] & uVar22) == dVar25);
      auVar8._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar19 = movmskpd(in_R8D,auVar8);
      lVar23 = -(ulonglong)
                ((double)CONCAT44(puVar20[0x13] & uVar27,puVar20[0x12] & uVar26) == dVar28);
      auVar14._8_4_ = (int)lVar23;
      auVar14._0_8_ =
           -(ulonglong)((double)CONCAT44(puVar20[0x11] & uVar24,puVar20[0x10] & uVar22) == dVar25);
      auVar14._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      iVar17 = movmskpd(iVar17,auVar14);
      if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) goto LAB_146448b1f;
    }
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("!Pose[BoneIndex].ContainsNaN()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                      ,0x24f,L"");
  if (bVar15) {
    pcVar2 = (code *)swi(3);
    pTVar18 = (TTransform<double> *)(*pcVar2)();
    return pTVar18;
  }
LAB_146448b1f:
  uVar19 = 0;
  if ((int)param_1 < *(int *)&(this->Pose).field_0x8) {
    uVar19 = ~(uint)param_1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar2 = (code *)swi(3);
    pTVar18 = (TTransform<double> *)(*pcVar2)();
    return pTVar18;
  }
  return (TTransform<double> *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
}

// GetComponentSpaceTransform @ 146448ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FCSPose<FCompactPose>::GetComponentSpaceTransform
          (FCSPose<FCompactPose> *this,FCompactPoseBoneIndex param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  uint uVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 in_R8D;
  longlong lVar23;
  uint uVar24;
  uint uVar26;
  double dVar25;
  uint uVar27;
  uint uVar29;
  double dVar28;
  
  lVar21 = (longlong)(int)param_1;
  puVar1 = &(this->Pose).field_0x8;
  if (((int)param_1 < 0) || (*(int *)puVar1 <= (int)param_1)) {
    in_R8D = 0x246;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pose.IsValidIndex(BoneIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                        ,0x246,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  uVar22 = ~(uint)param_1;
  uVar16 = uVar22 >> 0x1f;
  uVar19 = 0;
  if ((int)param_1 < *(int *)puVar1) {
    uVar19 = uVar16;
  }
  if (uVar19 == 0) {
    in_R8D = 0x447;
    uVar19 = 0x506106c8;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar16 = (uint)CONCAT71(extraout_var,bVar15);
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  puVar20 = (uint *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
  uVar24 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar26 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar27 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar29 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar25 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar28 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[7] & uVar29,puVar20[6] & uVar27) == dVar28);
  auVar3._8_4_ = (int)lVar23;
  auVar3._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[5] & uVar26,puVar20[4] & uVar24) == dVar25);
  auVar3._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar19 = movmskpd(uVar19,auVar3);
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[3] & uVar29,puVar20[2] & uVar27) == dVar28);
  auVar9._8_4_ = (int)lVar23;
  auVar9._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[1] & uVar26,*puVar20 & uVar24) == dVar25);
  auVar9._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar17 = movmskpd(uVar16,auVar9);
  if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xf] & uVar29,puVar20[0xe] & uVar27) == dVar28);
    auVar4._8_4_ = (int)lVar23;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0xd] & uVar26,puVar20[0xc] & uVar24) == dVar25);
    auVar4._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar4);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xb] & uVar29,puVar20[10] & uVar27) == dVar28);
    auVar10._8_4_ = (int)lVar23;
    auVar10._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[9] & uVar26,puVar20[8] & uVar24) == dVar25);
    auVar10._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar10);
    if ((uVar19 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_146448cd9;
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0x17] & uVar29,puVar20[0x16] & uVar27) == dVar28)
    ;
    auVar5._8_4_ = (int)lVar23;
    auVar5._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0x15] & uVar26,puVar20[0x14] & uVar24) == dVar25);
    auVar5._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar5);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0x13] & uVar29,puVar20[0x12] & uVar27) == dVar28)
    ;
    auVar11._8_4_ = (int)lVar23;
    auVar11._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[0x11] & uVar26,puVar20[0x10] & uVar24) == dVar25);
    auVar11._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar11);
    if ((uVar19 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_146448cd9;
  }
  else {
LAB_146448cd9:
    in_R8D = 0x249;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Pose[BoneIndex].ContainsNaN()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                        ,0x249,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  uVar19 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar19 = uVar22 >> 0x1f;
  }
  if (uVar19 == 0) {
    in_R8D = 0x447;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  if (*(char *)(lVar21 + *(longlong *)&this->ComponentSpaceFlags) == '\0') {
    CalculateComponentSpaceTransform(this,param_1);
  }
  iVar17 = *(int *)&(this->Pose).field_0x8;
  uVar19 = 0;
  if ((int)param_1 < iVar17) {
    uVar19 = uVar22 >> 0x1f;
  }
  if (uVar19 == 0) {
    iVar17 = 0x506106c8;
    in_R8D = 0x447;
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar19 = (uint)CONCAT71(extraout_var_00,bVar15);
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pTVar18 = (TTransform<double> *)(*pcVar2)();
      return pTVar18;
    }
  }
  puVar20 = (uint *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
  uVar22 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar24 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar26 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar27 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar25 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar28 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[7] & uVar27,puVar20[6] & uVar26) == dVar28);
  auVar6._8_4_ = (int)lVar23;
  auVar6._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[5] & uVar24,puVar20[4] & uVar22) == dVar25);
  auVar6._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar16 = movmskpd(iVar17,auVar6);
  lVar23 = -(ulonglong)((double)CONCAT44(puVar20[3] & uVar27,puVar20[2] & uVar26) == dVar28);
  auVar12._8_4_ = (int)lVar23;
  auVar12._0_8_ = -(ulonglong)((double)CONCAT44(puVar20[1] & uVar24,*puVar20 & uVar22) == dVar25);
  auVar12._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar17 = movmskpd(uVar19,auVar12);
  if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xf] & uVar27,puVar20[0xe] & uVar26) == dVar28);
    auVar7._8_4_ = (int)lVar23;
    auVar7._0_8_ = -(ulonglong)
                    ((double)CONCAT44(puVar20[0xd] & uVar24,puVar20[0xc] & uVar22) == dVar25);
    auVar7._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar19 = movmskpd(0,auVar7);
    lVar23 = -(ulonglong)((double)CONCAT44(puVar20[0xb] & uVar27,puVar20[10] & uVar26) == dVar28);
    auVar13._8_4_ = (int)lVar23;
    auVar13._0_8_ =
         -(ulonglong)((double)CONCAT44(puVar20[9] & uVar24,puVar20[8] & uVar22) == dVar25);
    auVar13._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar17 = movmskpd(iVar17,auVar13);
    if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
      lVar23 = -(ulonglong)
                ((double)CONCAT44(puVar20[0x17] & uVar27,puVar20[0x16] & uVar26) == dVar28);
      auVar8._8_4_ = (int)lVar23;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(puVar20[0x15] & uVar24,puVar20[0x14] & uVar22) == dVar25);
      auVar8._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar19 = movmskpd(in_R8D,auVar8);
      lVar23 = -(ulonglong)
                ((double)CONCAT44(puVar20[0x13] & uVar27,puVar20[0x12] & uVar26) == dVar28);
      auVar14._8_4_ = (int)lVar23;
      auVar14._0_8_ =
           -(ulonglong)((double)CONCAT44(puVar20[0x11] & uVar24,puVar20[0x10] & uVar22) == dVar25);
      auVar14._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      iVar17 = movmskpd(iVar17,auVar14);
      if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) goto LAB_146448e8f;
    }
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("!Pose[BoneIndex].ContainsNaN()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                      ,0x24f,L"");
  if (bVar15) {
    pcVar2 = (code *)swi(3);
    pTVar18 = (TTransform<double> *)(*pcVar2)();
    return pTVar18;
  }
LAB_146448e8f:
  uVar19 = 0;
  if ((int)param_1 < *(int *)&(this->Pose).field_0x8) {
    uVar19 = ~(uint)param_1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar2 = (code *)swi(3);
    pTVar18 = (TTransform<double> *)(*pcVar2)();
    return pTVar18;
  }
  return (TTransform<double> *)(lVar21 * 0x60 + *(longlong *)&this->Pose);
}

// GetLocalSpaceTransform @ 14644b650

TTransform<double> * __thiscall
FCSPose<FCompactPose>::GetLocalSpaceTransform
          (FCSPose<FCompactPose> *this,TTransform<double> *__return_storage_ptr__,
          FCompactPoseBoneIndex param_1)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  uint uVar7;
  longlong lVar8;
  FCompactPoseBoneIndex local_res8 [2];
  
  if (((int)param_1 < 0) || (*(int *)&(this->Pose).field_0x8 <= (int)param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pose.IsValidIndex(BoneIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                       ,0x22f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  uVar7 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar7 = ~(uint)param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (*(char *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) != '\0') {
    FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&(this->Pose).field_0x10,local_res8);
    if (local_res8[0] != (FCompactPoseBoneIndex)0xffffffff) {
      pTVar6 = GetComponentSpaceTransform(this,local_res8[0]);
      uVar7 = 0;
      if ((int)param_1 < *(int *)&(this->Pose).field_0x8) {
        uVar7 = ~(uint)param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TTransform<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      UE::Math::TTransform<double>::GetRelativeTransform
                ((TTransform<double> *)((longlong)(int)param_1 * 0x60 + *(longlong *)&this->Pose),
                 __return_storage_ptr__,pTVar6);
      return __return_storage_ptr__;
    }
  }
  uVar7 = 0;
  if ((int)param_1 < *(int *)&(this->Pose).field_0x8) {
    uVar7 = ~(uint)param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar2 = *(longlong *)&this->Pose;
  lVar8 = (longlong)(int)param_1 * 0x60;
  dVar4 = ((double *)(lVar8 + lVar2))[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar8 + lVar2);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar8 + 0x10 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar8 + 0x20 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar8 + 0x30 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar8 + 0x40 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar8 + 0x50 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// InitPose @ 146454e20

void __thiscall FCSPose<FCompactPose>::InitPose(FCSPose<FCompactPose> *this,FCompactPose *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)this,
             *(FBoneContainer **)&param_1->field_0x10);
  TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)this,
             (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_1);
  uVar3 = *(uint *)&(this->Pose).field_0x8;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  puVar1 = &(this->ComponentSpaceFlags).field_0xc;
  puVar2 = &(this->ComponentSpaceFlags).field_0x8;
  *(undefined4 *)puVar2 = 0;
  if (*(uint *)puVar1 != uVar3) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
              (1,1,uVar3,(ForElementType<unsigned_char> *)&this->ComponentSpaceFlags,0,(int *)puVar1
              );
  }
  iVar4 = *(int *)&(this->Pose).field_0x8;
  iVar7 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                    (1,1,iVar4,(ForElementType<unsigned_char> *)&this->ComponentSpaceFlags,
                     (int *)puVar2,(int *)puVar1);
  memset((void *)((longlong)iVar7 + *(longlong *)&this->ComponentSpaceFlags),0,(longlong)iVar4);
  if (*(int *)puVar2 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  **(undefined1 **)&this->ComponentSpaceFlags = 1;
  return;
}

// LocalBlendCSBoneTransforms @ 14645d6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCSPose<FCompactPose>::LocalBlendCSBoneTransforms
          (FCSPose<FCompactPose> *this,TArrayView<FBoneTransform_const_,int> *param_1,float param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  TArrayView<FBoneTransform_const_,int> *pTVar23;
  bool bVar24;
  int iVar25;
  FBoneTransform *pFVar26;
  uint *puVar27;
  FTlsAutoCleanup *pFVar28;
  TTransform<double> *pTVar29;
  FCompactPoseBoneIndex FVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar54;
  uint uVar55;
  undefined1 auVar53 [16];
  double dVar56;
  double dVar57;
  double dVar59;
  undefined4 uVar61;
  undefined1 auVar58 [16];
  double dVar60;
  double dVar62;
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  float fVar68;
  undefined1 auStackY_208 [32];
  ForElementType<unsigned_char> local_1d8;
  int local_1d0 [2];
  undefined1 local_1c8 [8];
  ForElementType<FBoneTransform> local_1c0;
  int local_1b8 [3];
  FCompactPoseBoneIndex local_1ac;
  FMemMark local_1a8;
  TArrayView<FBoneTransform_const_,int> *local_180;
  FCSPose<FCompactPose> *local_178;
  code *local_170;
  undefined1 *local_168;
  TArrayView<FBoneTransform_const_,int> local_158;
  TArrayView<FBoneTransform_const_,int> local_148;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  fVar21 = __real_3727c5ac;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (__real_3727c5ac <= param_2) {
    uVar32 = param_1->ArrayNum;
    local_180 = param_1;
    local_178 = this;
    if (0 < (int)uVar32) {
      pFVar26 = TArrayView<FBoneTransform_const_,int>::operator[](param_1,0);
      uVar33 = 1;
      FVar30 = pFVar26->BoneIndex;
      if (1 < (int)uVar32) {
        lVar35 = 0x70;
        do {
          uVar54 = 0;
          if ((int)uVar33 < (int)uVar32) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(int *)((longlong)(&(param_1->DataPtr->Transform).Rotation.XY + -1) + lVar35) <
               (int)FVar30) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BoneTransforms[I].BoneIndex >= LastIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                                  ,0x310,L""), bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar32 = 0;
          if ((int)uVar33 < param_1->ArrayNum) {
            uVar32 = ~uVar33 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar32 = param_1->ArrayNum;
          uVar33 = uVar33 + 1;
          FVar30 = *(FCompactPoseBoneIndex *)
                    ((longlong)(&(param_1->DataPtr->Transform).Rotation.XY + -1) + lVar35);
          lVar35 = lVar35 + 0x70;
          this = local_178;
        } while ((int)uVar33 < (int)uVar32);
      }
    }
    fVar22 = __real_3f7fff58;
    if (param_2 < __real_3f7fff58) {
      puVar27 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_168 = local_1c8;
      local_170 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar28 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_170,puVar27);
      local_1d8.Data = (uchar *)0x0;
      local_1d0[0] = 0;
      local_1d0[1] = 0;
      local_1a8.Mem = (FMemStackBase *)(pFVar28 + 2);
      local_1a8.Top = (local_1a8.Mem)->Top;
      local_1a8.SavedChunk = *(FTaggedMemory **)(pFVar28 + 4);
      local_1a8.bPopped = false;
      local_1a8.NextTopmostMark = *(FMemMark **)(pFVar28 + 5);
      pFVar28[5] = (FTlsAutoCleanup)&local_1a8;
      *(int *)(pFVar28 + 6) = *(int *)(pFVar28 + 6) + 1;
      iVar8 = *(int *)&(this->Pose).field_0x8;
      iVar25 = UE::Core::Private::
               ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                         (1,1,iVar8,&local_1d8,local_1d0,local_1d0 + 1);
      memset(local_1d8.Data + iVar25,0,(longlong)iVar8);
      local_1c0.Data = (FBoneTransform *)0x0;
      local_1b8[0] = 0;
      local_1b8[1] = 0;
      if ((int)uVar32 < 1) {
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
      }
      else {
        UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<FBoneTransform>_>
                  (0x70,0x10,uVar32,&local_1c0,local_1b8,local_1b8 + 1);
      }
      iVar8 = local_1d0[0];
      uVar33 = 0;
      if (uVar32 != 0) {
        lVar35 = 0;
        do {
          uVar34 = ~uVar33 >> 0x1f;
          uVar54 = 0;
          if ((int)uVar33 < (int)uVar32) {
            uVar54 = uVar34;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar23 = local_180;
          FVar30 = *(FCompactPoseBoneIndex *)
                    ((longlong)(&(local_180->DataPtr->Transform).Rotation.XY + -1) + lVar35);
          pTVar29 = GetLocalSpaceTransform(this,&local_138,FVar30);
          dVar42 = (pTVar29->Rotation).XY.m128d_f64[0];
          dVar52 = (pTVar29->Rotation).XY.m128d_f64[1];
          uVar61 = *(undefined4 *)(pTVar29->Rotation).ZW.m128d_f64;
          uVar67 = *(undefined4 *)((longlong)(pTVar29->Rotation).ZW.m128d_f64 + 4);
          uVar18 = *(undefined4 *)((pTVar29->Rotation).ZW.m128d_f64 + 1);
          uVar19 = *(undefined4 *)((longlong)(pTVar29->Rotation).ZW.m128d_f64 + 0xc);
          dVar57 = (pTVar29->Translation).XY.m128d_f64[0];
          dVar60 = (pTVar29->Translation).XY.m128d_f64[1];
          auVar51 = *(undefined1 (*) [16])(pTVar29->Translation).ZW.m128d_f64;
          dVar16 = (pTVar29->Scale3D).XY.m128d_f64[0];
          dVar62 = (pTVar29->Scale3D).XY.m128d_f64[1];
          dVar64 = (pTVar29->Scale3D).ZW.m128d_f64[0];
          dVar56 = (pTVar29->Scale3D).ZW.m128d_f64[1];
          uVar32 = 0;
          if ((int)uVar33 < local_1b8[0]) {
            uVar32 = uVar34;
          }
          if ((uVar32 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pdVar1 = (double *)
                   ((longlong)((local_1c0.Data)->Transform).Rotation.XY.m128d_f64 + lVar35);
          *pdVar1 = dVar42;
          pdVar1[1] = dVar52;
          puVar2 = (undefined4 *)
                   ((longlong)((local_1c0.Data)->Transform).Rotation.ZW.m128d_f64 + lVar35);
          *puVar2 = uVar61;
          puVar2[1] = uVar67;
          puVar2[2] = uVar18;
          puVar2[3] = uVar19;
          pdVar1 = (double *)
                   ((longlong)((local_1c0.Data)->Transform).Translation.XY.m128d_f64 + lVar35);
          *pdVar1 = dVar57;
          pdVar1[1] = dVar60;
          *(undefined1 (*) [16])
           ((longlong)((local_1c0.Data)->Transform).Translation.ZW.m128d_f64 + lVar35) = auVar51;
          pdVar1 = (double *)((longlong)((local_1c0.Data)->Transform).Scale3D.XY.m128d_f64 + lVar35)
          ;
          *pdVar1 = dVar16;
          pdVar1[1] = dVar62;
          pdVar1 = (double *)((longlong)((local_1c0.Data)->Transform).Scale3D.ZW.m128d_f64 + lVar35)
          ;
          *pdVar1 = dVar64;
          pdVar1[1] = dVar56;
          uVar32 = 0;
          if ((int)uVar33 < local_1b8[0]) {
            uVar32 = uVar34;
          }
          if ((uVar32 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(FCompactPoseBoneIndex *)
           ((longlong)(&((local_1c0.Data)->Transform).Rotation.XY + -1) + lVar35) = FVar30;
          uVar32 = 0;
          if ((int)FVar30 < iVar8) {
            uVar32 = ~(uint)FVar30 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = uVar33 + 1;
          uVar32 = pTVar23->ArrayNum;
          lVar35 = lVar35 + 0x70;
          local_1d8.Data[(int)FVar30] = '\x01';
          param_1 = local_180;
        } while ((int)uVar33 < (int)uVar32);
      }
      local_148.DataPtr = param_1->DataPtr;
      local_148.ArrayNum = param_1->ArrayNum;
      local_148._12_4_ = *(undefined4 *)&param_1->field_0xc;
      SafeSetCSBoneTransforms(this,&local_148);
      uVar32 = *(uint *)&(this->Pose).field_0x8;
      uVar33 = 0;
      if (uVar32 != 0) {
        do {
          local_1b8[2] = uVar33;
          FBoneContainer::GetParentBoneIndex
                    (*(FBoneContainer **)&(this->Pose).field_0x10,&local_1ac);
          lVar35 = (longlong)(int)local_1ac;
          if (local_1ac != (FCompactPoseBoneIndex)0xffffffff) {
            uVar54 = 0;
            if ((int)local_1ac < iVar8) {
              uVar54 = ~(uint)local_1ac >> 0x1f;
            }
            if ((uVar54 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar7 = local_1d8.Data[lVar35];
            lVar35 = (longlong)local_1b8[2];
            uVar54 = 0;
            if (local_1b8[2] < iVar8) {
              uVar54 = (uint)~local_1b8[2] >> 0x1f;
            }
            if ((uVar54 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_1d8.Data[lVar35] = local_1d8.Data[lVar35] | bVar7;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar32);
      }
      FVar30 = (FCompactPoseBoneIndex)(*(int *)&(this->Pose).field_0x8 + -1);
      if (FVar30 != (FCompactPoseBoneIndex)0xffffffff) {
        lVar35 = (longlong)(int)FVar30;
        do {
          if (FVar30 != (FCompactPoseBoneIndex)0x0) {
            uVar32 = 0;
            if ((int)FVar30 < iVar8) {
              uVar32 = ~(uint)FVar30 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (local_1d8.Data[lVar35] != '\0') {
              ConvertBoneToLocalSpace(this,FVar30);
            }
          }
          FVar30 = (FCompactPoseBoneIndex)((int)FVar30 + -1);
          lVar35 = lVar35 + -1;
        } while (FVar30 != (FCompactPoseBoneIndex)0xffffffff);
      }
      uVar32 = 0;
      if (0 < local_1b8[0]) {
        lVar35 = 0;
        fVar68 = __real_3f800000 - param_2;
        do {
          uVar33 = 0;
          if ((int)uVar32 < local_1b8[0]) {
            uVar33 = ~uVar32 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar33 = *(uint *)((longlong)(&((local_1c0.Data)->Transform).Rotation.XY + -1) + lVar35);
          uVar54 = 0;
          if ((int)uVar33 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((*(char *)((longlong)(int)uVar33 + *(longlong *)&this->ComponentSpaceFlags) != '\0')
              && (uVar33 != 0)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ComponentSpaceFlags[BoneIndex] == 0) || (BoneIndex == 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                                  ,0x355,L""), bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar54 = 0;
          if ((int)uVar33 < *(int *)&(this->Pose).field_0x8) {
            uVar54 = ~uVar33 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pauVar31 = (undefined1 (*) [16])((longlong)(int)uVar33 * 0x60 + *(longlong *)&this->Pose);
          uVar33 = 0;
          if ((int)uVar32 < local_1b8[0]) {
            uVar33 = ~uVar32 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (fVar21 < fVar68) {
            if (fVar68 < fVar22) {
              dVar56 = (double)fVar68;
              dVar59 = (double)fVar68;
              dVar60 = (double)fVar68;
              dVar16 = (double)fVar68;
              uVar67 = (undefined4)((ulonglong)dVar16 >> 0x20);
              dVar52 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
              dVar62 = *(double *)pauVar31[3];
              auVar43._8_4_ = SUB84(dVar16,0);
              auVar43._0_8_ = dVar60;
              auVar43._12_4_ = uVar67;
              pdVar1 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Translation.ZW.m128d_f64 + lVar35);
              dVar64 = *pdVar1;
              dVar57 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar16) *
                       *(double *)(pauVar31[3] + 8) + auVar43._8_8_ * pdVar1[1];
              auVar44._8_4_ = SUB84(dVar59,0);
              auVar44._0_8_ = dVar56;
              uVar61 = (undefined4)((ulonglong)dVar59 >> 0x20);
              auVar44._12_4_ = uVar61;
              pdVar1 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Translation.XY.m128d_f64 + lVar35);
              dVar42 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar59) *
                       *(double *)(pauVar31[2] + 8) + auVar44._8_8_ * pdVar1[1];
              auVar45._8_4_ = SUB84(dVar16,0);
              auVar45._0_8_ = dVar60;
              auVar45._12_4_ = uVar67;
              auVar51._8_4_ = SUB84(dVar42,0);
              auVar51._0_8_ =
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar56) *
                   *(double *)pauVar31[2] + dVar56 * *pdVar1;
              auVar51._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
              pauVar31[2] = auVar51;
              auVar12._8_4_ = SUB84(dVar57,0);
              auVar12._0_8_ = (dVar52 - dVar60) * dVar62 + dVar60 * dVar64;
              auVar12._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              pauVar31[3] = auVar12;
              pdVar1 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Scale3D.ZW.m128d_f64 + lVar35);
              dVar62 = *pdVar1;
              dVar52 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
              dVar64 = *(double *)pauVar31[5];
              dVar57 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar16) *
                       *(double *)(pauVar31[5] + 8) + auVar45._8_8_ * pdVar1[1];
              auVar46._8_4_ = SUB84(dVar59,0);
              auVar46._0_8_ = dVar56;
              auVar46._12_4_ = uVar61;
              pdVar1 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Scale3D.XY.m128d_f64 + lVar35);
              dVar42 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar59) *
                       *(double *)(pauVar31[4] + 8) + auVar46._8_8_ * pdVar1[1];
              auVar65._8_4_ = SUB84(dVar42,0);
              auVar65._0_8_ =
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar56) *
                   *(double *)pauVar31[4] + dVar56 * *pdVar1;
              auVar65._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
              pauVar31[4] = auVar65;
              auVar13._8_4_ = SUB84(dVar57,0);
              auVar13._0_8_ = (dVar52 - dVar60) * dVar64 + dVar60 * dVar62;
              auVar13._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              pauVar31[5] = auVar13;
              pdVar1 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.XY.m128d_f64 + lVar35);
              pdVar4 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.ZW.m128d_f64 + lVar35);
              auVar51 = pauVar31[1];
              pdVar5 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.XY.m128d_f64 + lVar35);
              pdVar6 = (double *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.ZW.m128d_f64 + lVar35);
              dVar42 = *(double *)pauVar31[1] * *pdVar4 + *(double *)*pauVar31 * *pdVar1;
              dVar52 = *(double *)(pauVar31[1] + 8) * pdVar4[1] +
                       *(double *)(*pauVar31 + 8) * pdVar1[1];
              auVar47._8_4_ = SUB84(dVar52,0);
              auVar47._0_8_ = dVar42;
              auVar47._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              auVar65 = *pauVar31;
              lVar36 = -(ulonglong)(0.0 <= auVar47._8_8_ + dVar42);
              lVar39 = -(ulonglong)(0.0 <= dVar42 + dVar52);
              uVar33 = (uint)lVar36;
              uVar54 = (uint)((ulonglong)lVar36 >> 0x20);
              uVar34 = (uint)lVar39;
              uVar55 = (uint)((ulonglong)lVar39 >> 0x20);
              dVar42 = 0.0 - auVar65._0_8_;
              dVar52 = 0.0 - auVar65._8_8_;
              auVar63._0_4_ = ~uVar33 & SUB84(dVar42,0);
              auVar63._4_4_ = ~uVar54 & (uint)((ulonglong)dVar42 >> 0x20);
              auVar63._8_4_ = ~uVar34 & SUB84(dVar52,0);
              auVar63._12_4_ = ~uVar55 & (uint)((ulonglong)dVar52 >> 0x20);
              auVar10._4_4_ = auVar65._4_4_ & uVar54;
              auVar10._0_4_ = auVar65._0_4_ & uVar33;
              auVar10._8_4_ = auVar65._8_4_ & uVar34;
              auVar10._12_4_ = auVar65._12_4_ & uVar55;
              dVar42 = 0.0 - auVar51._0_8_;
              dVar52 = 0.0 - auVar51._8_8_;
              dVar62 = SUB168(auVar63 | auVar10,0) *
                       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar56) +
                       *pdVar5 * dVar56;
              dVar64 = SUB168(auVar63 | auVar10,8) *
                       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar59) +
                       pdVar5[1] * dVar59;
              auVar58._0_4_ = ~uVar33 & SUB84(dVar42,0);
              auVar58._4_4_ = ~uVar54 & (uint)((ulonglong)dVar42 >> 0x20);
              auVar58._8_4_ = ~uVar34 & SUB84(dVar52,0);
              auVar58._12_4_ = ~uVar55 & (uint)((ulonglong)dVar52 >> 0x20);
              auVar15._4_4_ = auVar51._4_4_ & uVar54;
              auVar15._0_4_ = auVar51._0_4_ & uVar33;
              auVar15._8_4_ = auVar51._8_4_ & uVar34;
              auVar15._12_4_ = auVar51._12_4_ & uVar55;
              auVar48._8_4_ = SUB84(dVar64,0);
              auVar48._0_8_ = dVar62;
              auVar48._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
              dVar57 = SUB168(auVar58 | auVar15,0) *
                       (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar60) +
                       *pdVar6 * dVar60;
              dVar60 = SUB168(auVar58 | auVar15,8) *
                       (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar16) +
                       pdVar6[1] * dVar16;
              dVar42 = dVar57 * dVar57 + dVar62 * dVar62;
              dVar52 = dVar60 * dVar60 + auVar48._8_8_ * dVar64;
              auVar49._8_4_ = SUB84(dVar52,0);
              auVar49._0_8_ = dVar42;
              auVar49._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              auVar50._0_8_ = auVar49._8_8_ + dVar42;
              auVar50._8_8_ = dVar42 + dVar52;
              uVar37 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                        auVar50._0_8_);
              uVar40 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                        auVar50._8_8_);
              uVar38 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                        auVar50._0_8_);
              uVar41 = -(ulonglong)
                        (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                        auVar50._8_8_);
              auVar51 = sqrtpd(auVar50,auVar50);
              auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar51);
              auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar51);
              auVar66._0_8_ = uVar37 & (ulonglong)(auVar65._0_8_ * dVar62);
              uVar17 = uVar40 & (ulonglong)(auVar65._8_8_ * dVar64);
              auVar66._8_4_ = (undefined4)uVar17;
              auVar66._12_4_ = (undefined4)(uVar17 >> 0x20);
              auVar53._0_8_ = uVar38 & (ulonglong)(auVar51._0_8_ * dVar57);
              uVar17 = uVar41 & (ulonglong)(auVar51._8_8_ * dVar60);
              auVar53._8_4_ = (undefined4)uVar17;
              auVar53._12_4_ = (undefined4)(uVar17 >> 0x20);
              auVar14._4_4_ =
                   ~(uint)(uVar37 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
              ;
              auVar14._0_4_ =
                   ~(uint)uVar37 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
              auVar14._8_4_ =
                   ~(uint)uVar40 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
              auVar14._12_4_ =
                   ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
              ;
              auVar11._4_4_ =
                   ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
              ;
              auVar11._0_4_ =
                   ~(uint)uVar38 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
              auVar11._8_4_ =
                   ~(uint)uVar41 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
              auVar11._12_4_ =
                   ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
              ;
              *pauVar31 = auVar66 | auVar14;
              pauVar31[1] = auVar53 | auVar11;
            }
            else {
              puVar3 = (undefined8 *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.XY.m128d_f64 + lVar35);
              uVar20 = puVar3[1];
              *(undefined8 *)*pauVar31 = *puVar3;
              *(undefined8 *)(*pauVar31 + 8) = uVar20;
              puVar3 = (undefined8 *)
                       ((longlong)((local_1c0.Data)->Transform).Rotation.ZW.m128d_f64 + lVar35);
              uVar20 = puVar3[1];
              *(undefined8 *)pauVar31[1] = *puVar3;
              *(undefined8 *)(pauVar31[1] + 8) = uVar20;
              puVar3 = (undefined8 *)
                       ((longlong)((local_1c0.Data)->Transform).Translation.XY.m128d_f64 + lVar35);
              uVar20 = puVar3[1];
              *(undefined8 *)pauVar31[2] = *puVar3;
              *(undefined8 *)(pauVar31[2] + 8) = uVar20;
              puVar3 = (undefined8 *)
                       ((longlong)((local_1c0.Data)->Transform).Translation.ZW.m128d_f64 + lVar35);
              uVar20 = puVar3[1];
              *(undefined8 *)pauVar31[3] = *puVar3;
              *(undefined8 *)(pauVar31[3] + 8) = uVar20;
              pauVar31[4] = *(undefined1 (*) [16])
                             ((longlong)((local_1c0.Data)->Transform).Scale3D.XY.m128d_f64 + lVar35)
              ;
              puVar3 = (undefined8 *)
                       ((longlong)((local_1c0.Data)->Transform).Scale3D.ZW.m128d_f64 + lVar35);
              uVar20 = puVar3[1];
              *(undefined8 *)pauVar31[5] = *puVar3;
              *(undefined8 *)(pauVar31[5] + 8) = uVar20;
            }
          }
          uVar32 = uVar32 + 1;
          lVar35 = lVar35 + 0x70;
        } while ((int)uVar32 < local_1b8[0]);
      }
      if (local_1a8.bPopped == false) {
        if (((local_1a8.Mem)->TopMark != &local_1a8) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mem.TopMark == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x215,L""), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1a8.bPopped = true;
        (local_1a8.Mem)->NumMarks = (local_1a8.Mem)->NumMarks + -1;
        if (local_1a8.SavedChunk != (local_1a8.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_1a8.Mem,local_1a8.SavedChunk);
        }
        (local_1a8.Mem)->Top = local_1a8.Top;
        (local_1a8.Mem)->TopMark = local_1a8.NextTopmostMark;
      }
    }
    else {
      local_158.DataPtr = param_1->DataPtr;
      local_158.ArrayNum = param_1->ArrayNum;
      local_158._12_4_ = *(undefined4 *)&param_1->field_0xc;
      SafeSetCSBoneTransforms(this,&local_158);
    }
  }
  return;
}

// SetComponentSpaceTransform @ 1464684d0

void __thiscall
FCSPose<FCompactPose>::SetComponentSpaceTransform
          (FCSPose<FCompactPose> *this,FCompactPoseBoneIndex param_1,TTransform<double> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  longlong lVar21;
  uint uVar22;
  
  puVar1 = &(this->Pose).field_0x8;
  if ((((int)param_1 < 0) || (*(int *)puVar1 <= (int)param_1)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pose.IsValidIndex(BoneIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                          ,599,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar10 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar12 = (param_2->Translation).XY.m128d_f64[0];
  dVar13 = (param_2->Translation).XY.m128d_f64[1];
  uVar6 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar8 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar9 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar14 = (param_2->Translation).ZW.m128d_f64[0];
  dVar15 = (param_2->Translation).ZW.m128d_f64[1];
  dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar18 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar19 = (param_2->Scale3D).XY.m128d_f64[1];
  uVar22 = 0;
  if ((int)param_1 < *(int *)puVar1) {
    uVar22 = ~(uint)param_1 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&this->Pose;
  lVar21 = (longlong)(int)param_1 * 0x60;
  puVar2 = (undefined4 *)(lVar21 + lVar4);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  pdVar3 = (double *)(lVar21 + 0x10 + lVar4);
  *pdVar3 = dVar10;
  pdVar3[1] = dVar11;
  pdVar3 = (double *)(lVar21 + 0x20 + lVar4);
  *pdVar3 = dVar12;
  pdVar3[1] = dVar13;
  pdVar3 = (double *)(lVar21 + 0x30 + lVar4);
  *pdVar3 = dVar14;
  pdVar3[1] = dVar15;
  pdVar3 = (double *)(lVar21 + 0x40 + lVar4);
  *pdVar3 = dVar18;
  pdVar3[1] = dVar19;
  pdVar3 = (double *)(lVar21 + 0x50 + lVar4);
  *pdVar3 = dVar16;
  pdVar3[1] = dVar17;
  uVar22 = 0;
  if ((int)param_1 < *(int *)&(this->ComponentSpaceFlags).field_0x8) {
    uVar22 = ~(uint)param_1 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)param_1 + *(longlong *)&this->ComponentSpaceFlags) = 1;
  return;
}

// operator() @ 1504ebf90

bool __thiscall
`FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8733751404402834528>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8733751404402834528>,
                       &`public:___cdecl_`public:_static_void___cdecl_FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses(FCSPose<struct_FCompactPose>&&___ptr64,FCompactPose&___ptr64)'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ebfd0

bool __thiscall
`FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8733751404402834567>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8733751404402834567>,
                       &`public:___cdecl_`public:_static_void___cdecl_FCSPose<FCompactPose>::ConvertComponentPosesToLocalPoses(FCSPose<struct_FCompactPose>_const&___ptr64,FCompactPose&___ptr64)'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

