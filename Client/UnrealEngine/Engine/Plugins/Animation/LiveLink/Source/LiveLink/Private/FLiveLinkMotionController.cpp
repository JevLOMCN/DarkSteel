// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// EnumerateSources @ 14d03af50

void __thiscall
FLiveLinkMotionController::EnumerateSources
          (FLiveLinkMotionController *this,
          TArray<FMotionControllerSource,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  iVar1 = (this->EnumeratedSources).ArrayNum;
  pFVar7 = (this->EnumeratedSources).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->EnumeratedSources).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    local_28[0] = *(undefined8 *)(pFVar7 + 0x18);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    pFVar7 = pFVar7 + 0x20;
    param_1->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
  }
  return;
}

// GetControllerOrientationAndPosition @ 14d04a3a0

bool __thiscall
FLiveLinkMotionController::GetControllerOrientationAndPosition
          (FLiveLinkMotionController *this,int param_1,FName param_2,TRotator<double> *param_3,
          TVector<double> *param_4,bool *param_5,TVector<double> *param_6,bool *param_7,
          TVector<double> *param_8,bool *param_9,TVector<double> *param_10,float param_11)

{
  undefined1 uVar1;
  
  *param_5 = false;
  *param_7 = false;
  *param_9 = false;
                    /* WARNING: Could not recover jumptable at 0x00014d04a3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))();
  return (bool)uVar1;
}

// GetControllerOrientationAndPosition @ 14d04a3e0

bool __thiscall
FLiveLinkMotionController::GetControllerOrientationAndPosition
          (FLiveLinkMotionController *this,int param_1,FName param_2,TRotator<double> *param_3,
          TVector<double> *param_4,float param_5)

{
  double dVar1;
  int iVar2;
  FLiveLinkClient *pFVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  UClass *pUVar10;
  UScriptStruct *pUVar11;
  TRotator<double> *pTVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  UClass *local_res8;
  TRotator<double> local_98;
  FStructOnScope local_78;
  FStructOnScope local_50;
  TQuat<double> local_28;
  
  pFVar7 = (this->EnumeratedSources).AllocatorInstance.Data;
  pFVar13 = pFVar7 + (longlong)(this->EnumeratedSources).ArrayNum * 0x20;
  for (; pFVar7 != pFVar13; pFVar7 = pFVar7 + 0x20) {
    if (*(FName *)(pFVar7 + 0x18) == param_2) {
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        local_98.Pitch = *(double *)pFVar7;
        local_98.Yaw = *(double *)(pFVar7 + 8);
        param_2 = *(FName *)(pFVar7 + 0x10);
        local_98.Roll = (double)param_2;
      }
      break;
    }
  }
  FStructOnScope::FStructOnScope(&local_78);
  FStructOnScope::FStructOnScope(&local_50);
  pFVar3 = this->Client;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x198);
  local_res8 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  cVar6 = (*pcVar4)(pFVar3,param_2,&local_res8,&local_78);
  if (cVar6 != '\0') {
    lVar8 = (**(code **)(local_50._padding_ + 0x18))(&local_50);
    lVar9 = (**(code **)(local_50._padding_ + 0x20))(&local_50);
    if (lVar9 == 0) {
LAB_14d04a51d:
      lVar8 = 0;
    }
    else {
      pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar2 = (int)pUVar10->_padding_;
      if (((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar2) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8)
           != &pUVar10->_padding_)) ||
         (pUVar11 = FLiveLinkTransformFrameData::StaticStruct(), pUVar11 == (UScriptStruct *)0x0))
      goto LAB_14d04a51d;
      iVar2 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar9 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (!bVar14) goto LAB_14d04a51d;
    }
    if (lVar8 != 0) {
      dVar5 = *(double *)(lVar8 + 200);
      dVar1 = *(double *)(lVar8 + 0xd0);
      (param_4->field0_0x0)._s_0.X = *(double *)(lVar8 + 0xc0);
      (param_4->field0_0x0)._s_0.Y = dVar5;
      (param_4->field0_0x0)._s_0.Z = dVar1;
      local_28.X = *(double *)(lVar8 + 0xa0);
      local_28.Y = *(double *)(lVar8 + 0xa8);
      local_28.Z = *(double *)(lVar8 + 0xb0);
      local_28.W = *(double *)(lVar8 + 0xb8);
      pTVar12 = UE::Math::TQuat<double>::Rotator(&local_28,&local_98);
      bVar14 = true;
      dVar1 = pTVar12->Yaw;
      param_3->Pitch = pTVar12->Pitch;
      param_3->Yaw = dVar1;
      param_3->Roll = pTVar12->Roll;
      goto LAB_14d04a58a;
    }
  }
  bVar14 = false;
LAB_14d04a58a:
  FStructOnScope::~FStructOnScope(&local_50);
  FStructOnScope::~FStructOnScope(&local_78);
  return bVar14;
}

// GetControllerOrientationAndPositionForTime @ 14d04a5c0

bool __thiscall
FLiveLinkMotionController::GetControllerOrientationAndPositionForTime
          (FLiveLinkMotionController *this,int param_1,FName param_2,FTimespan param_3,bool *param_4
          ,TRotator<double> *param_5,TVector<double> *param_6,bool *param_7,TVector<double> *param_8
          ,bool *param_9,TVector<double> *param_10,bool *param_11,TVector<double> *param_12,
          float param_13)

{
  undefined1 uVar1;
  
  *param_4 = false;
  *param_7 = false;
  *param_9 = false;
  *param_11 = false;
                    /* WARNING: Could not recover jumptable at 0x00014d04a602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))(param_13,param_1,param_2,param_5);
  return (bool)uVar1;
}

// GetControllerTrackingStatus @ 14d04a610

ETrackingStatus __thiscall
FLiveLinkMotionController::GetControllerTrackingStatus
          (FLiveLinkMotionController *this,int param_1,FName param_2)

{
  FLiveLinkClient *pFVar1;
  code *pcVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  UClass *local_res8;
  FStructOnScope local_58;
  FStructOnScope local_30;
  
  pFVar4 = (this->EnumeratedSources).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)(this->EnumeratedSources).ArrayNum * 0x20;
  do {
    if (pFVar4 == pFVar5) {
LAB_14d04a661:
      FStructOnScope::FStructOnScope(&local_58);
      FStructOnScope::FStructOnScope(&local_30);
      pFVar1 = this->Client;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x198);
      local_res8 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      cVar3 = (*pcVar2)(pFVar1,param_2,&local_res8,&local_58);
      FStructOnScope::~FStructOnScope(&local_30);
      FStructOnScope::~FStructOnScope(&local_58);
      return -(cVar3 != '\0') & Tracked;
    }
    if (*(FName *)(pFVar4 + 0x18) == param_2) {
      param_2 = *(FName *)(pFVar4 + 0x10);
      goto LAB_14d04a661;
    }
    pFVar4 = pFVar4 + 0x20;
  } while( true );
}

// GetCustomParameterValue @ 14d04a9a0

float __thiscall
FLiveLinkMotionController::GetCustomParameterValue
          (FLiveLinkMotionController *this,FName param_1,FName param_2,bool *param_3)

{
  FLiveLinkClient *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FLiveLinkBaseFrameData *pFVar7;
  FLiveLinkBaseStaticData *this_00;
  FScriptContainerElement *pFVar8;
  float fVar9;
  UClass *local_res8;
  FStructOnScope local_78;
  FStructOnScope local_50;
  
  pFVar5 = (this->EnumeratedSources).AllocatorInstance.Data;
  pFVar8 = pFVar5 + (longlong)(this->EnumeratedSources).ArrayNum * 0x20;
  for (; pFVar5 != pFVar8; pFVar5 = pFVar5 + 0x20) {
    if (*(FName *)(pFVar5 + 0x18) == param_1) {
      param_1 = *(FName *)(pFVar5 + 0x10);
      break;
    }
  }
  FStructOnScope::FStructOnScope(&local_78);
  FStructOnScope::FStructOnScope(&local_50);
  pFVar1 = this->Client;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x198);
  local_res8 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  cVar3 = (*pcVar2)(pFVar1,param_1,&local_res8,&local_78);
  fVar9 = 0.0;
  if ((cVar3 != '\0') && (lVar6 = (**(code **)(local_50._padding_ + 0x18))(&local_50), lVar6 != 0))
  {
    pFVar7 = (FLiveLinkBaseFrameData *)(**(code **)(local_50._padding_ + 0x18))(&local_50);
    local_res8 = (UClass *)((ulonglong)local_res8 & 0xffffffff00000000);
    this_00 = (FLiveLinkBaseStaticData *)(**(code **)(local_78._padding_ + 0x18))(&local_78);
    bVar4 = FLiveLinkBaseStaticData::FindPropertyValue(this_00,pFVar7,param_2,(float *)&local_res8);
    if (bVar4) {
      bVar4 = true;
      fVar9 = local_res8._0_4_;
      goto LAB_14d04aac8;
    }
  }
  bVar4 = false;
LAB_14d04aac8:
  *param_3 = bVar4;
  FStructOnScope::~FStructOnScope(&local_50);
  FStructOnScope::~FStructOnScope(&local_78);
  return fVar9;
}

// GetHandJointPosition @ 14d04d930

bool __thiscall
FLiveLinkMotionController::GetHandJointPosition
          (FLiveLinkMotionController *this,FName param_1,int param_2,TVector<double> *param_3)

{
  return false;
}

// GetMotionControllerDeviceTypeName @ 14d050200

FName __thiscall
FLiveLinkMotionController::GetMotionControllerDeviceTypeName(FLiveLinkMotionController *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
                      ::__l2::LiveLinkMotionControllerName,L"LiveLinkMotionController");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FLiveLinkMotionController::GetMotionControllerDeviceTypeName(void)const___ptr64'
       ::__l2::LiveLinkMotionControllerName;
  return in_RDX;
}

