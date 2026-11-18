// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitPoseTrackingLiveLink
// Functions: 11

// FAppleARKitPoseTrackingLiveLinkSource @ 14cfe3220

FAppleARKitPoseTrackingLiveLinkSource * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::FAppleARKitPoseTrackingLiveLinkSource
          (FAppleARKitPoseTrackingLiveLinkSource *this)

{
  this->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLinkSource__6B_;
  this->Client = (ILiveLinkClient *)0x0;
  (this->SourceGuid).A = 0;
  (this->SourceGuid).B = 0;
  (this->SourceGuid).C = 0;
  (this->SourceGuid).D = 0;
  this->LastFramePublished = 0;
  this->bNewLiveLinkClient = false;
  (this->RefTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefTransforms).ArrayNum = 0;
  (this->RefTransforms).ArrayMax = 0;
  return this;
}

// ~FAppleARKitPoseTrackingLiveLinkSource @ 14cfe4100

void __thiscall
FAppleARKitPoseTrackingLiveLinkSource::~FAppleARKitPoseTrackingLiveLinkSource
          (FAppleARKitPoseTrackingLiveLinkSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAppleARKitPoseTrackingLiveLinkSource__6B_;
  pFVar1 = (this->RefTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  return;
}

// GetRefPoseTransforms @ 14cfe5d60

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::GetRefPoseTransforms
          (FAppleARKitPoseTrackingLiveLinkSource *this)

{
  return &this->RefTransforms;
}

// GetSourceMachineName @ 14cfe5e00

FText * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::GetSourceMachineName
          (FAppleARKitPoseTrackingLiveLinkSource *this,FText *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FText local_18;
  
  FText::FText(&local_18);
  pwVar1 = FWindowsPlatformProcess::ComputerName();
  FText::FromString(__return_storage_ptr__,pwVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSourceStatus @ 14cfe5e50

FText * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::GetSourceStatus
          (FAppleARKitPoseTrackingLiveLinkSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AppleARKitPoseTrackingLiveLink",
             L"AppleARKitPoseTrackingLiveLinkStatus",L"Active");
  return __return_storage_ptr__;
}

// GetSourceType @ 14cfe5ee0

FText * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::GetSourceType
          (FAppleARKitPoseTrackingLiveLinkSource *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AppleARKitPoseTrackingLiveLink",
             L"AppleARKitPoseTrackingLiveLinkSourceType",L"Apple AR Body Tracking");
  return __return_storage_ptr__;
}

// IsSourceStillValid @ 14cfe6030

bool __thiscall
FAppleARKitPoseTrackingLiveLinkSource::IsSourceStillValid
          (FAppleARKitPoseTrackingLiveLinkSource *this)

{
  return this->Client != (ILiveLinkClient *)0x0;
}

// ReceiveClient @ 14cfe6060

void __thiscall
FAppleARKitPoseTrackingLiveLinkSource::ReceiveClient
          (FAppleARKitPoseTrackingLiveLinkSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->Client = param_1;
  this->bNewLiveLinkClient = true;
  (this->SourceGuid).A = uVar1;
  (this->SourceGuid).B = uVar2;
  (this->SourceGuid).C = uVar3;
  (this->SourceGuid).D = uVar4;
  return;
}

// RequestSourceShutdown @ 14cfe6080

bool __thiscall
FAppleARKitPoseTrackingLiveLinkSource::RequestSourceShutdown
          (FAppleARKitPoseTrackingLiveLinkSource *this)

{
  this->Client = (ILiveLinkClient *)0x0;
  return true;
}

// SetupLiveLinkStaticData @ 14cfe60a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
FAppleARKitPoseTrackingLiveLinkSource::SetupLiveLinkStaticData
          (FAppleARKitPoseTrackingLiveLinkSource *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *__return_storage_ptr__,
          FARPose3D *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  VectorRegister4Double *pVVar9;
  VectorRegister4Double *pVVar10;
  VectorRegister4Double *pVVar11;
  VectorRegister4Double *pVVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FWeakObjectPtr FVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar20;
  UScriptStruct *pUVar21;
  longlong lVar22;
  longlong lVar23;
  UClass *pUVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  char *pcVar28;
  ForAnyElementType _Src;
  TTransform<double> *pTVar29;
  TTransform<double> *pTVar30;
  uint uVar31;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  ForAnyElementType *pFVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FWeakObjectPtr local_148;
  longlong local_140;
  longlong local_138;
  UScriptStruct *local_130;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  undefined7 extraout_var;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_128 = __return_storage_ptr__;
  bVar17 = IsInGameThread();
  if ((!bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkSource.cpp"
                          ,0x76,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
    return pFVar20;
  }
  FStructOnScope::FStructOnScope(&__return_storage_ptr__->WrappedStruct);
  pUVar21 = FLiveLinkSkeletonStaticData::StaticStruct();
  if ((pUVar21 == (UScriptStruct *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOtherStruct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                          ,0x16d,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
    return pFVar20;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  lVar26 = 0;
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_130 = pUVar21;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_130);
  FVar16 = local_148;
  (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x40))(__return_storage_ptr__);
  puVar4 = (undefined8 *)(__return_storage_ptr__->WrappedStruct)._padding_;
  (__return_storage_ptr__->WrappedStruct).ScriptStruct.WeakPtr = FVar16;
  (*(code *)*puVar4)(__return_storage_ptr__);
  lVar22 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x18))
                     (__return_storage_ptr__);
  lVar23 = (**(code **)((__return_storage_ptr__->WrappedStruct)._padding_ + 0x20))
                     (__return_storage_ptr__);
  if (lVar23 != 0) {
    pUVar24 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar18 = (int)pUVar24->_padding_;
    if (((iVar18 <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar18 * 8)
         == &pUVar24->_padding_)) &&
       (pUVar21 = FLiveLinkSkeletonStaticData::StaticStruct(), pUVar21 != (UScriptStruct *)0x0)) {
      pcVar28 = (char *)&pUVar21->_padding_;
      iVar18 = (int)pUVar21->_padding_;
      if ((*(int *)(lVar23 + 0x38) < iVar18) ||
         (*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar18 * 8) != pcVar28)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if ((bVar17) && (lVar26 = lVar22, lVar22 != 0)) goto LAB_14cfe6246;
    }
  }
  pcVar28 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkSource.cpp"
  ;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("SkeletonDataPtr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKit\\Source\\AppleARKitPoseTrackingLiveLink\\Private\\AppleARKitPoseTrackingLiveLinkSource.cpp"
                      ,0x7d,L"");
  if (bVar17) {
    pcVar5 = (code *)swi(3);
    pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
    return pFVar20;
  }
LAB_14cfe6246:
  pTVar1 = &(param_1->SkeletonDefinition).JointNames;
  pFVar33 = (ForAnyElementType *)(lVar26 + 0x10);
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar33 != pTVar1) {
    iVar18 = (param_1->SkeletonDefinition).JointNames.ArrayNum;
    piVar2 = (int *)(lVar26 + 0x1c);
    pTVar29 = (TTransform<double> *)(pTVar1->AllocatorInstance).Data;
    *(int *)(lVar26 + 0x18) = iVar18;
    if ((iVar18 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      pcVar28 = &DAT_00000004;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar18,*piVar2,pFVar33,iVar18,piVar2);
      if (iVar18 != 0) {
        memcpy(pFVar33->Data,pTVar29,(longlong)iVar18 << 3);
        pcVar28 = (char *)pTVar29;
      }
    }
  }
  local_150 = (param_1->SkeletonDefinition).ParentIndices.ArrayNum;
  lVar22 = (longlong)local_150;
  pTVar29 = (TTransform<double> *)(param_1->SkeletonDefinition).ParentIndices.AllocatorInstance.Data
  ;
  local_158.Data = (FScriptContainerElement *)0x0;
  if (local_150 == 0) {
    local_14c = 0;
    pTVar29 = (TTransform<double> *)pcVar28;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_150,0,&local_158,local_150,&local_14c);
    memcpy(local_158.Data,pTVar29,lVar22 << 2);
  }
  iVar18 = local_150;
  _Src.Data = local_158.Data;
  pFVar33 = (ForAnyElementType *)(lVar26 + 0x20);
  if (pFVar33 != &local_158) {
    *(int *)(lVar26 + 0x28) = local_150;
    if ((local_150 == 0) && (*(int *)(lVar26 + 0x2c) == 0)) {
      *(int *)(lVar26 + 0x2c) = 0;
    }
    else {
      pTVar29 = (TTransform<double> *)&DAT_00000004;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_150,*(int *)(lVar26 + 0x2c),pFVar33,local_150,(int *)(lVar26 + 0x2c));
      if (iVar18 != 0) {
        memcpy(pFVar33->Data,_Src.Data,(longlong)iVar18 << 2);
        pTVar29 = (TTransform<double> *)_Src.Data;
      }
    }
  }
  if ((TTransform<double> *)local_158.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_158.Data);
  }
  uVar3 = (param_1->SkeletonDefinition).NumJoints;
  pTVar32 = &this->RefTransforms;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar2 = &(this->RefTransforms).ArrayMax;
  if ((this->RefTransforms).ArrayMax < (int)uVar3) {
    pTVar29 = (TTransform<double> *)&DAT_00000010;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&pTVar32->AllocatorInstance,(this->RefTransforms).ArrayNum,piVar2);
  }
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar31 = 0;
  if (0 < (param_1->SkeletonDefinition).NumJoints) {
    local_138 = 0;
    local_140 = 0;
    do {
      lVar26 = local_138;
      uVar27 = 0;
      if ((int)uVar31 < (param_1->JointTransforms).ArrayNum) {
        uVar27 = ~uVar31 >> 0x1f;
      }
      pTVar30 = pTVar29;
      if (uVar27 == 0) {
        pTVar30 = (TTransform<double> *)0x1506109c0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
          return pFVar20;
        }
      }
      pTVar29 = (TTransform<double> *)((param_1->JointTransforms).AllocatorInstance.Data + lVar26);
      uVar27 = 0;
      if ((int)uVar31 < (param_1->SkeletonDefinition).ParentIndices.ArrayNum) {
        uVar27 = ~uVar31 >> 0x1f;
      }
      if (uVar27 == 0) {
        pTVar30 = (TTransform<double> *)0x1506109c0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
          return pFVar20;
        }
      }
      uVar34 = SUB84(pTVar30,0);
      iVar18 = *(int *)((param_1->SkeletonDefinition).ParentIndices.AllocatorInstance.Data +
                       local_140);
      if (iVar18 < 0) {
        iVar18 = (this->RefTransforms).ArrayNum;
        if (iVar18 == *piVar2) {
          pTVar30 = (TTransform<double> *)pTVar32;
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar32->AllocatorInstance,piVar2);
          (this->RefTransforms).ArrayNum = iVar18;
        }
        (this->RefTransforms).ArrayNum = iVar18 + 1;
        dVar8 = (pTVar29->Rotation).XY.m128d_f64[1];
        pFVar25 = (pTVar32->AllocatorInstance).Data;
        lVar26 = (longlong)iVar18 * 0x60;
        *(double *)(pFVar25 + lVar26) = (pTVar29->Rotation).XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 8) = dVar8;
        dVar8 = (pTVar29->Rotation).ZW.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x10) = (pTVar29->Rotation).ZW.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x10 + 8) = dVar8;
        dVar8 = (pTVar29->Translation).XY.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x20) = (pTVar29->Translation).XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x20 + 8) = dVar8;
        dVar8 = (pTVar29->Translation).ZW.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x30) = (pTVar29->Translation).ZW.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x30 + 8) = dVar8;
        dVar8 = (pTVar29->Scale3D).XY.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x40) = (pTVar29->Scale3D).XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x40 + 8) = dVar8;
        pVVar9 = &pTVar29->Scale3D;
        pVVar10 = &pTVar29->Scale3D;
        pVVar11 = &pTVar29->Scale3D;
        pVVar12 = &pTVar29->Scale3D;
        pTVar29 = pTVar30;
        uVar34 = *(undefined4 *)(pVVar9->ZW).m128d_f64;
        uVar35 = *(undefined4 *)((longlong)(pVVar10->ZW).m128d_f64 + 4);
        uVar36 = *(undefined4 *)((pVVar11->ZW).m128d_f64 + 1);
        uVar37 = *(undefined4 *)((longlong)(pVVar12->ZW).m128d_f64 + 0xc);
      }
      else {
        iVar19 = (param_1->JointTransforms).ArrayNum;
        if (iVar19 <= iVar18) {
          uVar34 = 0x506109c0;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar19 = (int)CONCAT71(extraout_var,bVar17);
          if (bVar17) {
            pcVar5 = (code *)swi(3);
            pFVar20 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(*pcVar5)();
            return pFVar20;
          }
        }
        pTVar30 = (TTransform<double> *)
                  ((param_1->JointTransforms).AllocatorInstance.Data + (longlong)iVar18 * 0x60);
        lVar26 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (double)CONCAT44(*(uint *)((longlong)(pTVar30->Scale3D).XY.m128d_f64 + 0xc) &
                                   uVar15,*(uint *)((pTVar30->Scale3D).XY.m128d_f64 + 1) & uVar14));
        lVar22 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                  (double)CONCAT44(*(uint *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 0xc) &
                                   uVar15,*(uint *)((pTVar30->Scale3D).ZW.m128d_f64 + 1) & uVar14));
        auVar6._8_4_ = (int)lVar22;
        auVar6._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                        (double)CONCAT44(*(uint *)((longlong)(pTVar30->Scale3D).ZW.m128d_f64 + 4) &
                                         uVar13,*(uint *)(pTVar30->Scale3D).ZW.m128d_f64 & uVar3));
        auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        uVar27 = movmskpd(uVar34,auVar6);
        auVar7._8_4_ = (int)lVar26;
        auVar7._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                        (double)CONCAT44(*(uint *)((longlong)(pTVar30->Scale3D).XY.m128d_f64 + 4) &
                                         uVar13,*(uint *)(pTVar30->Scale3D).XY.m128d_f64 & uVar3));
        auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar18 = movmskpd(iVar19,auVar7);
        if ((uVar27 & 0x3fffffff) == 0 && iVar18 == 0) {
          local_b8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_b8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_b8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_b8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_b8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_b8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(pTVar30,&local_b8);
        }
        local_118.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_118.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_118.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_118.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_118.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_118,pTVar29,&local_b8);
        iVar18 = (this->RefTransforms).ArrayNum;
        if (iVar18 == *piVar2) {
          pTVar29 = (TTransform<double> *)pTVar32;
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar32->AllocatorInstance,piVar2);
          (this->RefTransforms).ArrayNum = iVar18;
        }
        (this->RefTransforms).ArrayNum = iVar18 + 1;
        pFVar25 = (pTVar32->AllocatorInstance).Data;
        lVar26 = (longlong)iVar18 * 0x60;
        *(double *)(pFVar25 + lVar26) = local_118.Rotation.XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 8) = local_118.Rotation.XY.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x10) = local_118.Rotation.ZW.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x10 + 8) = local_118.Rotation.ZW.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x20) = local_118.Translation.XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x20 + 8) = local_118.Translation.XY.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x30) = local_118.Translation.ZW.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x30 + 8) = local_118.Translation.ZW.m128d_f64[1];
        *(double *)(pFVar25 + lVar26 + 0x40) = local_118.Scale3D.XY.m128d_f64[0];
        *(double *)(pFVar25 + lVar26 + 0x40 + 8) = local_118.Scale3D.XY.m128d_f64[1];
        uVar34 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar35 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar36 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar37 = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      uVar31 = uVar31 + 1;
      local_140 = local_140 + 4;
      local_138 = local_138 + 0x60;
      pFVar25 = pFVar25 + lVar26 + 0x50;
      *(undefined4 *)pFVar25 = uVar34;
      *(undefined4 *)(pFVar25 + 4) = uVar35;
      *(undefined4 *)(pFVar25 + 8) = uVar36;
      *(undefined4 *)(pFVar25 + 0xc) = uVar37;
    } while ((int)uVar31 < (param_1->SkeletonDefinition).NumJoints);
  }
  return local_128;
}

