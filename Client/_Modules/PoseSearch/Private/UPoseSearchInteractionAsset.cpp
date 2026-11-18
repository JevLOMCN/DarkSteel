// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 20

// StaticClass @ 14a8d65a0

UClass * __cdecl UPoseSearchInteractionAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionAsset",
               &Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionAsset>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionAsset>,local_res8,
               UMultiAnimAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton;
}

// UPoseSearchInteractionAsset @ 14a8e2af0

UPoseSearchInteractionAsset * __thiscall
UPoseSearchInteractionAsset::UPoseSearchInteractionAsset
          (UPoseSearchInteractionAsset *this,FVTableHelper *param_1)

{
  UMultiAnimAsset::UMultiAnimAsset((UMultiAnimAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPoseSearchInteractionAsset__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  this->WarpingBankingWeight = 0.0;
  return this;
}

// UPoseSearchInteractionAsset @ 14a8e2b30

UPoseSearchInteractionAsset * __thiscall
UPoseSearchInteractionAsset::UPoseSearchInteractionAsset
          (UPoseSearchInteractionAsset *this,FObjectInitializer *param_1)

{
  UMultiAnimAsset::UMultiAnimAsset((UMultiAnimAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPoseSearchInteractionAsset__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  this->WarpingBankingWeight = 0.0;
  return this;
}

// ~UPoseSearchInteractionAsset @ 14a8e30f0

void __thiscall
UPoseSearchInteractionAsset::~UPoseSearchInteractionAsset(UPoseSearchInteractionAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchInteractionAsset__6B_;
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMultiAnimAsset::~UMultiAnimAsset((UMultiAnimAsset *)this);
  return;
}

// operator() @ 14a8e5260

bool __thiscall
`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l74::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  fVar1 = *(float *)((longlong)param_1 * 0x80 + 0x10 + *(longlong *)(lVar2 + 0x28));
  uVar6 = 0;
  if (param_2 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return fVar1 < *(float *)((longlong)param_2 * 0x80 + 0x10 + *(longlong *)(lVar2 + 0x28));
}

// operator() @ 14a8e5360

bool __thiscall
`UPoseSearchInteractionAsset::CalculateWarpTransforms'::__l104::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  fVar1 = *(float *)((longlong)param_1 * 0x80 + 0x10 + *(longlong *)(lVar2 + 0x28));
  uVar6 = 0;
  if (param_2 < *(int *)(lVar2 + 0x30)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return fVar1 < *(float *)((longlong)param_2 * 0x80 + 0x10 + *(longlong *)(lVar2 + 0x28));
}

// CalculateWarpTransforms @ 14a8eb7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPoseSearchInteractionAsset::CalculateWarpTransforms
          (UPoseSearchInteractionAsset *this,float param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<UE::Math::TTransform<double>,int> *param_3,
          TArrayView<UMirrorDataTable_const_*_const,int> *param_4,
          TArrayView<bool_const_,int> *param_5)

{
  bool *pbVar1;
  undefined8 *puVar2;
  ForElementType<int> FVar3;
  double *pdVar4;
  __m128d *p_Var5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [12];
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float *pfVar29;
  TArrayView<UE::Math::TTransform<double>_const_,int> *pTVar30;
  TArrayView<UMirrorDataTable_const_*_const,int> *pTVar31;
  TArrayView<UE::Math::TTransform<double>,int> *pTVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  TTransform<double> *pTVar37;
  TArrayView<float,int> *pTVar38;
  TArrayView<int,int> *pTVar39;
  TArrayView<UE::Math::TTransform<double>_const_,int> *pTVar40;
  ForElementType<float> FVar41;
  TQuat<double> *pTVar42;
  TVector<double> *pTVar43;
  bool *pbVar44;
  ForElementType<UE::Math::TTransform<double>_> FVar45;
  longlong lVar46;
  uint uVar47;
  uint uVar48;
  ulonglong uVar49;
  uint uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  ForElementType<int> FVar57;
  longlong lVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  undefined4 uVar90;
  undefined1 in_XMM4 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar92;
  undefined4 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  double dVar102;
  double dVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  float fVar113;
  undefined1 auStackY_8e8 [32];
  FIdentityFunctor local_8a8 [4];
  float local_8a4;
  float local_8a0;
  longlong local_898;
  TArrayView<UE::Math::TTransform<double>_const_,int> *local_888;
  TArrayView<UE::Math::TTransform<double>_const_,int> *pTStack_880;
  TArrayView<UMirrorDataTable_const_*_const,int> *local_878;
  TArrayView<bool_const_,int> *local_868;
  double dStack_860;
  UPoseSearchInteractionAsset *local_858;
  UPoseSearchInteractionAsset *local_850;
  longlong local_848;
  TArrayView<UE::Math::TTransform<double>,int> *local_840;
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  ForElementType<float> local_818;
  int iStack_810;
  undefined4 uStack_80c;
  ForElementType<UE::Math::TTransform<double>_> local_808;
  int iStack_800;
  undefined4 uStack_7fc;
  ForElementType<float> local_7f8;
  int iStack_7f0;
  undefined4 uStack_7ec;
  TVector<double>_u_0 local_7e8;
  TVector<double>_u_0 local_7d0;
  TQuat<double> local_7b8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_798;
  TArrayView<float,int> local_788;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_778;
  TArrayView<float,int> local_768;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_758;
  TArrayView<float,int> local_748;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_738;
  TArrayView<int,int> local_728;
  double local_718;
  TArrayView<float,int> local_708;
  TArrayView<int,int> local_6f8;
  undefined1 local_6e8 [24];
  void *local_6d0;
  undefined1 local_6b8 [32];
  TQuat<double> local_698;
  TArrayView<int,int> local_678;
  TArrayView<int,int> local_668;
  TArrayView<float,int> local_658;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_648;
  TArrayView<float,int> local_638;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  TQuat<double> local_608;
  TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_5e8;
  TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_5c8;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_5a8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_408;
  FAnimationAssetSampler local_268;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  double dVar91;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_878 = param_4;
  local_868 = param_5;
  local_888 = param_2;
  local_840 = param_3;
  iVar34 = (**(code **)(this->_padding_ + 0x2c8))();
  if ((param_2->ArrayNum != iVar34) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActorRootBoneTransforms.Num() == GetNumRoles()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x100,L""), bVar33)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar34 = (**(code **)(this->_padding_ + 0x2c8))(this);
  if ((param_3->ArrayNum != iVar34) &&
     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                         ("FullAlignedActorRootBoneTransforms.Num() == GetNumRoles()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x101,L""), bVar33)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar34 = param_5->ArrayNum;
  if (((iVar34 != 0) && (iVar35 = (**(code **)(this->_padding_ + 0x2c8))(this), iVar34 != iVar35))
     && (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                            ("RelevantRoleIndexes.IsEmpty() || RelevantRoleIndexes.Num() == GetNumRoles()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                             ,0x102,L""), bVar33)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar34 = (this->Items).ArrayNum;
  lVar54 = (longlong)iVar34;
  local_8a4 = (float)iVar34;
  if (param_5->ArrayNum != 0) {
    pbVar44 = param_5->DataPtr;
    pbVar1 = pbVar44 + param_5->ArrayNum;
    local_8a4 = (float)0;
    for (; pbVar44 != pbVar1; pbVar44 = pbVar44 + 1) {
      iVar35 = (int)local_8a4 + 1;
      if (*pbVar44 == false) {
        iVar35 = (int)local_8a4;
      }
      local_8a4 = (float)iVar35;
    }
  }
  local_848 = lVar54;
  if ((int)local_8a4 < 2) {
    uVar47 = 0;
    if (0 < iVar34) {
      lVar46 = 0;
      do {
        uVar48 = 0;
        if ((int)uVar47 < param_2->ArrayNum) {
          uVar48 = ~uVar47 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar37 = param_2->DataPtr;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + lVar46);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + lVar46);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + lVar46);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + lVar46);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + lVar46);
        uVar20 = *puVar2;
        uVar21 = puVar2[1];
        puVar2 = (undefined8 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + lVar46);
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar48 = 0;
        if ((int)uVar47 < param_3->ArrayNum) {
          uVar48 = ~uVar47 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar37 = param_3->DataPtr;
        uVar47 = uVar47 + 1;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + lVar46);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + lVar46);
        *puVar2 = uVar14;
        puVar2[1] = uVar15;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + lVar46);
        *puVar2 = uVar16;
        puVar2[1] = uVar17;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + lVar46);
        *puVar2 = uVar18;
        puVar2[1] = uVar19;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + lVar46);
        *puVar2 = uVar20;
        puVar2[1] = uVar21;
        puVar2 = (undefined8 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + lVar46);
        *puVar2 = uVar22;
        puVar2[1] = uVar23;
        lVar46 = lVar46 + 0x60;
        lVar54 = lVar54 + -1;
      } while (lVar54 != 0);
    }
  }
  else {
    local_408.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
    local_408.ArrayNum = 0;
    local_408.ArrayMax = 4;
    TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
    SetNum(&local_408,iVar34,Default);
    pTVar31 = local_878;
    uVar47 = 0;
    if (0 < iVar34) {
      lVar46 = 0;
      lVar55 = 0;
      local_898 = 0;
      do {
        uVar50 = ~uVar47 >> 0x1f;
        uVar48 = 0;
        if ((int)uVar47 < (this->Items).ArrayNum) {
          uVar48 = uVar50;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->Items).AllocatorInstance.Data;
        UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler
                  (&local_268,*(UAnimationAsset **)(pFVar7 + local_898),
                   (TTransform<double> *)(pFVar7 + local_898 + 0x20),
                   &UE::Math::TVector<double>::ZeroVector,0x1e,true,true);
        pTVar37 = UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
                            (&local_268,&local_1b8,param_1);
        dVar10 = (pTVar37->Rotation).XY.m128d_f64[0];
        dVar91 = (pTVar37->Rotation).XY.m128d_f64[1];
        dVar84 = (pTVar37->Rotation).ZW.m128d_f64[0];
        dVar92 = (pTVar37->Rotation).ZW.m128d_f64[1];
        dVar67 = (pTVar37->Translation).XY.m128d_f64[0];
        dVar102 = (pTVar37->Translation).XY.m128d_f64[1];
        dVar106 = (pTVar37->Translation).ZW.m128d_f64[0];
        dVar24 = (pTVar37->Translation).ZW.m128d_f64[1];
        dVar25 = (pTVar37->Scale3D).XY.m128d_f64[0];
        dVar26 = (pTVar37->Scale3D).XY.m128d_f64[1];
        dVar27 = (pTVar37->Scale3D).ZW.m128d_f64[0];
        dVar28 = (pTVar37->Scale3D).ZW.m128d_f64[1];
        uVar48 = 0;
        if ((int)uVar47 < local_408.ArrayNum) {
          uVar48 = uVar50;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar45 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
        if (local_408.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          FVar45 = local_408.AllocatorInstance.SecondaryData;
        }
        *(double *)((longlong)FVar45 + lVar55) = dVar10;
        ((double *)((longlong)FVar45 + lVar55))[1] = dVar91;
        *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar55) = dVar84;
        *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar55 + 8) = dVar92;
        *(double *)((uchar *)((longlong)FVar45 + 0x20) + lVar55) = dVar67;
        *(double *)((uchar *)((longlong)FVar45 + 0x20) + lVar55 + 8) = dVar102;
        *(double *)((uchar *)((longlong)FVar45 + 0x30) + lVar55) = dVar106;
        *(double *)((uchar *)((longlong)FVar45 + 0x30) + lVar55 + 8) = dVar24;
        *(double *)((uchar *)((longlong)FVar45 + 0x40) + lVar55) = dVar25;
        *(double *)((uchar *)((longlong)FVar45 + 0x40) + lVar55 + 8) = dVar26;
        *(double *)((uchar *)((longlong)FVar45 + 0x50) + lVar55) = dVar27;
        *(double *)((uchar *)((longlong)FVar45 + 0x50) + lVar55 + 8) = dVar28;
        if ((-1 < (int)uVar47) && ((int)uVar47 < pTVar31->ArrayNum)) {
          if (((int)uVar47 < 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (pTVar31->DataPtr[lVar46] != (UMirrorDataTable *)0x0) {
            uVar48 = 0;
            if ((int)uVar47 < pTVar31->ArrayNum) {
              uVar48 = uVar50;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            UE::PoseSearch::FMirrorDataCache::FMirrorDataCache
                      ((FMirrorDataCache *)local_6e8,pTVar31->DataPtr[lVar46]);
            uVar48 = 0;
            if ((int)uVar47 < local_408.ArrayNum) {
              uVar48 = uVar50;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar45 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
            if (local_408.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Math::TTransform<double>_>)0x0) {
              FVar45 = local_408.AllocatorInstance.SecondaryData;
            }
            pTVar37 = UE::PoseSearch::FMirrorDataCache::MirrorTransform
                                ((FMirrorDataCache *)local_6e8,&local_158,
                                 (TTransform<double> *)
                                 ((longlong)(int)uVar47 * 0x60 + (longlong)FVar45));
            dVar10 = (pTVar37->Rotation).XY.m128d_f64[0];
            dVar91 = (pTVar37->Rotation).XY.m128d_f64[1];
            dVar84 = (pTVar37->Rotation).ZW.m128d_f64[0];
            dVar92 = (pTVar37->Rotation).ZW.m128d_f64[1];
            dVar67 = (pTVar37->Translation).XY.m128d_f64[0];
            dVar102 = (pTVar37->Translation).XY.m128d_f64[1];
            dVar106 = (pTVar37->Translation).ZW.m128d_f64[0];
            dVar24 = (pTVar37->Translation).ZW.m128d_f64[1];
            dVar25 = (pTVar37->Scale3D).XY.m128d_f64[0];
            dVar26 = (pTVar37->Scale3D).XY.m128d_f64[1];
            dVar27 = (pTVar37->Scale3D).ZW.m128d_f64[0];
            dVar28 = (pTVar37->Scale3D).ZW.m128d_f64[1];
            uVar48 = 0;
            if ((int)uVar47 < local_408.ArrayNum) {
              uVar48 = uVar50;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar45 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
            if (local_408.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Math::TTransform<double>_>)0x0) {
              FVar45 = local_408.AllocatorInstance.SecondaryData;
            }
            *(double *)((longlong)FVar45 + lVar55) = dVar10;
            ((double *)((longlong)FVar45 + lVar55))[1] = dVar91;
            *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar55) = dVar84;
            *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar55 + 8) = dVar92;
            *(double *)((uchar *)((longlong)FVar45 + 0x20) + lVar55) = dVar67;
            *(double *)((uchar *)((longlong)FVar45 + 0x20) + lVar55 + 8) = dVar102;
            *(double *)((uchar *)((longlong)FVar45 + 0x30) + lVar55) = dVar106;
            *(double *)((uchar *)((longlong)FVar45 + 0x30) + lVar55 + 8) = dVar24;
            *(double *)((uchar *)((longlong)FVar45 + 0x40) + lVar55) = dVar25;
            *(double *)((uchar *)((longlong)FVar45 + 0x40) + lVar55 + 8) = dVar26;
            *(double *)((uchar *)((longlong)FVar45 + 0x50) + lVar55) = dVar27;
            *(double *)((uchar *)((longlong)FVar45 + 0x50) + lVar55 + 8) = dVar28;
            if (local_6d0 != (void *)0x0) {
              FMemory::Free(local_6d0);
            }
            if ((void *)local_6e8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_6e8._8_8_);
            }
          }
        }
        UE::PoseSearch::FAnimationAssetSampler::~FAnimationAssetSampler(&local_268);
        uVar47 = uVar47 + 1;
        local_898 = local_898 + 0x80;
        lVar46 = lVar46 + 1;
        lVar55 = lVar55 + 0x60;
        param_5 = local_868;
      } while (lVar46 < lVar54);
    }
    local_5a8.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_5a8.ArrayNum = 0;
    local_5a8.ArrayMax = 4;
    local_5e8.AllocatorInstance.SecondaryData = (ForElementType<float>)0x0;
    local_5e8.ArrayNum = 0;
    local_5e8.ArrayMax = 4;
    local_5c8.AllocatorInstance.SecondaryData = (ForElementType<float>)0x0;
    local_5c8.ArrayNum = 0;
    local_5c8.ArrayMax = 4;
    TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_5a8,iVar34,Default);
    TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_5e8,iVar34,Default);
    TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&local_5c8,iVar34,Default);
    iVar34 = param_5->ArrayNum;
    uVar47 = 0;
    fVar98 = 0.0;
    fVar107 = 0.0;
    if (iVar34 == 0) {
      if (0 < lVar54) {
        lVar55 = 0;
        lVar46 = 0;
        do {
          uVar48 = 0;
          if ((int)uVar47 < local_5a8.ArrayNum) {
            uVar48 = ~uVar47 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar57 = (ForElementType<int>)&local_5a8;
          if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar57 = local_5a8.AllocatorInstance.SecondaryData;
          }
          *(uint *)((longlong)FVar57 + lVar55 * 4) = uVar47;
          uVar48 = 0;
          if ((int)uVar47 < (this->Items).ArrayNum) {
            uVar48 = ~uVar47 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar98 = fVar98 + *(float *)((this->Items).AllocatorInstance.Data + lVar46 + 0x14);
          uVar48 = 0;
          if ((int)uVar47 < (this->Items).ArrayNum) {
            uVar48 = ~uVar47 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar47 = uVar47 + 1;
          lVar55 = lVar55 + 1;
          fVar107 = fVar107 + *(float *)((this->Items).AllocatorInstance.Data + lVar46 + 0x10);
          lVar46 = lVar46 + 0x80;
        } while (lVar55 < lVar54);
        iVar34 = param_5->ArrayNum;
      }
    }
    else if (0 < lVar54) {
      lVar46 = 0;
      local_898 = 0;
      do {
        local_8a0 = (float)(~uVar47 >> 0x1f);
        fVar36 = 0.0;
        if ((int)uVar47 < local_5a8.ArrayNum) {
          fVar36 = local_8a0;
        }
        if ((fVar36 == 0.0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar57 = (ForElementType<int>)&local_5a8;
        if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar57 = local_5a8.AllocatorInstance.SecondaryData;
        }
        fVar36 = 0.0;
        if ((int)uVar47 < iVar34) {
          fVar36 = local_8a0;
        }
        *(uint *)((longlong)FVar57 + lVar46 * 4) = uVar47;
        if ((fVar36 == 0.0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (param_5->DataPtr[lVar46] != false) {
          uVar48 = 0;
          if ((int)uVar47 < (this->Items).ArrayNum) {
            uVar48 = ~uVar47 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar55 = local_898;
          fVar98 = fVar98 + *(float *)((this->Items).AllocatorInstance.Data + local_898 + 0x14);
          uVar48 = 0;
          if ((int)uVar47 < (this->Items).ArrayNum) {
            uVar48 = ~uVar47 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar34 = param_5->ArrayNum;
          fVar107 = fVar107 + *(float *)((this->Items).AllocatorInstance.Data + lVar55 + 0x10);
        }
        local_898 = local_898 + 0x80;
        uVar47 = uVar47 + 1;
        lVar46 = lVar46 + 1;
      } while (lVar46 < lVar54);
    }
    fVar113 = __real_3f800000;
    fVar36 = __real_38d1b717;
    uVar49 = 0;
    fVar101 = __real_3f800000 / (float)(int)local_8a4;
    uVar47 = 0;
    local_8a4 = fVar101;
    if (iVar34 == 0) {
      if (fVar98 <= __real_38d1b717) {
        uVar52 = uVar49;
        uVar51 = uVar49;
        if (0 < lVar54) {
          do {
            uVar50 = (uint)uVar52;
            uVar48 = uVar47;
            if ((int)uVar50 < local_5c8.ArrayNum) {
              uVar48 = ~uVar50 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar41 = (ForElementType<float>)&local_5c8;
            if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
              FVar41 = local_5c8.AllocatorInstance.SecondaryData;
            }
            *(float *)((longlong)FVar41 + uVar51 * 4) = fVar101;
            uVar51 = uVar51 + 1;
            uVar52 = (ulonglong)(uVar50 + 1);
          } while ((longlong)uVar51 < lVar54);
        }
      }
      else if (0 < lVar54) {
        fVar98 = __real_3f800000 / fVar98;
        uVar52 = uVar49;
        uVar51 = uVar49;
        uVar56 = uVar49;
        do {
          uVar50 = (uint)uVar52;
          uVar48 = 0;
          if ((int)uVar50 < (this->Items).ArrayNum) {
            uVar48 = ~uVar50 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar6 = *(float *)((this->Items).AllocatorInstance.Data + uVar51 + 0x14);
          uVar48 = 0;
          if ((int)uVar50 < local_5c8.ArrayNum) {
            uVar48 = ~uVar50 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar41 = (ForElementType<float>)&local_5c8;
          if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
            FVar41 = local_5c8.AllocatorInstance.SecondaryData;
          }
          uVar52 = (ulonglong)(uVar50 + 1);
          uVar51 = uVar51 + 0x80;
          *(float *)((longlong)FVar41 + uVar56 * 4) = fVar98 * fVar6;
          uVar56 = uVar56 + 1;
        } while ((longlong)uVar56 < lVar54);
      }
      if (fVar107 <= fVar36) {
        uVar52 = uVar49;
        if (0 < lVar54) {
          do {
            uVar50 = (uint)uVar49;
            uVar48 = uVar47;
            if ((int)uVar50 < local_5e8.ArrayNum) {
              uVar48 = ~uVar50 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar41 = (ForElementType<float>)&local_5e8;
            if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
              FVar41 = local_5e8.AllocatorInstance.SecondaryData;
            }
            uVar49 = (ulonglong)(uVar50 + 1);
            *(float *)((longlong)FVar41 + uVar52 * 4) = fVar101;
            uVar52 = uVar52 + 1;
          } while ((longlong)uVar52 < lVar54);
        }
      }
      else {
        FVar57 = (ForElementType<int>)&local_5a8;
        if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar57 = local_5a8.AllocatorInstance.SecondaryData;
        }
        local_858 = this;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l74::<lambda_1>_>_>
                  ((int *)FVar57,local_5a8.ArrayNum,local_8a8[0],(<lambda_1> *)&local_858);
        if (0 < lVar54) {
          uVar52 = uVar49;
          uVar51 = uVar49;
          do {
            uVar50 = (uint)uVar49;
            uVar48 = uVar47;
            if ((int)uVar50 < (this->Items).ArrayNum) {
              uVar48 = ~uVar50 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            fVar98 = *(float *)((this->Items).AllocatorInstance.Data + uVar52 + 0x10);
            uVar48 = uVar47;
            if ((int)uVar50 < local_5e8.ArrayNum) {
              uVar48 = ~uVar50 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FVar41 = (ForElementType<float>)&local_5e8;
            if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
              FVar41 = local_5e8.AllocatorInstance.SecondaryData;
            }
            uVar49 = (ulonglong)(uVar50 + 1);
            uVar52 = uVar52 + 0x80;
            *(float *)((longlong)FVar41 + uVar51 * 4) = (fVar113 / fVar107) * fVar98;
            uVar51 = uVar51 + 1;
          } while ((longlong)uVar51 < lVar54);
        }
      }
    }
    else {
      if (fVar98 <= __real_38d1b717) {
        uVar52 = uVar49;
        if (0 < lVar54) {
          do {
            uVar50 = (uint)uVar49;
            uVar53 = ~uVar50 >> 0x1f;
            uVar48 = uVar47;
            if ((int)uVar50 < param_5->ArrayNum) {
              uVar48 = uVar53;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (param_5->DataPtr[uVar52] == false) {
              uVar48 = uVar47;
              if ((int)uVar50 < local_5c8.ArrayNum) {
                uVar48 = uVar53;
              }
              if ((uVar48 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5c8;
              if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5c8.AllocatorInstance.SecondaryData;
              }
              *(undefined4 *)((longlong)FVar41 + uVar52 * 4) = 0;
            }
            else {
              uVar48 = uVar47;
              if ((int)uVar50 < local_5c8.ArrayNum) {
                uVar48 = uVar53;
              }
              if ((uVar48 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5c8;
              if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5c8.AllocatorInstance.SecondaryData;
              }
              *(float *)((longlong)FVar41 + uVar52 * 4) = fVar101;
            }
            uVar49 = (ulonglong)(uVar50 + 1);
            uVar52 = uVar52 + 1;
          } while ((longlong)uVar52 < lVar54);
        }
      }
      else {
        uVar52 = uVar49;
        uVar51 = uVar49;
        if (0 < lVar54) {
          do {
            uVar48 = (uint)uVar49;
            uVar50 = ~uVar48 >> 0x1f;
            uVar47 = 0;
            if ((int)uVar48 < param_5->ArrayNum) {
              uVar47 = uVar50;
            }
            if ((uVar47 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (param_5->DataPtr[uVar52] == false) {
              uVar47 = 0;
              if ((int)uVar48 < local_5c8.ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5c8;
              if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5c8.AllocatorInstance.SecondaryData;
              }
              *(undefined4 *)((longlong)FVar41 + uVar52 * 4) = 0;
            }
            else {
              uVar47 = 0;
              if ((int)uVar48 < (this->Items).ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              fVar6 = *(float *)((this->Items).AllocatorInstance.Data + uVar51 + 0x14);
              uVar47 = 0;
              if ((int)uVar48 < local_5c8.ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5c8;
              if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5c8.AllocatorInstance.SecondaryData;
              }
              *(float *)((longlong)FVar41 + uVar52 * 4) = fVar6 / fVar98;
            }
            uVar49 = (ulonglong)(uVar48 + 1);
            uVar52 = uVar52 + 1;
            uVar51 = uVar51 + 0x80;
          } while ((longlong)uVar52 < lVar54);
        }
      }
      uVar49 = 0;
      if (fVar107 <= fVar36) {
        uVar47 = 0;
        uVar52 = uVar49;
        if (0 < lVar54) {
          do {
            uVar50 = (uint)uVar49;
            uVar53 = ~uVar50 >> 0x1f;
            uVar48 = uVar47;
            if ((int)uVar50 < param_5->ArrayNum) {
              uVar48 = uVar53;
            }
            if ((uVar48 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (param_5->DataPtr[uVar52] == false) {
              uVar48 = uVar47;
              if ((int)uVar50 < local_5e8.ArrayNum) {
                uVar48 = uVar53;
              }
              if ((uVar48 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5e8;
              if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5e8.AllocatorInstance.SecondaryData;
              }
              *(undefined4 *)((longlong)FVar41 + uVar52 * 4) = 0;
            }
            else {
              uVar48 = uVar47;
              if ((int)uVar50 < local_5e8.ArrayNum) {
                uVar48 = uVar53;
              }
              if ((uVar48 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5e8;
              if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5e8.AllocatorInstance.SecondaryData;
              }
              *(float *)((longlong)FVar41 + uVar52 * 4) = fVar101;
            }
            uVar49 = (ulonglong)(uVar50 + 1);
            uVar52 = uVar52 + 1;
          } while ((longlong)uVar52 < lVar54);
        }
      }
      else {
        FVar57 = (ForElementType<int>)&local_5a8;
        if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar57 = local_5a8.AllocatorInstance.SecondaryData;
        }
        local_850 = this;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UPoseSearchInteractionAsset::CalculateWarpTransforms_::__l104::<lambda_2>_>_>
                  ((int *)FVar57,local_5a8.ArrayNum,local_8a8[0],(<lambda_2> *)&local_850);
        uVar52 = uVar49;
        uVar51 = uVar49;
        if (0 < lVar54) {
          do {
            uVar48 = (uint)uVar49;
            uVar50 = ~uVar48 >> 0x1f;
            uVar47 = 0;
            if ((int)uVar48 < param_5->ArrayNum) {
              uVar47 = uVar50;
            }
            if ((uVar47 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar33)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (param_5->DataPtr[uVar52] == false) {
              uVar47 = 0;
              if ((int)uVar48 < local_5e8.ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5e8;
              if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5e8.AllocatorInstance.SecondaryData;
              }
              *(undefined4 *)((longlong)FVar41 + uVar52 * 4) = 0;
            }
            else {
              uVar47 = 0;
              if ((int)uVar48 < (this->Items).ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              fVar98 = *(float *)((this->Items).AllocatorInstance.Data + uVar51 + 0x10);
              uVar47 = 0;
              if ((int)uVar48 < local_5e8.ArrayNum) {
                uVar47 = uVar50;
              }
              if ((uVar47 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar41 = (ForElementType<float>)&local_5e8;
              if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
                FVar41 = local_5e8.AllocatorInstance.SecondaryData;
              }
              *(float *)((longlong)FVar41 + uVar52 * 4) = fVar98 / fVar107;
            }
            uVar49 = (ulonglong)(uVar48 + 1);
            uVar52 = uVar52 + 1;
            uVar51 = uVar51 + 0x80;
          } while ((longlong)uVar52 < lVar54);
        }
      }
    }
    pTVar38 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_658,&local_5e8);
    pfVar29 = pTVar38->DataPtr;
    uVar12._0_4_ = pTVar38->ArrayNum;
    uVar12._4_4_ = *(undefined4 *)&pTVar38->field_0xc;
    pTVar39 = TArrayView<int,int>::
              TArrayView<int,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_668,&local_5a8);
    local_6f8.DataPtr = pTVar39->DataPtr;
    local_6f8.ArrayNum = pTVar39->ArrayNum;
    local_6f8._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
    local_708.DataPtr = pfVar29;
    local_708._8_8_ = uVar12;
    pTVar40 = TArrayView<UE::Math::TTransform<double>_const_,int>::
              TArrayView<UE::Math::TTransform<double>_const_,int><TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_648,&local_408);
    local_798.DataPtr = pTVar40->DataPtr;
    local_798.ArrayNum = pTVar40->ArrayNum;
    local_798._12_4_ = *(undefined4 *)&pTVar40->field_0xc;
    FindReferenceOrientation(this,&local_7b8,&local_798,&local_6f8,&local_708);
    pTVar38 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<float,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_638,&local_5e8);
    local_788.DataPtr = pTVar38->DataPtr;
    local_788.ArrayNum = pTVar38->ArrayNum;
    local_788._12_4_ = *(undefined4 *)&pTVar38->field_0xc;
    pTVar39 = TArrayView<int,int>::
              TArrayView<int,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_678,&local_5a8);
    pTVar40 = local_888;
    local_728.DataPtr = pTVar39->DataPtr;
    local_728.ArrayNum = pTVar39->ArrayNum;
    local_728._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
    local_778.DataPtr = local_888->DataPtr;
    local_778.ArrayNum = local_888->ArrayNum;
    local_778._12_4_ = *(undefined4 *)&local_888->field_0xc;
    FindReferenceOrientation(this,(TQuat<double> *)local_6b8,&local_778,&local_728,&local_788);
    iVar34 = local_5a8.ArrayNum;
    local_838._8_8_ = local_6b8._8_8_;
    local_838._0_8_ = local_6b8._0_8_;
    local_828 = local_6b8._16_16_;
    if (fVar36 < fVar107) {
      fVar98 = fVar101 - fVar113;
      FVar57 = (ForElementType<int>)&local_5a8;
      if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FVar57 = local_5a8.AllocatorInstance.SecondaryData;
      }
      FVar3 = (ForElementType<int>)((longlong)FVar57 + (longlong)local_5a8.ArrayNum * 4);
      local_898 = CONCAT44(local_898._4_4_,fVar98);
      fVar107 = __real_322bcc77;
      uVar47 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      while( true ) {
        if (local_5a8.ArrayNum != iVar34) {
          local_8a8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_8a8);
        }
        lVar54 = local_848;
        if (FVar57 == FVar3) break;
        uVar48 = *(uint *)FVar57;
        lVar54 = (longlong)(int)uVar48;
        uVar50 = 0;
        if ((int)uVar48 < (this->Items).ArrayNum) {
          uVar50 = ~uVar48 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar50 = 0;
        if ((int)uVar48 < local_5e8.ArrayNum) {
          uVar50 = ~uVar48 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar41 = (ForElementType<float>)&local_5e8;
        if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
          FVar41 = local_5e8.AllocatorInstance.SecondaryData;
        }
        if (fVar101 < *(float *)((longlong)FVar41 + lVar54 * 4)) {
          if (((float)((uint)fVar98 & uVar47) <= fVar107) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!FMath::IsNearlyEqual(NormalizedHomogeneousWeight, 1.f)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                                  ,0x1e5,L""), bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar47 = 0;
          if ((int)uVar48 < local_5e8.ArrayNum) {
            uVar47 = ~uVar48 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar41 = (ForElementType<float>)&local_5e8;
          if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
            FVar41 = local_5e8.AllocatorInstance.SecondaryData;
          }
          uVar47 = 0;
          if ((int)uVar48 < pTVar40->ArrayNum) {
            uVar47 = ~uVar48 >> 0x1f;
          }
          local_8a0 = (*(float *)((longlong)FVar41 + lVar54 * 4) - fVar101) / (fVar113 - fVar101);
          if ((uVar47 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar37 = pTVar40->DataPtr + lVar54;
          local_868 = (TArrayView<bool_const_,int> *)(pTVar37->Rotation).XY.m128d_f64[0];
          dStack_860 = (pTVar37->Rotation).XY.m128d_f64[1];
          p_Var5 = &pTVar40->DataPtr[lVar54].Rotation.ZW;
          local_888 = (TArrayView<UE::Math::TTransform<double>_const_,int> *)p_Var5->m128d_f64[0];
          pTStack_880 = (TArrayView<UE::Math::TTransform<double>_const_,int> *)p_Var5->m128d_f64[1];
          uVar47 = 0;
          if ((int)uVar48 < local_408.ArrayNum) {
            uVar47 = ~uVar48 >> 0x1f;
          }
          if ((uVar47 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar30 = pTStack_880;
          FVar45 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
          if (local_408.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TTransform<double>_>)0x0) {
            FVar45 = local_408.AllocatorInstance.SecondaryData;
          }
          pdVar4 = (double *)((longlong)FVar45 + lVar54 * 0x60);
          dVar102 = *pdVar4 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar106 = pdVar4[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar10 = *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar54 * 0x60) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar91 = *(double *)((uchar *)((longlong)FVar45 + 0x10) + lVar54 * 0x60 + 8) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar90 = (undefined4)((ulonglong)dVar91 >> 0x20);
          auVar99._8_4_ = SUB84(dVar91,0);
          auVar99._0_8_ = dVar10;
          auVar99._12_4_ = uVar90;
          dVar67 = auVar99._8_8_;
          auVar94._8_4_ = SUB84(dVar91,0);
          auVar94._0_8_ = dVar67;
          auVar94._12_4_ = uVar90;
          auVar97._8_4_ = SUB84(dVar10,0);
          auVar97._0_8_ = dVar10;
          auVar97._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          dVar84 = dVar102 * local_7b8.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   dVar67 * local_7b8.X +
                   local_7b8.Z * dVar106 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar10 * local_7b8.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar92 = dVar102 * local_7b8.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar94._8_8_ * local_7b8.Y +
                   local_7b8.W * dVar106 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar97._8_8_ * local_7b8.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar80._8_4_ = SUB84(dVar92,0);
          auVar80._0_8_ = dVar84;
          auVar80._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
          pTStack_880 = local_888;
          auVar59._8_4_ = (int)pTVar30;
          auVar59._0_8_ = pTVar30;
          auVar59._12_4_ = (int)((ulonglong)pTVar30 >> 0x20);
          dVar67 = dVar102 * local_7b8.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   local_7b8.Z * dVar67 +
                   dVar106 * local_7b8.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   dVar10 * local_7b8.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar10 = dVar102 * local_7b8.X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   local_7b8.W * dVar91 +
                   dVar106 * local_7b8.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar10 * local_7b8.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar85._8_4_ = SUB84(dVar10,0);
          auVar85._0_8_ = dVar67;
          auVar85._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar74._8_4_ = (int)local_868;
          auVar74._0_8_ = local_868;
          auVar74._12_4_ = (int)((ulonglong)local_868 >> 0x20);
          auVar68._8_4_ = SUB84(dStack_860,0);
          auVar68._0_8_ = dStack_860;
          auVar68._12_4_ = (int)((ulonglong)dStack_860 >> 0x20);
          dVar91 = auVar85._8_8_;
          auVar86._8_8_ = dVar67;
          auVar86._0_8_ = dVar91;
          local_698.X = (double)local_868 * dVar91 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                        (double)pTVar30 * dVar84 +
                        dStack_860 * dVar67 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        (double)local_888 * auVar80._8_8_ *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_698.Y = auVar74._8_8_ * dVar67 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                        auVar59._8_8_ * dVar92 +
                        auVar68._8_8_ * dVar10 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                        (double)local_888 * dVar84 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_698.Z = (double)local_868 * auVar80._8_8_ *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                        (double)pTVar30 * dVar67 +
                        dStack_860 * dVar84 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                        (double)local_888 * dVar91 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_698.W = (double)local_868 * dVar84 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                        (double)pTVar30 * dVar10 +
                        dStack_860 * dVar92 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                        (double)local_888 * dVar67 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          pTVar42 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_608,(TQuat<double> *)local_838,&local_698,(double)local_8a0);
          dVar10 = pTVar42->X;
          dVar91 = pTVar42->Y;
          dVar84 = pTVar42->Z;
          dVar92 = pTVar42->W;
          dVar67 = dVar10 * dVar10 + dVar84 * dVar84;
          dVar102 = dVar91 * dVar91 + dVar92 * dVar92;
          local_718 = __real_3e45798ee0000000;
          auVar60._8_4_ = SUB84(dVar102,0);
          auVar60._0_8_ = dVar67;
          auVar60._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
          auVar61._0_8_ = auVar60._8_8_ + dVar67;
          auVar61._8_8_ = dVar67 + dVar102;
          in_XMM4 = sqrtpd(auVar86,auVar61);
          uVar51 = -(ulonglong)(__real_3e45798ee0000000 <= auVar61._0_8_);
          uVar52 = -(ulonglong)(__real_3e45798ee0000000 <= auVar61._8_8_);
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
          uVar47 = (uint)(uVar51 >> 0x20);
          uVar48 = (uint)(uVar52 >> 0x20);
          auVar95._0_8_ = uVar51 & (ulonglong)(auVar94._0_8_ * dVar10);
          uVar49 = uVar52 & (ulonglong)(auVar94._8_8_ * dVar91);
          auVar95._8_4_ = (undefined4)uVar49;
          auVar95._12_4_ = (undefined4)(uVar49 >> 0x20);
          auVar69._0_4_ =
               ~(uint)uVar51 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar69._4_4_ =
               ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar69._8_4_ =
               ~(uint)uVar52 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar69._12_4_ =
               ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_838 = auVar95 | auVar69;
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
          auVar81._0_4_ =
               ~(uint)uVar51 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar81._4_4_ =
               ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar81._8_4_ =
               ~(uint)uVar52 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar81._12_4_ =
               ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar70._0_8_ = (ulonglong)(auVar94._0_8_ * dVar84) & uVar51;
          uVar52 = (ulonglong)(auVar94._8_8_ * dVar92) & uVar52;
          auVar70._8_4_ = (undefined4)uVar52;
          auVar70._12_4_ = (undefined4)(uVar52 >> 0x20);
          local_828 = auVar81 | auVar70;
          fVar107 = __real_322bcc77;
          fVar113 = __real_3f800000;
          fVar98 = (float)local_898;
          fVar101 = local_8a4;
          uVar47 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          local_628 = local_838;
          local_618 = local_828;
        }
        FVar57 = (ForElementType<int>)((longlong)FVar57 + 4);
      }
    }
    iVar34 = local_5c8.ArrayNum;
    local_818 = (ForElementType<float>)&local_5c8;
    if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
      local_818 = local_5c8.AllocatorInstance.SecondaryData;
    }
    if ((local_5c8.ArrayNum < 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar33)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar35 = local_408.ArrayNum;
    iStack_810 = iVar34;
    local_808 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
    if (local_408.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      local_808 = local_408.AllocatorInstance.SecondaryData;
    }
    if ((local_408.ArrayNum < 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar33)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_768._12_4_ = uStack_80c;
    local_768.ArrayNum = iStack_810;
    iStack_800 = iVar35;
    local_758._12_4_ = uStack_7fc;
    local_758.ArrayNum = iVar35;
    local_758.DataPtr = (TTransform<double> *)local_808;
    local_768.DataPtr = (float *)local_818;
    FindReferencePosition(this,(TVector<double> *)&local_7d0._s_0,&local_758,&local_768);
    iStack_7f0 = local_5c8.ArrayNum;
    local_7f8 = (ForElementType<float>)&local_5c8;
    if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
      local_7f8 = local_5c8.AllocatorInstance.SecondaryData;
    }
    if ((local_5c8.ArrayNum < 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar33)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_738.DataPtr = pTVar40->DataPtr;
    local_738.ArrayNum = pTVar40->ArrayNum;
    local_738._12_4_ = *(undefined4 *)&pTVar40->field_0xc;
    local_748._12_4_ = uStack_7ec;
    local_748.ArrayNum = iStack_7f0;
    local_748.DataPtr = (float *)local_7f8;
    pTVar43 = FindReferencePosition(this,(TVector<double> *)&local_7e8._s_0,&local_738,&local_748);
    pTVar32 = local_840;
    local_468.Rotation.XY.m128d_f64[0] = (double)local_838._0_8_;
    local_468.Rotation.XY.m128d_f64[1] = (double)local_838._8_8_;
    local_468.Translation.XY.m128d_f64[0] = local_7e8._s_0.X;
    local_468.Translation.XY.m128d_f64[1] = local_7e8._s_0.Y;
    local_468.Rotation.ZW.m128d_f64[0] = (double)local_828._0_8_;
    local_468.Rotation.ZW.m128d_f64[1] = (double)local_828._8_8_;
    auVar75._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          __xmm_00000000000000003ff0000000000000._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          (uint)__xmm_00000000000000003ff0000000000000);
    auVar75._8_4_ = _UNK_15061cc88 & __xmm_00000000000000003ff0000000000000._8_4_;
    auVar75._12_4_ = _UNK_15061cc8c & __xmm_00000000000000003ff0000000000000._12_4_;
    local_468.Translation.ZW.m128d_f64[0] = local_7e8._s_0.Z;
    local_468.Translation.ZW.m128d_f64[1] = 0.0;
    auVar71._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar75._8_8_);
    auVar71._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar75._0_8_);
    uVar47 = movmskpd((int)this,auVar71);
    auVar76._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          __xmm_3ff00000000000003ff0000000000000._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          (uint)__xmm_3ff00000000000003ff0000000000000);
    auVar76._8_4_ = _UNK_15061cc88 & __xmm_3ff00000000000003ff0000000000000._8_4_;
    auVar76._12_4_ = _UNK_15061cc8c & __xmm_3ff00000000000003ff0000000000000._12_4_;
    local_468.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_468.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    auVar62._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar76._8_8_);
    auVar62._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar76._0_8_);
    iVar34 = movmskpd((int)pTVar43,auVar62);
    local_468.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_468.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    if ((uVar47 & 0x3fffffff) == 0 && iVar34 == 0) {
      local_588.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_588.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_588.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_588.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_588.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_588.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      auVar11._4_8_ = in_XMM4._8_8_;
      auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar87._0_8_ = auVar11._0_8_ << 0x20;
      auVar87._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar87._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar88._8_8_ = auVar87._8_8_;
      auVar88._0_8_ = (double)__xmm_00000000000000003ff0000000000000;
      local_7b8.X = local_7b8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_7b8.Y = local_7b8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar111 = SUB84(local_7b8.Y,0);
      uVar112 = (undefined4)((ulonglong)local_7b8.Y >> 0x20);
      local_7b8.Z = local_7b8.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_7b8.W = local_7b8.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar109 = SUB84(local_7b8.W,0);
      uVar110 = (undefined4)((ulonglong)local_7b8.W >> 0x20);
      lVar46 = -(ulonglong)
                ((double)CONCAT44(__xmm_00000000000000003ff0000000000000._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)__xmm_00000000000000003ff0000000000000 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      (undefined1  [16])___xmm_3ff00000000000003ff0000000000000);
      lVar55 = -(ulonglong)
                ((double)CONCAT44(__xmm_3ff00000000000003ff0000000000000._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)__xmm_3ff00000000000003ff0000000000000 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar58 = -(ulonglong)
                ((double)CONCAT44(__xmm_3ff00000000000003ff0000000000000._12_4_ & _UNK_15061cc8c,
                                  __xmm_3ff00000000000003ff0000000000000._8_4_ & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_588.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar55 & auVar94._0_4_;
      local_588.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar55 >> 0x20) & auVar94._4_4_;
      local_588.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar58 & auVar94._8_4_;
      local_588.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar58 >> 0x20) & auVar94._12_4_;
      auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar88);
      dVar10 = local_7d0._s_0.X *
               (double)CONCAT44(local_588.Scale3D.XY.m128d_f64[0]._4_4_,
                                local_588.Scale3D.XY.m128d_f64[0]._0_4_);
      dVar91 = local_7d0._s_0.Y *
               (double)CONCAT44(local_588.Scale3D.XY.m128d_f64[1]._4_4_,
                                local_588.Scale3D.XY.m128d_f64[1]._0_4_);
      uVar90 = SUB84(dVar91,0);
      uVar93 = (undefined4)((ulonglong)dVar91 >> 0x20);
      auVar77._8_4_ = uVar111;
      auVar77._0_8_ = local_7b8.X;
      auVar77._12_4_ = uVar112;
      local_588.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar46 >> 0x20) & auVar94._4_4_,
                            ~(uint)lVar46 & auVar94._0_4_);
      auVar103._8_4_ = uVar90;
      auVar103._0_8_ = dVar10;
      auVar103._12_4_ = uVar93;
      auVar63._8_4_ = uVar90;
      auVar63._0_8_ = dVar10;
      auVar63._12_4_ = uVar93;
      auVar96._8_4_ = uVar111;
      auVar96._0_8_ = local_7b8.X;
      auVar96._12_4_ = uVar112;
      auVar108._0_8_ = local_588.Scale3D.ZW.m128d_f64[0] * local_7d0._s_0.Z;
      auVar108._8_8_ = 0;
      auVar9._8_4_ = uVar109;
      auVar9._0_8_ = local_7b8.Z;
      auVar9._12_4_ = uVar110;
      auVar97 = blendpd(auVar96,auVar9,2);
      auVar72._8_4_ = uVar90;
      auVar72._0_8_ = dVar10;
      auVar72._12_4_ = uVar93;
      auVar94 = blendpd(auVar72,auVar108,2);
      auVar104._0_8_ = auVar103._8_8_ * local_7b8.X - dVar10 * auVar77._8_8_;
      auVar104._8_8_ = auVar108._0_8_ * local_7b8.Y - auVar63._8_8_ * local_7b8.Z;
      auVar89._8_4_ = SUB84(auVar104._8_8_,0);
      auVar89._0_8_ = auVar104._0_8_;
      auVar89._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
      auVar100._8_4_ = uVar109;
      auVar100._0_8_ = local_7b8.Z;
      auVar100._12_4_ = uVar110;
      auVar73._0_8_ = auVar94._0_8_ * local_7b8.Z - auVar97._0_8_ * auVar108._0_8_;
      auVar73._8_8_ = auVar94._8_8_ * local_7b8.W - auVar97._8_8_ * 0.0;
      dVar84 = auVar89._8_8_ + auVar89._8_8_;
      dVar92 = auVar73._0_8_ + auVar73._0_8_;
      auVar94 = blendpd(auVar104,auVar73,2);
      auVar105._0_8_ = auVar94._0_8_ + auVar94._0_8_;
      auVar105._8_8_ = auVar94._8_8_ + auVar94._8_8_;
      uVar90 = SUB84(dVar92,0);
      auVar82._8_4_ = uVar90;
      auVar82._0_8_ = dVar84;
      uVar93 = (undefined4)((ulonglong)dVar92 >> 0x20);
      auVar82._12_4_ = uVar93;
      auVar64._8_4_ = uVar90;
      auVar64._0_8_ = dVar84;
      auVar64._12_4_ = uVar93;
      auVar78._8_4_ = uVar90;
      auVar78._0_8_ = dVar84;
      auVar78._12_4_ = uVar93;
      auVar94 = blendpd(auVar78,auVar105,2);
      auVar83._0_8_ = auVar82._8_8_ * local_7b8.X - dVar84 * auVar77._8_8_;
      auVar83._8_8_ = auVar105._0_8_ * local_7b8.Y - auVar64._8_8_ * local_7b8.Z;
      auVar65._8_4_ = SUB84(auVar105._8_8_,0);
      auVar65._0_8_ = auVar105._0_8_;
      auVar65._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
      auVar79._0_8_ = auVar94._0_8_ * local_7b8.Z - auVar105._0_8_ * auVar97._0_8_;
      auVar79._8_8_ = auVar94._8_8_ * local_7b8.W - auVar65._8_8_ * auVar97._8_8_;
      auVar66._8_4_ = SUB84(auVar83._8_8_,0);
      auVar66._0_8_ = auVar83._0_8_;
      auVar66._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
      auVar94 = blendpd(auVar83,auVar79,2);
      local_588.Rotation.XY.m128d_f64[1]._0_4_ = uVar111;
      local_588.Rotation.XY.m128d_f64[0] = local_7b8.X;
      local_588.Rotation.XY.m128d_f64[1]._4_4_ = uVar112;
      local_588.Translation.ZW.m128d_f64[1] = 0.0;
      local_588.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar105._0_8_ * auVar100._8_8_ + auVar108._0_8_ + auVar94._0_8_);
      local_588.Rotation.ZW.m128d_f64[1]._0_4_ = uVar109;
      local_588.Rotation.ZW.m128d_f64[0] = local_7b8.Z;
      local_588.Rotation.ZW.m128d_f64[1]._4_4_ = uVar110;
      local_588.Translation.XY.m128d_f64[1] = 0.0 - (dVar92 * local_7b8.W + dVar91 + auVar79._0_8_);
      local_588.Translation.XY.m128d_f64[0] =
           0.0 - (dVar84 * auVar100._8_8_ + dVar10 + auVar66._8_8_);
      local_588.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    uVar47 = 0;
    if (0 < lVar54) {
      lVar46 = 0;
      do {
        uVar48 = 0;
        if ((int)uVar47 < local_408.ArrayNum) {
          uVar48 = ~uVar47 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_4c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_4c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        FVar45 = (ForElementType<UE::Math::TTransform<double>_>)&local_408;
        if (local_408.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          FVar45 = local_408.AllocatorInstance.SecondaryData;
        }
        local_4c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_4c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_4c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_4c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_4c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_4c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_4c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_4c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_4c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_4c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_4c8,
                   (TTransform<double> *)((longlong)(int)uVar47 * 0x60 + (longlong)FVar45),
                   &local_588);
        local_528.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_528.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_528.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_528.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_528.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_528.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_528.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_528.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_528.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_528.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_528.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_528.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_528,&local_4c8,&local_468);
        dVar28 = local_528.Scale3D.ZW.m128d_f64[1];
        dVar27 = local_528.Scale3D.ZW.m128d_f64[0];
        dVar26 = local_528.Scale3D.XY.m128d_f64[1];
        dVar25 = local_528.Scale3D.XY.m128d_f64[0];
        dVar24 = local_528.Translation.ZW.m128d_f64[1];
        dVar106 = local_528.Translation.ZW.m128d_f64[0];
        dVar102 = local_528.Translation.XY.m128d_f64[1];
        dVar67 = local_528.Translation.XY.m128d_f64[0];
        dVar92 = local_528.Rotation.ZW.m128d_f64[1];
        dVar84 = local_528.Rotation.ZW.m128d_f64[0];
        dVar91 = local_528.Rotation.XY.m128d_f64[1];
        dVar10 = local_528.Rotation.XY.m128d_f64[0];
        uVar48 = 0;
        if ((int)uVar47 < pTVar32->ArrayNum) {
          uVar48 = ~uVar47 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar33)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar37 = pTVar32->DataPtr;
        uVar47 = uVar47 + 1;
        pdVar4 = (double *)((longlong)(pTVar37->Rotation).XY.m128d_f64 + lVar46);
        *pdVar4 = dVar10;
        pdVar4[1] = dVar91;
        pdVar4 = (double *)((longlong)(pTVar37->Rotation).ZW.m128d_f64 + lVar46);
        *pdVar4 = dVar84;
        pdVar4[1] = dVar92;
        pdVar4 = (double *)((longlong)(pTVar37->Translation).XY.m128d_f64 + lVar46);
        *pdVar4 = dVar67;
        pdVar4[1] = dVar102;
        pdVar4 = (double *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + lVar46);
        *pdVar4 = dVar106;
        pdVar4[1] = dVar24;
        pdVar4 = (double *)((longlong)(pTVar37->Scale3D).XY.m128d_f64 + lVar46);
        *pdVar4 = dVar25;
        pdVar4[1] = dVar26;
        pdVar4 = (double *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + lVar46);
        *pdVar4 = dVar27;
        pdVar4[1] = dVar28;
        lVar46 = lVar46 + 0x60;
        lVar54 = lVar54 + -1;
      } while (lVar54 != 0);
    }
    if (local_5c8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_5c8.AllocatorInstance.SecondaryData);
    }
    if (local_5e8.AllocatorInstance.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_5e8.AllocatorInstance.SecondaryData);
    }
    if (local_5a8.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_5a8.AllocatorInstance.SecondaryData);
    }
    if (local_408.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FMemory::Free((void *)local_408.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FindReferenceOrientation @ 14a8f8320

TQuat<double> * __thiscall
UPoseSearchInteractionAsset::FindReferenceOrientation
          (UPoseSearchInteractionAsset *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,TArrayView<int,int> *param_2,
          TArrayView<float,int> *param_3)

{
  float fVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TQuat<double> *pTVar9;
  TQuat<double> *pTVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_c8;
  TArrayView<int,int> local_b8;
  TQuat<double> local_a8;
  TQuat<double> local_88;
  TQuat<double> local_68 [2];
  
  local_b8.DataPtr = param_2->DataPtr;
  local_b8.ArrayNum = param_2->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = this->WarpingBankingWeight;
  if (__real_38d1b717 <= fVar1) {
    if (fVar1 <= __real_3f7ff972) {
      local_a8.X = (double)param_3->DataPtr;
      local_a8.Y = *(double *)&param_3->ArrayNum;
      local_c8.DataPtr = param_1->DataPtr;
      local_c8.ArrayNum = param_1->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
      pTVar9 = FindReferenceOrientationFullBanking
                         (this,&local_88,&local_c8,&local_b8,(TArrayView<float,int> *)&local_a8);
      local_a8.X = (double)param_3->DataPtr;
      local_a8.Y = *(double *)&param_3->ArrayNum;
      local_b8.DataPtr = param_2->DataPtr;
      local_b8.ArrayNum = param_2->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_c8.DataPtr = param_1->DataPtr;
      local_c8.ArrayNum = param_1->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
      pTVar10 = FindReferenceOrientationNoBanking
                          (this,local_68,&local_c8,&local_b8,(TArrayView<float,int> *)&local_a8);
      pTVar9 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_a8,pTVar10,pTVar9,(double)fVar1);
      dVar8 = __real_3e45798ee0000000;
      dVar2 = pTVar9->Y;
      __return_storage_ptr__->X = pTVar9->X;
      __return_storage_ptr__->Y = dVar2;
      dVar4 = pTVar9->Z;
      dVar5 = pTVar9->W;
      __return_storage_ptr__->Z = dVar4;
      __return_storage_ptr__->W = dVar5;
      dVar6 = __return_storage_ptr__->X;
      dVar7 = __return_storage_ptr__->Y;
      dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
      dVar15 = dVar5 * dVar5 + dVar7 * dVar7;
      dVar2 = dVar15 + dVar13;
      dVar13 = dVar13 + dVar15;
      auVar17._8_4_ = SUB84(dVar13,0);
      auVar17._0_8_ = dVar2;
      auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar17 = sqrtpd(in_XMM4,auVar17);
      uVar11 = -(ulonglong)(dVar8 <= dVar2);
      uVar12 = -(ulonglong)(dVar8 <= dVar13);
      uVar20 = (uint)(uVar11 >> 0x20);
      uVar21 = (uint)(uVar12 >> 0x20);
      auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
      auVar19._0_8_ = uVar11 & (ulonglong)(auVar18._0_8_ * dVar6);
      uVar3 = uVar12 & (ulonglong)(auVar18._8_8_ * dVar7);
      auVar19._8_4_ = (undefined4)uVar3;
      auVar19._12_4_ = (undefined4)(uVar3 >> 0x20);
      auVar18._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar18._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar18._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar18._12_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
      auVar16._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar16._4_4_ =
           ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar16._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar16._12_4_ =
           ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      __return_storage_ptr__->X = (double)SUB168(auVar19 | auVar18,0);
      __return_storage_ptr__->Y = (double)SUB168(auVar19 | auVar18,8);
      auVar14._0_8_ = (ulonglong)(auVar17._0_8_ * dVar4) & uVar11;
      uVar12 = (ulonglong)(auVar17._8_8_ * dVar5) & uVar12;
      auVar14._8_4_ = (undefined4)uVar12;
      auVar14._12_4_ = (undefined4)(uVar12 >> 0x20);
      __return_storage_ptr__->Z = (double)SUB168(auVar16 | auVar14,0);
      __return_storage_ptr__->W = (double)SUB168(auVar16 | auVar14,8);
    }
    else {
      local_a8.X = (double)param_3->DataPtr;
      local_a8.Y = *(double *)&param_3->ArrayNum;
      local_c8.DataPtr = param_1->DataPtr;
      local_c8.ArrayNum = param_1->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
      FindReferenceOrientationFullBanking
                (this,__return_storage_ptr__,&local_c8,&local_b8,(TArrayView<float,int> *)&local_a8)
      ;
    }
  }
  else {
    local_c8.DataPtr = (TTransform<double> *)param_3->DataPtr;
    local_c8.ArrayNum = param_3->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_a8.X = (double)param_1->DataPtr;
    local_a8.Y = *(double *)&param_1->ArrayNum;
    FindReferenceOrientationNoBanking
              (this,__return_storage_ptr__,
               (TArrayView<UE::Math::TTransform<double>_const_,int> *)&local_a8,&local_b8,
               (TArrayView<float,int> *)&local_c8);
  }
  return __return_storage_ptr__;
}

// FindReferenceOrientationFullBanking @ 14a8f8520

/* WARNING: Type propagation algorithm not settling */

TQuat<double> * __thiscall
UPoseSearchInteractionAsset::FindReferenceOrientationFullBanking
          (UPoseSearchInteractionAsset *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,TArrayView<int,int> *param_2,
          TArrayView<float,int> *param_3)

{
  VectorRegister4Double *pVVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TQuat<double> *pTVar7;
  int *piVar8;
  TTransform<double> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TVector<double>_u_0 local_b0;
  TArrayView<float,int> local_98;
  TArrayView<int,int> local_88;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_78 [5];
  
  iVar2 = (this->Items).ArrayNum;
  if ((iVar2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemsNum > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0x83,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TQuat<double> *)(*pcVar3)();
    return pTVar7;
  }
  if ((iVar2 != param_1->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemsNum == Transforms.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TQuat<double> *)(*pcVar3)();
    return pTVar7;
  }
  if ((iVar2 != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemsNum == SortedByWarpingWeightRotationItemIndex.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0x85,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TQuat<double> *)(*pcVar3)();
    return pTVar7;
  }
  if ((iVar2 != param_3->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemsNum == NormalizedWarpingWeightRotation.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0x86,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TQuat<double> *)(*pcVar3)();
    return pTVar7;
  }
  if (1 < iVar2) {
    piVar8 = TArrayView<int,int>::operator[](param_2,0);
    pTVar9 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,*piVar8);
    uVar11 = 1;
    local_c8 = (pTVar9->Translation).XY.m128d_f64[0];
    dStack_c0 = (pTVar9->Translation).XY.m128d_f64[1];
    local_b8 = (pTVar9->Translation).ZW.m128d_f64[0];
    if (1 < (longlong)iVar2 + -1) {
      lVar10 = 1;
      do {
        uVar12 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TQuat<double> *)(*pcVar3)();
          return pTVar7;
        }
        uVar12 = param_2->DataPtr[lVar10];
        uVar6 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TQuat<double> *)(*pcVar3)();
          return pTVar7;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 1;
        pVVar1 = &param_1->DataPtr[(int)uVar12].Translation;
        local_c8 = local_c8 + (pVVar1->XY).m128d_f64[0];
        dStack_c0 = dStack_c0 + (pVVar1->XY).m128d_f64[1];
        local_b8 = local_b8 + param_1->DataPtr[(int)uVar12].Translation.ZW.m128d_f64[0];
      } while (lVar10 < (longlong)iVar2 + -1);
    }
    dVar4 = __real_3ff0000000000000 / (double)(iVar2 + -1);
    piVar8 = TArrayView<int,int>::operator[](param_2,iVar2 + -1);
    pTVar9 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_1,*piVar8);
    local_b0._s_0.X = dVar4 * local_c8 - (pTVar9->Translation).XY.m128d_f64[0];
    local_b0._s_0.Y = dVar4 * dStack_c0 - (pTVar9->Translation).XY.m128d_f64[1];
    local_b0._s_0.Z = dVar4 * local_b8 - (pTVar9->Translation).ZW.m128d_f64[0];
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)local_b0._s_0.X >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_b0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
        || (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)local_b0._s_0.Y >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_b0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                            ))) ||
       (uVar11 = SUB84(local_b0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar12 = (uint)((ulonglong)local_b0._s_0.Z >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
       (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000)) {
      UE::Math::TVector<double>::ToOrientationQuat
                ((TVector<double> *)&local_b0._s_0,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  local_98.DataPtr = param_3->DataPtr;
  local_98.ArrayNum = param_3->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_88.DataPtr = param_2->DataPtr;
  local_88.ArrayNum = param_2->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_78[0].DataPtr = param_1->DataPtr;
  local_78[0].ArrayNum = param_1->ArrayNum;
  local_78[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FindReferenceOrientationNoBanking(this,__return_storage_ptr__,local_78,&local_88,&local_98);
  return __return_storage_ptr__;
}

// FindReferenceOrientationNoBanking @ 14a8f8890

TQuat<double> * __thiscall
UPoseSearchInteractionAsset::FindReferenceOrientationNoBanking
          (UPoseSearchInteractionAsset *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,TArrayView<int,int> *param_2,
          TArrayView<float,int> *param_3)

{
  uint *puVar1;
  TTransform<double> *pTVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  VectorRegister4Double *pVVar14;
  bool bVar15;
  TQuat<double> *pTVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  
  if (((this->Items).ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Items.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x6f,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar16 = (TQuat<double> *)(*pcVar4)();
    return pTVar16;
  }
  if (((this->Items).ArrayNum != param_1->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Items.Num() == Transforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x70,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar16 = (TQuat<double> *)(*pcVar4)();
    return pTVar16;
  }
  if (((this->Items).ArrayNum != param_2->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Items.Num() == SortedByWarpingWeightRotationItemIndex.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x71,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar16 = (TQuat<double> *)(*pcVar4)();
    return pTVar16;
  }
  if (((this->Items).ArrayNum != param_3->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Items.Num() == NormalizedWarpingWeightRotation.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                          ,0x72,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar16 = (TQuat<double> *)(*pcVar4)();
    return pTVar16;
  }
  puVar17 = (uint *)param_2->DataPtr;
  dVar11 = 0.0;
  dVar12 = 0.0;
  iVar3 = param_2->ArrayNum;
  dVar9 = 0.0;
  dVar10 = 0.0;
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  puVar1 = puVar17 + iVar3;
  while( true ) {
    if (puVar17 == puVar1) {
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar21._8_4_ = SUB84(dVar12,0);
      auVar21._0_8_ = dVar11;
      auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar20 = dVar11 * dVar11 + dVar9 * dVar9;
      dVar24 = auVar21._8_8_ * dVar12 + dVar10 * dVar10;
      dVar8 = dVar24 + dVar20;
      dVar20 = dVar20 + dVar24;
      auVar7._8_4_ = SUB84(dVar20,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      auVar26 = sqrtpd(in_XMM4,auVar7);
      uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar8);
      uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
      uVar29 = (uint)(uVar18 >> 0x20);
      uVar30 = (uint)(uVar19 >> 0x20);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
      auVar22._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar22._4_4_ =
           ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar22._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar22._12_4_ =
           ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar28._0_8_ = uVar18 & (ulonglong)(auVar27._0_8_ * dVar11);
      uVar13 = uVar19 & (ulonglong)(auVar27._8_8_ * dVar12);
      auVar28._8_4_ = (undefined4)uVar13;
      auVar28._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
      __return_storage_ptr__->X = (double)SUB168(auVar28 | auVar22,0);
      __return_storage_ptr__->Y = (double)SUB168(auVar28 | auVar22,8);
      auVar23._0_8_ = (ulonglong)(auVar26._0_8_ * dVar9) & uVar18;
      uVar13 = (ulonglong)(auVar26._8_8_ * dVar10) & uVar19;
      auVar23._8_4_ = (undefined4)uVar13;
      auVar23._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar25._0_4_ = ~(uint)uVar18 & SUB84((double)fVar5,0);
      auVar25._4_4_ = ~uVar29 & (uint)((ulonglong)(double)fVar5 >> 0x20);
      auVar25._8_4_ = ~(uint)uVar19 & SUB84((double)fVar6,0);
      auVar25._12_4_ = ~uVar30 & (uint)((ulonglong)(double)fVar6 >> 0x20);
      __return_storage_ptr__->Z = (double)SUB168(auVar25 | auVar23,0);
      __return_storage_ptr__->W = (double)SUB168(auVar25 | auVar23,8);
      return __return_storage_ptr__;
    }
    uVar29 = *puVar17;
    uVar30 = 0;
    if ((int)uVar29 < param_1->ArrayNum) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) break;
    pTVar2 = param_1->DataPtr + (int)uVar29;
    dVar9 = (pTVar2->Rotation).XY.m128d_f64[0];
    dVar10 = (pTVar2->Rotation).XY.m128d_f64[1];
    pVVar14 = &param_1->DataPtr[(int)uVar29].Rotation;
    dVar8 = (pVVar14->ZW).m128d_f64[0];
    dVar20 = (pVVar14->ZW).m128d_f64[1];
    uVar30 = 0;
    if ((int)uVar29 < param_3->ArrayNum) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TQuat<double> *)(*pcVar4)();
      return pTVar16;
    }
    puVar17 = puVar17 + 1;
    dVar24 = (double)param_3->DataPtr[(int)uVar29];
    dVar11 = dVar9 * dVar24 + __return_storage_ptr__->X;
    dVar12 = dVar10 * dVar24 + __return_storage_ptr__->Y;
    dVar9 = dVar8 * dVar24 + __return_storage_ptr__->Z;
    dVar10 = dVar20 * dVar24 + __return_storage_ptr__->W;
    auVar27._8_4_ = SUB84(dVar12,0);
    auVar27._0_8_ = dVar11;
    auVar27._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    __return_storage_ptr__->X = dVar11;
    __return_storage_ptr__->Y = (double)auVar27._8_8_;
    auVar26._8_4_ = SUB84(dVar10,0);
    auVar26._0_8_ = dVar9;
    auVar26._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    __return_storage_ptr__->Z = dVar9;
    __return_storage_ptr__->W = (double)auVar26._8_8_;
  }
  pcVar4 = (code *)swi(3);
  pTVar16 = (TQuat<double> *)(*pcVar4)();
  return pTVar16;
}

// FindReferencePosition @ 14a8f8b50

TVector<double> * __thiscall
UPoseSearchInteractionAsset::FindReferencePosition
          (UPoseSearchInteractionAsset *this,TVector<double> *__return_storage_ptr__,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_1,
          TArrayView<float,int> *param_2)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar3 = (this->Items).ArrayNum;
  if ((iVar3 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemsNum > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0xb3,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TVector<double> *)(*pcVar4)();
    return pTVar11;
  }
  if ((param_1->ArrayNum != iVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Transforms.Num() == ItemsNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0xb4,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TVector<double> *)(*pcVar4)();
    return pTVar11;
  }
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Transforms.Num() == NormalizedWarpingWeightTranslation.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionAsset.cpp"
                         ,0xb5,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TVector<double> *)(*pcVar4)();
    return pTVar11;
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar12 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < iVar3) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar4)();
        return pTVar11;
      }
      pdVar1 = (double *)((longlong)(param_1->DataPtr->Translation).XY.m128d_f64 + lVar14);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      dVar5 = *(double *)((longlong)(param_1->DataPtr->Translation).ZW.m128d_f64 + lVar14);
      uVar10 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TVector<double> *)(*pcVar4)();
        return pTVar11;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x60;
      fVar2 = param_2->DataPtr[lVar13];
      lVar13 = lVar13 + 1;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)fVar2 * dVar6 + (__return_storage_ptr__->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (double)fVar2 * dVar7 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)fVar2 * dVar5 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    } while (lVar13 < iVar3);
  }
  return __return_storage_ptr__;
}

