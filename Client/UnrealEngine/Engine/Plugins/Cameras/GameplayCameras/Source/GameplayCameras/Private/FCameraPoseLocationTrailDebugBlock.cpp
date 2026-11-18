// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FCameraPoseLocationTrailDebugBlock @ 14d58d020

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraPoseLocationTrailDebugBlock * __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::FCameraPoseLocationTrailDebugBlock
          (FCameraPoseLocationTrailDebugBlock *this,FCameraNodeEvaluationResult *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TVector<double> *_Src;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar4;
  TArrayView<UE::Math::TVector<double>_const_,int> local_28;
  
  this->_padding_ = 0;
  pTVar1 = &this->Trail;
  this->_padding_ = 0;
  piVar2 = &(this->Trail).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *piVar2 = 0;
  this->_padding_ = (longlong)&___7FCameraPoseLocationTrailDebugBlock_Cameras_UE__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Trail).ArrayNum = 0;
  pTVar4 = FCameraNodeEvaluationResult::GetCameraPoseLocationTrail(param_1,&local_28);
  iVar3 = pTVar4->ArrayNum;
  _Src = pTVar4->DataPtr;
  (this->Trail).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    if (iVar3 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
    }
  }
  return this;
}

// FCameraPoseLocationTrailDebugBlock @ 14d58d100

FCameraPoseLocationTrailDebugBlock * __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::FCameraPoseLocationTrailDebugBlock
          (FCameraPoseLocationTrailDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FCameraPoseLocationTrailDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Trail).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Trail).ArrayNum = 0;
  (this->Trail).ArrayMax = 0;
  return this;
}

// DrawCameraPoseLocationTrail @ 14d59fe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::DrawCameraPoseLocationTrail
          (FCameraPoseLocationTrailDebugBlock *this,FCameraDebugRenderer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  ULineBatchComponent *pUVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  uVar4 = __real_3e99999a;
  dVar3 = __real_3e45798ee0000000;
  uVar8 = 1;
  local_68 = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.R];
  local_64 = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.G];
  local_60 = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.B];
  local_5c = (float)FColorList::LightBlue.field0_0x0._3_1_ * __real_3b808081;
  if (1 < (this->Trail).ArrayNum) {
    lVar10 = 0x18;
    do {
      uVar6 = 0;
      if ((int)(uVar8 - 1) < (this->Trail).ArrayNum) {
        uVar6 = -uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Trail).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Trail).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->Trail).AllocatorInstance.Data + lVar10;
      if ((((*(double *)(pFVar1 + lVar10 + -0x18) != 0.0) ||
           (*(double *)(pFVar1 + lVar10 + -0x10) != 0.0)) ||
          (*(double *)(pFVar1 + lVar10 + -8) != 0.0)) &&
         (((dVar13 = *(double *)pFVar9 - *(double *)(pFVar1 + lVar10 + -0x18),
           auVar11._0_8_ =
                (*(double *)(pFVar9 + 0x10) - *(double *)(pFVar1 + lVar10 + -8)) *
                (*(double *)(pFVar9 + 0x10) - *(double *)(pFVar1 + lVar10 + -8)), auVar11._8_8_ = 0,
           auVar12._8_8_ = 0,
           auVar12._0_8_ =
                (*(double *)(pFVar9 + 8) - *(double *)(pFVar1 + lVar10 + -0x10)) *
                (*(double *)(pFVar9 + 8) - *(double *)(pFVar1 + lVar10 + -0x10)) + dVar13 * dVar13 +
                auVar11._0_8_, auVar12 = sqrtpd(auVar11,auVar12), dVar3 < auVar12._0_8_ &&
           (param_1->World != (UWorld *)0x0)) &&
          (pUVar7 = UWorld::GetLineBatcher(param_1->World,Foreground),
          pUVar7 != (ULineBatchComponent *)0x0)))) {
        (**(code **)(*(longlong *)pUVar7 + 0xa90))
                  (pUVar7,pFVar1 + lVar10 + -0x18,pFVar9,&local_68,1,uVar4,0,0);
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar8 < (this->Trail).ArrayNum);
  }
  return;
}

// GetTypeID @ 14d5abba0

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::GetTypeID(FCameraPoseLocationTrailDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4760

bool __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::IsKindOf
          (FCameraPoseLocationTrailDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraPoseLocationTrailDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bb3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::OnDebugDraw
          (FCameraPoseLocationTrailDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  if (param_2->bIsExternalRendering != false) {
    DrawCameraPoseLocationTrail(this,param_2);
    return;
  }
  return;
}

// OnSerialize @ 14d5c3740

void __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::OnSerialize
          (FCameraPoseLocationTrailDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Trail);
  return;
}