// UpdateLiveLink @ 14cfe67d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAppleARKitPoseTrackingLiveLinkSource::UpdateLiveLink
          (FAppleARKitPoseTrackingLiveLinkSource *this,FName param_1,FTimecode *param_2,uint param_3
          ,FARPose3D *param_4,FARPose3D *param_5,FName param_6)

{
  int *piVar1;
  double *pdVar2;
  undefined4 *puVar3;
  ILiveLinkClient *pIVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  VectorRegister4Double *pVVar9;
  VectorRegister4Double *pVVar10;
  VectorRegister4Double *pVVar11;
  VectorRegister4Double *pVVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  UScriptStruct *pUVar20;
  double *pdVar21;
  longlong lVar22;
  UClass *pUVar23;
  double dVar24;
  uint uVar25;
  TTransform<double> *pTVar26;
  TTransform<double> *pTVar27;
  uint uVar28;
  uint uVar29;
  FARPose3D *pFVar30;
  TTransform<double> *pTVar31;
  longlong lVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_1e8 [32];
  longlong local_1b8;
  longlong local_1b0;
  UClass *local_1a8;
  LARGE_INTEGER local_1a0;
  LARGE_INTEGER local_198;
  FARPose3D *local_190;
  FAppleARKitPoseTrackingLiveLinkSource *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  FName local_170;
  FStructOnScope local_168;
  FStructOnScope local_140;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  undefined7 extraout_var;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_180._0_4_ = (this->SourceGuid).A;
  local_180._4_4_ = (this->SourceGuid).B;
  uStack_178._0_4_ = (this->SourceGuid).C;
  uStack_178._4_4_ = (this->SourceGuid).D;
  local_190 = param_5;
  if (this->Client == (ILiveLinkClient *)0x0) {
    return;
  }
  local_188 = this;
  local_170 = param_1;
  if (this->bNewLiveLinkClient != false) {
    SetupLiveLinkStaticData
              (this,(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_140,param_5);
    (**(code **)((longlong)*this->Client + 0xa0))(this->Client,&local_180);
    pIVar4 = this->Client;
    pcVar5 = *(code **)((longlong)*pIVar4 + 0x78);
    local_1a8 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1a8);
    }
    (*pcVar5)(pIVar4,&local_180,&local_1a8,&local_140);
    this->bNewLiveLinkClient = false;
    FStructOnScope::~FStructOnScope(&local_140);
  }
  pUVar20 = FLiveLinkAnimationFrameData::StaticStruct();
  FStructOnScope::FStructOnScope(&local_168,(UStruct *)pUVar20);
  pdVar21 = (double *)(**(code **)(local_168._padding_ + 0x18))(&local_168);
  pTVar26 = *(TTransform<double> **)(local_168._padding_ + 0x20);
  lVar22 = (*(code *)pTVar26)(&local_168);
  if (lVar22 != 0) {
    pUVar23 = Z_Construct_UClass_UScriptStruct_NoRegister();
    pTVar26 = *(TTransform<double> **)(lVar22 + 0x10);
    iVar18 = (int)pUVar23->_padding_;
    if (((iVar18 <= *(int *)((pTVar26->Translation).ZW.m128d_f64 + 1)) &&
        ((longlong *)
         *(undefined1 **)((longlong)(pTVar26->Translation).ZW.m128d_f64[0] + (longlong)iVar18 * 8)
         == &pUVar23->_padding_)) &&
       (pUVar20 = FLiveLinkAnimationFrameData::StaticStruct(), pUVar20 != (UScriptStruct *)0x0)) {
      pTVar26 = (TTransform<double> *)&pUVar20->_padding_;
      iVar18 = (int)pUVar20->_padding_;
      if ((*(int *)(lVar22 + 0x38) < iVar18) ||
         ((TTransform<double> *)
          *(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar18 * 8) != pTVar26)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) goto LAB_14cfe693c;
    }
  }
  pdVar21 = (double *)0x0;