// GetAnimationAsset @ 14a8f9340

UAnimationAsset * __thiscall
UPoseSearchInteractionAsset::GetAnimationAsset(UPoseSearchInteractionAsset *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Items).ArrayNum;
  pFVar2 = (this->Items).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseSearchInteractionAssetItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(FName *)(pFVar2 + 8) == *param_1) {
      return *(UAnimationAsset **)pFVar2;
    }
    pFVar2 = pFVar2 + 0x80;
  }
  return (UAnimationAsset *)0x0;
}

// GetNumRoles @ 14a8fab70

int __thiscall UPoseSearchInteractionAsset::GetNumRoles(UPoseSearchInteractionAsset *this)

{
  return (this->Items).ArrayNum;
}

// GetOrigin @ 14a8fabf0

TTransform<double> * __thiscall
UPoseSearchInteractionAsset::GetOrigin
          (UPoseSearchInteractionAsset *this,TTransform<double> *__return_storage_ptr__,
          FName *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  __m128d _Var6;
  __m128d _Var7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Items).ArrayNum;
  pFVar8 = (this->Items).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseSearchInteractionAssetItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    if (pFVar8 == pFVar9) break;
    if (*(FName *)(pFVar8 + 8) == *param_1) {
      dVar2 = *(double *)(pFVar8 + 0x28);
      dVar3 = *(double *)(pFVar8 + 0x30);
      dVar4 = *(double *)(pFVar8 + 0x38);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar8 + 0x20);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
      dVar2 = *(double *)(pFVar8 + 0x40);
      dVar5 = *(double *)(pFVar8 + 0x48);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar3 = *(double *)(pFVar8 + 0x50);
      dVar4 = *(double *)(pFVar8 + 0x58);
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
      uVar10 = *(undefined4 *)(pFVar8 + 0x60);
      uVar11 = *(undefined4 *)(pFVar8 + 100);
      uVar12 = *(undefined4 *)(pFVar8 + 0x68);
      uVar13 = *(undefined4 *)(pFVar8 + 0x6c);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
      uVar14 = *(undefined4 *)(pFVar8 + 0x70);
      uVar15 = *(undefined4 *)(pFVar8 + 0x74);
      uVar16 = *(undefined4 *)(pFVar8 + 0x78);
      uVar17 = *(undefined4 *)(pFVar8 + 0x7c);
