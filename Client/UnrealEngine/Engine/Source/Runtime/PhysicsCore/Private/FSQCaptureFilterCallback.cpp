// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 5

// ~FSQCaptureFilterCallback @ 1441a1bc0

void __thiscall FSQCaptureFilterCallback::~FSQCaptureFilterCallback(FSQCaptureFilterCallback *this)

{
  this->_padding_ = (longlong)&___7ICollisionQueryFilterCallbackBase__6B_;
  return;
}

// PostFilter @ 1441b3140

ECollisionQueryHitType __thiscall
FSQCaptureFilterCallback::PostFilter
          (FSQCaptureFilterCallback *this,FCollisionFilterData *param_1,FPTQueryHit *param_2)

{
  code *pcVar1;
  bool bVar2;
  ECollisionQueryHitType EVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<622209545644539925>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                     ,0x15,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Touch;
}

// PostFilter @ 1441b3180

ECollisionQueryHitType __thiscall
FSQCaptureFilterCallback::PostFilter
          (FSQCaptureFilterCallback *this,FCollisionFilterData *param_1,FQueryHit *param_2)

{
  return Touch;
}

// PreFilter @ 1441b3290

ECollisionQueryHitType __thiscall
FSQCaptureFilterCallback::PreFilter
          (FSQCaptureFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticle<double,3> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ECollisionQueryHitType EVar4;
  FScriptContainerElement FVar5;
  TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pTVar6 = TMapBase<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticle<double,3>_*,TArray<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find(&this->Capture->ChaosActorToShapeHitsArray,param_3);
  if (pTVar6 == (TArray<TTuple<Chaos::FPerShapeData_*,ECollisionQueryHitType>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
LAB_1441b32fb:
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<622209545644540210>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                       ,0x132,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FVar5 = (FScriptContainerElement)0x0;
  }
  else {
    iVar1 = pTVar6->ArrayNum;
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar6->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<Chaos::FPerShapeData_*,enum_ECollisionQueryHitType>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) goto LAB_1441b32fb;
      if (*(FPerShapeData **)pFVar7 == param_2) break;
      pFVar7 = pFVar7 + 0x10;
    }
    FVar5 = pFVar7[8];
  }
  return (ECollisionQueryHitType)FVar5;
}

// PreFilter @ 1441b3350

ECollisionQueryHitType __thiscall
FSQCaptureFilterCallback::PreFilter
          (FSQCaptureFilterCallback *this,FCollisionFilterData *param_1,FPerShapeData *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  ECollisionQueryHitType EVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<622209545644539926>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\SQCapture.cpp"
                     ,0x16,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Touch;
}