LAB_14cfe693c:
  QueryPerformanceCounter(&local_1a0);
  dVar8 = (double)local_1a0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  QueryPerformanceCounter(&local_198);
  dVar24 = (double)local_198.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *pdVar21 = dVar8;
  pdVar21[1] = (dVar24 + __real_4170000000000000) - dVar8;
  pTVar31 = (TTransform<double> *)(pdVar21 + 0x14);
  piVar1 = (int *)((longlong)pdVar21 + 0xac);
  *(undefined4 *)(pdVar21 + 0x15) = 0;
  if (*(int *)((longlong)pdVar21 + 0xac) < 0) {
    pTVar26 = (TTransform<double> *)&DAT_00000010;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,(ForAnyElementType *)pTVar31,0,piVar1);
  }
  uVar16 = _UNK_15061cc8c;
  uVar15 = _UNK_15061cc88;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = 0;
  if (0 < (param_4->SkeletonDefinition).NumJoints) {
    local_1b0 = 0;
    local_1b8 = 0;
    do {
      uVar29 = ~uVar28 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar28 < (param_4->SkeletonDefinition).ParentIndices.ArrayNum) {
        uVar25 = uVar29;
      }
      pTVar27 = pTVar26;
      if (uVar25 == 0) {
        pTVar27 = (TTransform<double> *)0x1506109c0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar18 = *(int *)((param_4->SkeletonDefinition).ParentIndices.AllocatorInstance.Data +
                       local_1b0 * 4);
      uVar25 = 0;
      if ((int)uVar28 < (param_4->IsJointTracked).ArrayNum) {
        uVar25 = uVar29;
      }
      if (uVar25 == 0) {
        pTVar27 = (TTransform<double> *)0x1506109c0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar30 = local_190;
      if ((param_4->IsJointTracked).AllocatorInstance.Data[local_1b0] !=
          (FScriptContainerElement)0x0) {
        if (-1 < iVar18) {
          if ((param_4->IsJointTracked).ArrayNum <= iVar18) {
            pTVar27 = (TTransform<double> *)0x1506109c0;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar30 = local_190;
          if ((param_4->IsJointTracked).AllocatorInstance.Data[iVar18] ==
              (FScriptContainerElement)0x0) goto LAB_14cfe6af6;
        }
        pFVar30 = param_4;
      }
LAB_14cfe6af6:
      uVar25 = 0;
      if ((int)uVar28 < (pFVar30->JointTransforms).ArrayNum) {
        uVar25 = uVar29;
      }
      if (uVar25 == 0) {
        pTVar27 = (TTransform<double> *)0x1506109c0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar33 = SUB84(pTVar27,0);
      pTVar26 = (TTransform<double> *)
                ((pFVar30->JointTransforms).AllocatorInstance.Data + local_1b8);
      if (iVar18 < 0) {
        iVar18 = *(int *)(pdVar21 + 0x15);
        if (iVar18 == *piVar1) {
          pTVar27 = pTVar31;
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,(ForAnyElementType *)pTVar31,piVar1);
        }
        *(int *)(pdVar21 + 0x15) = iVar18 + 1;
        dVar8 = (pTVar26->Rotation).XY.m128d_f64[1];
        dVar24 = (pTVar31->Rotation).XY.m128d_f64[0];
        lVar22 = (longlong)iVar18 * 0x60;
        *(double *)(lVar22 + (longlong)dVar24) = (pTVar26->Rotation).XY.m128d_f64[0];
        ((double *)(lVar22 + (longlong)dVar24))[1] = dVar8;
        dVar8 = (pTVar26->Rotation).ZW.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x10 + (longlong)dVar24);
        *pdVar2 = (pTVar26->Rotation).ZW.m128d_f64[0];
        pdVar2[1] = dVar8;
        dVar8 = (pTVar26->Translation).XY.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x20 + (longlong)dVar24);
        *pdVar2 = (pTVar26->Translation).XY.m128d_f64[0];
        pdVar2[1] = dVar8;
        dVar8 = (pTVar26->Translation).ZW.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x30 + (longlong)dVar24);
        *pdVar2 = (pTVar26->Translation).ZW.m128d_f64[0];
        pdVar2[1] = dVar8;
        dVar8 = (pTVar26->Scale3D).XY.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x40 + (longlong)dVar24);
        *pdVar2 = (pTVar26->Scale3D).XY.m128d_f64[0];
        pdVar2[1] = dVar8;
        pVVar9 = &pTVar26->Scale3D;
        pVVar10 = &pTVar26->Scale3D;
        pVVar11 = &pTVar26->Scale3D;
        pVVar12 = &pTVar26->Scale3D;
        pTVar26 = pTVar27;
        uVar33 = *(undefined4 *)(pVVar9->ZW).m128d_f64;
        uVar34 = *(undefined4 *)((longlong)(pVVar10->ZW).m128d_f64 + 4);
        uVar35 = *(undefined4 *)((pVVar11->ZW).m128d_f64 + 1);
        uVar36 = *(undefined4 *)((longlong)(pVVar12->ZW).m128d_f64 + 0xc);
      }
      else {
        iVar19 = (pFVar30->JointTransforms).ArrayNum;
        if (iVar19 <= iVar18) {
          uVar33 = 0x506109c0;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar19 = (int)CONCAT71(extraout_var,bVar17);
          if (bVar17) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pTVar27 = (TTransform<double> *)
                  ((pFVar30->JointTransforms).AllocatorInstance.Data + (longlong)iVar18 * 0x60);
        lVar22 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (double)CONCAT44(*(uint *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 0xc) &
                                   uVar16,*(uint *)((pTVar27->Scale3D).XY.m128d_f64 + 1) & uVar15));
        lVar32 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                  (double)CONCAT44(*(uint *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 0xc) &
                                   uVar16,*(uint *)((pTVar27->Scale3D).ZW.m128d_f64 + 1) & uVar15));
        auVar6._8_4_ = (int)lVar32;
        auVar6._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                        (double)CONCAT44(*(uint *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 4) &
                                         uVar14,*(uint *)(pTVar27->Scale3D).ZW.m128d_f64 & uVar13));
        auVar6._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar25 = movmskpd(uVar33,auVar6);
        auVar7._8_4_ = (int)lVar22;
        auVar7._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                        (double)CONCAT44(*(uint *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 4) &
                                         uVar14,*(uint *)(pTVar27->Scale3D).XY.m128d_f64 & uVar13));
        auVar7._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        iVar18 = movmskpd(iVar19,auVar7);
        if ((uVar25 & 0x3fffffff) == 0 && iVar18 == 0) {
          local_b8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_b8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_b8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_b8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_b8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_b8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(pTVar27,&local_b8);
        }
        local_118.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_118.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_118.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_118.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_118.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_118,pTVar26,&local_b8);
        iVar18 = *(int *)(pdVar21 + 0x15);
        if (iVar18 == *piVar1) {
          pTVar26 = pTVar31;
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,(ForAnyElementType *)pTVar31,piVar1);
        }
        *(int *)(pdVar21 + 0x15) = iVar18 + 1;
        dVar24 = (pTVar31->Rotation).XY.m128d_f64[0];
        lVar22 = (longlong)iVar18 * 0x60;
        *(double *)(lVar22 + (longlong)dVar24) = local_118.Rotation.XY.m128d_f64[0];
        ((double *)(lVar22 + (longlong)dVar24))[1] = local_118.Rotation.XY.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x10 + (longlong)dVar24);
        *pdVar2 = local_118.Rotation.ZW.m128d_f64[0];
        pdVar2[1] = local_118.Rotation.ZW.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x20 + (longlong)dVar24);
        *pdVar2 = local_118.Translation.XY.m128d_f64[0];
        pdVar2[1] = local_118.Translation.XY.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x30 + (longlong)dVar24);
        *pdVar2 = local_118.Translation.ZW.m128d_f64[0];
        pdVar2[1] = local_118.Translation.ZW.m128d_f64[1];
        pdVar2 = (double *)(lVar22 + 0x40 + (longlong)dVar24);
        *pdVar2 = local_118.Scale3D.XY.m128d_f64[0];
        pdVar2[1] = local_118.Scale3D.XY.m128d_f64[1];
        uVar33 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar34 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar35 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar36 = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      uVar28 = uVar28 + 1;
      local_1b8 = local_1b8 + 0x60;
      local_1b0 = local_1b0 + 1;
      puVar3 = (undefined4 *)(lVar22 + 0x50 + (longlong)dVar24);
      *puVar3 = uVar33;
      puVar3[1] = uVar34;
      puVar3[2] = uVar35;
      puVar3[3] = uVar36;
      this = local_188;
    } while ((int)uVar28 < (param_4->SkeletonDefinition).NumJoints);
  }
  (**(code **)((longlong)*this->Client + 0x80))(this->Client,&local_180,&local_168);
  FStructOnScope::~FStructOnScope(&local_168);
  return;
}