LAB_14a8faca9:
      *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar10;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar11;
      *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar12;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar13;
      *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar14;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar15;
      *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar16;
      *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar17;
      return __return_storage_ptr__;
    }
    pFVar8 = pFVar8 + 0x80;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var7 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var6.m128d_f64;
  _Var6 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var7.m128d_f64;
  uVar10 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
  uVar11 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
  uVar12 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
  uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var6.m128d_f64;
  uVar14 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar15 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar17 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  goto LAB_14a8faca9;
}

// GetPlayLength @ 14a8fb380

float __thiscall
UPoseSearchInteractionAsset::GetPlayLength
          (UPoseSearchInteractionAsset *this,TVector<double> *param_1)

{
  int iVar1;
  int iVar2;
  UBlendSpace *this_00;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  int local_res8 [2];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_48 [2];
  
  iVar1 = (this->Items).ArrayNum;
  pFVar5 = (this->Items).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x80;
  fVar7 = 0.0;
  do {
    while( true ) {
      if ((this->Items).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPoseSearchInteractionAssetItem_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) {
        return fVar7;
      }
      this_00 = *(UBlendSpace **)pFVar5;
      fVar6 = fVar7;
      if (this_00 != (UBlendSpace *)0x0) break;
LAB_14a8fb487:
      pFVar5 = pFVar5 + 0x80;
      fVar7 = fVar6;
    }
    pUVar3 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      fVar6 = (float)(**(code **)(this_00->_padding_ + 0x2c0))(this_00);
      if (fVar6 <= fVar7) {
        fVar6 = fVar7;
      }
      goto LAB_14a8fb487;
    }
    local_res8[0] = 0;
    local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48[0].ArrayNum = 0;
    local_48[0].ArrayMax = 0;
    UBlendSpace::GetSamplesFromBlendInput(this_00,param_1,local_48,local_res8,true);
    fVar6 = UBlendSpace::GetAnimationLengthFromSampleData(this_00,local_48);
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)local_48[0].AllocatorInstance.Data,local_48[0].ArrayNum);
    if ((FBlendSampleData *)local_48[0].AllocatorInstance.Data == (FBlendSampleData *)0x0)
    goto LAB_14a8fb487;
    FMemory::Free(local_48[0].AllocatorInstance.Data);
    pFVar5 = pFVar5 + 0x80;
    fVar7 = fVar6;
  } while( true );
}

// GetPrivateStaticClass @ 14a8fcdb0

UClass * __cdecl UPoseSearchInteractionAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionAsset",
               &Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionAsset>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionAsset>,local_res8,
               UMultiAnimAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionAsset.InnerSingleton;
}

// GetRole @ 14a8fe410

FName __thiscall UPoseSearchInteractionAsset::GetRole(UPoseSearchInteractionAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  uVar3 = 0;
  if ((int)in_R8D < (this->Items).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 =
       *(undefined8 *)((this->Items).AllocatorInstance.Data + (longlong)(int)in_R8D * 0x80 + 8);
  return FVar4;
}

// HasRootMotion @ 14a8fff20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPoseSearchInteractionAsset::HasRootMotion(UPoseSearchInteractionAsset *this)

{
  int iVar1;
  int iVar2;
  UBlendSpace *this_00;
  bool bVar3;
  byte bVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  byte local_res8 [8];
  FName local_res10;
  FString local_58;
  FString local_48;
  code *local_38;
  FName *local_30;
  
  pFVar7 = (this->Items).AllocatorInstance.Data;
  bVar3 = false;
  iVar1 = (this->Items).ArrayNum;
  local_res8[0] = 1;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x80;
LAB_14a8fff66:
  do {
    while( true ) {
      if ((this->Items).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPoseSearchInteractionAssetItem_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res10);
      }
      if (pFVar7 == pFVar6) {
        if ((bVar3) && (local_res8[0] != 0)) {
          return true;
        }
        return false;
      }
      this_00 = *(UBlendSpace **)pFVar7;
      if (this_00 != (UBlendSpace *)0x0) break;
LAB_14a9000de:
      pFVar7 = pFVar7 + 0x80;
    }
    pUVar5 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    bVar4 = local_res8[0];
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      local_res8[0] = (**(code **)(this_00->_padding_ + 0x340))(this_00);
      local_res8[0] = local_res8[0] & bVar4;
      bVar3 = true;
      pFVar7 = pFVar7 + 0x80;
      goto LAB_14a8fff66;
    }
    pUVar5 = Z_Construct_UClass_UBlendSpace_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) {
      if (2 < (byte)LogPoseSearch._0_1_) {
        local_res10 = (FName)this->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        local_res10 = *(FName *)(this_00->_padding_ + 0x18);
        ::FName::ToString(&local_res10,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
      goto LAB_14a9000de;
    }
    local_res10 = (FName)local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPoseSearchInteractionAsset::HasRootMotion'::__l16::<lambda_1>,void,FBlendSample_const_&>
               ::Call;
    local_30 = &local_res10;
    UBlendSpace::ForEachImmutableSample
              (this_00,(TFunctionRef<void___cdecl(FBlendSample_const_&)> *)&local_38);
    pFVar7 = pFVar7 + 0x80;
    bVar3 = true;
  } while( true );
}

// IsLooping @ 14a9021b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPoseSearchInteractionAsset::IsLooping(UPoseSearchInteractionAsset *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  uint uVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  FName local_res8;
  FString local_78;
  FString local_68 [5];
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_322bcc77;
  iVar2 = (this->Items).ArrayNum;
  pFVar8 = (this->Items).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x80;
  fVar11 = __real_bf800000;
  do {
    while( true ) {
      if ((this->Items).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPoseSearchInteractionAssetItem_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar9) {
        return true;
      }
      plVar4 = *(longlong **)pFVar8;
      if (plVar4 != (longlong *)0x0) break;
LAB_14a9022c9:
      pFVar8 = pFVar8 + 0x80;
    }
    pUVar7 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar3 = (int)pUVar7->_padding_;
    if ((*(int *)(plVar4[2] + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_UBlendSpace_NoRegister();
      iVar3 = (int)pUVar7->_padding_;
      if ((*(int *)(plVar4[2] + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        if (2 < (byte)LogPoseSearch._0_1_) {
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,local_68);
          local_res8 = *(FName *)(plVar4[2] + 0x18);
          ::FName::ToString(&local_res8,&local_78);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
        return false;
      }
      cVar1 = *(char *)((longlong)plVar4 + 0xc2);
    }
    else {
      cVar1 = *(char *)((longlong)plVar4 + 0xac);
    }
    if (cVar1 == '\0') {
      return false;
    }
    fVar10 = (float)(**(code **)(*plVar4 + 0x2c0))(plVar4);
    if (0.0 <= fVar11) {
      if (fVar5 < (float)((uint)(fVar11 - fVar10) & uVar6)) {
        return false;
      }
      goto LAB_14a9022c9;
    }
    pFVar8 = pFVar8 + 0x80;
    fVar11 = fVar10;
  } while( true );
}

// StaticRegisterNativesUPoseSearchInteractionAsset @ 14a908e90

void __cdecl UPoseSearchInteractionAsset::StaticRegisterNativesUPoseSearchInteractionAsset(void)

{
  return;
}

