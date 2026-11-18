// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 197

// Construct<FDistortionHandlerPicker> @ 14d676c90

void __cdecl UE::CoreUObject::Private::Construct<FDistortionHandlerPicker>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FDistortionHandlerPicker> @ 14d676cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionHandlerPicker>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FDistortionHandlerPicker> @ 14d676d10

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionHandlerPicker>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDistortionHandlerPicker> @ 14d676d70

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionHandlerPicker>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      ::FString::operator=((FString *)(puVar3 + 3),(FString *)(puVar1 + 3));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnamorphicDistortionParameters> @ 14d676ee0

void __cdecl UE::CoreUObject::Private::Construct<FAnamorphicDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3f800000;
  return;
}

// ConstructForTests<FAnamorphicDistortionParameters> @ 14d676f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnamorphicDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3f800000;
  return;
}

// Destruct<FAnamorphicDistortionParameters> @ 14d676f60

void __cdecl UE::CoreUObject::Private::Destruct<FAnamorphicDistortionParameters>(void *param_1)

{
  return;
}

// Copy<FAnamorphicDistortionParameters> @ 14d676ff0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnamorphicDistortionParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImageCenterFocusCurve> @ 14d677110

void __cdecl UE::CoreUObject::Private::Construct<FImageCenterFocusCurve>(void *param_1)

{
  memset(param_1,0,0x108);
  FImageCenterFocusCurve::FImageCenterFocusCurve(param_1);
  return;
}

// ConstructForTests<FImageCenterFocusCurve> @ 14d677140

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageCenterFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  return;
}

// Destruct<FImageCenterFocusCurve> @ 14d677190

void __cdecl UE::CoreUObject::Private::Destruct<FImageCenterFocusCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FImageCenterFocusCurve> @ 14d6771b0

bool __cdecl
UE::CoreUObject::Private::Copy<FImageCenterFocusCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FRichCurve::operator=(param_1,param_2);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x80),(FRichCurve *)((longlong)param_2 + 0x80));
    pFVar1 = (FRichCurve *)((longlong)param_2 + 0x100);
    param_2 = &((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    *(int *)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ = (int)pFVar1->_padding_;
    param_1 = &((FRichCurve *)((longlong)param_1 + 0x100))->_padding_;
  }
  return true;
}

// Construct<FDistortionCalibrationResult> @ 14d6773d0

void __cdecl UE::CoreUObject::Private::Construct<FDistortionCalibrationResult>(void *param_1)

{
  memset(param_1,0,0xc0);
  FDistortionCalibrationResult::FDistortionCalibrationResult(param_1);
  return;
}

// ConstructForTests<FDistortionCalibrationResult> @ 14d677400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDistortionCalibrationResult>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ffc71c71c71c71c;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3fe0000000000000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x68) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x78) = dVar2;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined2 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9a) = 1;
  FText::FText((FText *)((longlong)param_1 + 0xb0));
  return;
}

// Destruct<FDistortionCalibrationResult> @ 14d677410

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionCalibrationResult>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0xb0) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FDistortionCalibrationResult> @ 14d6774b0

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionCalibrationResult>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    pvVar7 = param_2;
    puVar8 = param_1;
    do {
      pFVar1 = (ForAnyElementType *)(puVar8 + 0xc);
      *puVar8 = *(undefined4 *)((longlong)puVar8 + ((longlong)param_2 - (longlong)param_1));
      puVar8[1] = *(undefined4 *)((longlong)pvVar7 + 4);
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)((longlong)pvVar7 + 8);
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x18);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)((longlong)pvVar7 + 0x10);
      *(undefined8 *)(puVar8 + 6) = uVar6;
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x28);
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)((longlong)pvVar7 + 0x20);
      *(undefined8 *)(puVar8 + 10) = uVar6;
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar7 + 0x30)) {
        iVar3 = *(int *)((longlong)pvVar7 + 0x38);
        piVar2 = puVar8 + 0xf;
        _Src = ((ForAnyElementType *)((longlong)pvVar7 + 0x30))->Data;
        puVar8[0xe] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x60);
          }
        }
      }
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x48);
      *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)((longlong)pvVar7 + 0x40);
      *(undefined8 *)(puVar8 + 0x12) = uVar6;
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x58);
      *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)((longlong)pvVar7 + 0x50);
      *(undefined8 *)(puVar8 + 0x16) = uVar6;
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x68);
      *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)((longlong)pvVar7 + 0x60);
      *(undefined8 *)(puVar8 + 0x1a) = uVar6;
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x78);
      *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)((longlong)pvVar7 + 0x70);
      *(undefined8 *)(puVar8 + 0x1e) = uVar6;
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar8 + 0x20),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x80));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar7 + 0x90) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar7 + 0x90));
      }
      *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)((longlong)pvVar7 + 0x90);
      *(undefined2 *)(puVar8 + 0x26) = *(undefined2 *)((longlong)pvVar7 + 0x98);
      *(undefined1 *)((longlong)puVar8 + 0x9a) = *(undefined1 *)((longlong)pvVar7 + 0x9a);
      ::FString::operator=((FString *)(puVar8 + 0x28),(FString *)((longlong)pvVar7 + 0xa0));
      plVar4 = *(longlong **)((longlong)pvVar7 + 0xb0);
      plVar5 = *(longlong **)(puVar8 + 0x2c);
      if (plVar5 != plVar4) {
        *(longlong **)(puVar8 + 0x2c) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,local_res18);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      puVar8[0x2e] = *(undefined4 *)((longlong)pvVar7 + 0xb8);
      param_3 = param_3 + -1;
      pvVar7 = (void *)((longlong)pvVar7 + 0xc0);
      puVar8 = puVar8 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImageCenterFocusPoint> @ 14d677800

void __cdecl UE::CoreUObject::Private::Construct<FImageCenterFocusPoint>(void *param_1)

{
  memset(param_1,0,0x110);
  FImageCenterFocusPoint::FImageCenterFocusPoint(param_1);
  return;
}

// ConstructForTests<FImageCenterFocusPoint> @ 14d677830

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageCenterFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FImageCenterFocusPoint__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FImageCenterFocusPoint> @ 14d677840

void __cdecl UE::CoreUObject::Private::Destruct<FImageCenterFocusPoint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FImageCenterFocusPoint> @ 14d677890

bool __cdecl
UE::CoreUObject::Private::Copy<FImageCenterFocusPoint>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x90),(FRichCurve *)((longlong)param_2 + 0x90));
    param_2 = (void *)((longlong)param_2 + 0x110);
    param_1 = (void *)((longlong)param_1 + 0x110);
  }
  return true;
}

// Construct<FNodalOffsetPointInfo> @ 14d677990

void __cdecl UE::CoreUObject::Private::Construct<FNodalOffsetPointInfo>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  return;
}

// ConstructForTests<FNodalOffsetPointInfo> @ 14d6779d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodalOffsetPointInfo>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  return;
}

// Construct<FLensFileEvaluationInputs> @ 14d677a10

void __cdecl UE::CoreUObject::Private::Construct<FLensFileEvaluationInputs>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3faa3d71;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FNodalOffsetPointInfo> @ 14d677a50

void __cdecl UE::CoreUObject::Private::Destruct<FNodalOffsetPointInfo>(void *param_1)

{
  return;
}

// ConstructForTests<FLensFileEvaluationInputs> @ 14d677a60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLensFileEvaluationInputs>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x41c71eb8;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3faa3d71;
  return;
}

// Destruct<FLensFileEvaluationInputs> @ 14d677a90

void __cdecl UE::CoreUObject::Private::Destruct<FLensFileEvaluationInputs>(void *param_1)

{
  return;
}

// Copy<FNodalOffsetPointInfo> @ 14d677ae0

bool __cdecl
UE::CoreUObject::Private::Copy<FNodalOffsetPointInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FLensFileEvaluationInputs> @ 14d677b30

bool __cdecl
UE::CoreUObject::Private::Copy<FLensFileEvaluationInputs>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCalibratedMapFormat> @ 14d677c40

void __cdecl UE::CoreUObject::Private::Construct<FCalibratedMapFormat>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// ConstructForTests<FCalibratedMapFormat> @ 14d677c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCalibratedMapFormat>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Destruct<FCalibratedMapFormat> @ 14d677c60

void __cdecl UE::CoreUObject::Private::Destruct<FCalibratedMapFormat>(void *param_1)

{
  return;
}

// Copy<FCalibratedMapFormat> @ 14d677d10

bool __cdecl
UE::CoreUObject::Private::Copy<FCalibratedMapFormat>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocalLengthTable> @ 14d677f10

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFocalLengthTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FFocalLengthTable> @ 14d678080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFocalLengthTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FFocalLengthTable> @ 14d6780b0

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthTable>(void *param_1)

{
  DestructItems<FFocalLengthFocusCurve,int>
            (*(FFocalLengthFocusCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FFocalLengthFocusPoint,int>
            (*(FFocalLengthFocusPoint **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FFocalLengthTable> @ 14d678180

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthTable>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FFocalLengthFocusPoint *pFVar4;
  FFocalLengthFocusCurve *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FFocalLengthFocusPoint,int>
                ((FFocalLengthFocusPoint *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FFocalLengthFocusPoint *)((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FFocalLengthFocusPoint,FFocalLengthFocusPoint,int>(pFVar1->Data,pFVar4,iVar3)
        ;
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FFocalLengthFocusCurve,int>
                ((FFocalLengthFocusCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FFocalLengthFocusCurve *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x108,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FFocalLengthFocusCurve,FFocalLengthFocusCurve,int>(pFVar1->Data,pFVar5,iVar3)
        ;
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FImageCenterPointInfo> @ 14d678390

void __cdecl UE::CoreUObject::Private::Construct<FImageCenterPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3fe0000000000000;
  return;
}

// ConstructForTests<FImageCenterPointInfo> @ 14d6783b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageCenterPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3fe0000000000000;
  return;
}

// Construct<FLensFilePicker> @ 14d6783d0

void __cdecl UE::CoreUObject::Private::Construct<FLensFilePicker>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FImageCenterPointInfo> @ 14d6783e0

void __cdecl UE::CoreUObject::Private::Destruct<FImageCenterPointInfo>(void *param_1)

{
  return;
}

// ConstructForTests<FLensFilePicker> @ 14d678430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLensFilePicker>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLensFilePicker> @ 14d678450

void __cdecl UE::CoreUObject::Private::Destruct<FLensFilePicker>(void *param_1)

{
  return;
}

// Copy<FImageCenterPointInfo> @ 14d678460

bool __cdecl
UE::CoreUObject::Private::Copy<FImageCenterPointInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FLensFilePicker> @ 14d6784a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLensFilePicker>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocalLengthFocusCurve> @ 14d678870

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthFocusCurve>(void *param_1)

{
  memset(param_1,0,0x108);
  FFocalLengthFocusCurve::FFocalLengthFocusCurve(param_1);
  return;
}

// ConstructForTests<FFocalLengthFocusCurve> @ 14d6788a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  return;
}

// Destruct<FFocalLengthFocusCurve> @ 14d6788b0

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthFocusCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FFocalLengthFocusCurve> @ 14d6788d0

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthFocusCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FRichCurve::operator=(param_1,param_2);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x80),(FRichCurve *)((longlong)param_2 + 0x80));
    pFVar1 = (FRichCurve *)((longlong)param_2 + 0x100);
    param_2 = &((FRichCurve *)((longlong)param_2 + 0x100))->_padding_;
    *(int *)&((FRichCurve *)((longlong)param_1 + 0x100))->_padding_ = (int)pFVar1->_padding_;
    param_1 = &((FRichCurve *)((longlong)param_1 + 0x100))->_padding_;
  }
  return true;
}

// Construct<FSTMapPointInfo> @ 14d6789b0

void __cdecl UE::CoreUObject::Private::Construct<FSTMapPointInfo>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSTMapPointInfo> @ 14d6789d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapPointInfo>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSTMapPointInfo> @ 14d6789f0

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapPointInfo>(void *param_1)

{
  return;
}

// Copy<FSTMapPointInfo> @ 14d678a40

bool __cdecl
UE::CoreUObject::Private::Copy<FSTMapPointInfo>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x12);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLensDistortionState> @ 14d679020

void __cdecl UE::CoreUObject::Private::Construct<FLensDistortionState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ffc71c71c71c71c;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3fe0000000000000;
  return;
}

// ConstructForTests<FLensDistortionState> @ 14d679060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLensDistortionState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ffc71c71c71c71c;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3fe0000000000000;
  return;
}

// Destruct<FLensDistortionState> @ 14d6790a0

void __cdecl UE::CoreUObject::Private::Destruct<FLensDistortionState>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FLensDistortionState> @ 14d6790c0

bool __cdecl
UE::CoreUObject::Private::Copy<FLensDistortionState>(void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<float,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      iVar2 = pTVar1[1].ArrayNum;
      iVar3 = pTVar1[1].ArrayMax;
      this[1].AllocatorInstance.Data = pTVar1[1].AllocatorInstance.Data;
      this[1].ArrayNum = iVar2;
      this[1].ArrayMax = iVar3;
      iVar2 = pTVar1[2].ArrayNum;
      iVar3 = pTVar1[2].ArrayMax;
      this[2].AllocatorInstance.Data = pTVar1[2].AllocatorInstance.Data;
      this[2].ArrayNum = iVar2;
      this[2].ArrayMax = iVar3;
      param_3 = param_3 + -1;
      this = this + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocalLengthFocusPoint> @ 14d679140

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthFocusPoint>(void *param_1)

{
  memset(param_1,0,0x120);
  FFocalLengthFocusPoint::FFocalLengthFocusPoint(param_1);
  return;
}

// ConstructForTests<FFocalLengthFocusPoint> @ 14d679170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FFocalLengthFocusPoint__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  return;
}

// Destruct<FFocalLengthFocusPoint> @ 14d679180

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthFocusPoint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FFocalLengthFocusPoint> @ 14d679250

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthFocusPoint>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x90),(FRichCurve *)((longlong)param_2 + 0x90));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x110);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x110)) {
      iVar3 = *(int *)((longlong)param_2 + 0x118);
      piVar1 = (int *)((longlong)param_1 + 0x11c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x110))->Data;
      *(int *)((longlong)param_1 + 0x118) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 5);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x120);
    param_2 = (void *)((longlong)param_2 + 0x120);
  }
  return true;
}

// Construct<FFocalLengthPointInfo> @ 14d6793e0

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ffc71c71c71c71c;
  return;
}

// ConstructForTests<FFocalLengthPointInfo> @ 14d679410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ffc71c71c71c71c;
  return;
}

// Destruct<FFocalLengthPointInfo> @ 14d679440

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthPointInfo>(void *param_1)

{
  return;
}

// Copy<FFocalLengthPointInfo> @ 14d6794d0

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthPointInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocalLengthZoomPoint> @ 14d679a10

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthZoomPoint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ffc71c71c71c71c;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FFocalLengthZoomPoint> @ 14d679a50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthZoomPoint>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ffc71c71c71c71c;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FFocalLengthZoomPoint> @ 14d679a80

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthZoomPoint>(void *param_1)

{
  return;
}

// Copy<FFocalLengthZoomPoint> @ 14d679a90

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthZoomPoint>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDistortionPointInfo> @ 14d679ad0

void __cdecl UE::CoreUObject::Private::Construct<FDistortionPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FDistortionPointInfo> @ 14d679af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionPointInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FDistortionPointInfo> @ 14d679b10

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionPointInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDistortionPointInfo> @ 14d679b30

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionPointInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 1),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLensDataCategoryEditorColor> @ 14d679bd0

void __cdecl UE::CoreUObject::Private::Construct<FLensDataCategoryEditorColor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(FColor_u_0 *)param_1 = FColor::Red.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 4))->_s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 = (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 = (FColor_u_0_s_0)FColor::Orange.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FColor_u_0_s_0)FColor::Purple.field0_0x0;
  return;
}

// ConstructForTests<FLensDataCategoryEditorColor> @ 14d679fe0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLensDataCategoryEditorColor>(void *param_1)

{
  *(FColor_u_0 *)param_1 = FColor::Red.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 4))->_s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 8))->_s_0 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0xc))->_s_0 = (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x10))->_s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x14))->_s_0 = (FColor_u_0_s_0)FColor::Orange.field0_0x0;
  ((FColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 = (FColor_u_0_s_0)FColor::Purple.field0_0x0;
  return;
}

// Destruct<FLensDataCategoryEditorColor> @ 14d67a030

void __cdecl UE::CoreUObject::Private::Destruct<FLensDataCategoryEditorColor>(void *param_1)

{
  return;
}

// Construct<FEncodersTable> @ 14d67a080

void __cdecl UE::CoreUObject::Private::Construct<FEncodersTable>(void *param_1)

{
  memset(param_1,0,0x100);
  FEncodersTable::FEncodersTable(param_1);
  return;
}

// ConstructForTests<FEncodersTable> @ 14d67a0b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEncodersTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  return;
}

// Copy<FLensDataCategoryEditorColor> @ 14d67a0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FLensDataCategoryEditorColor>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FEncodersTable> @ 14d67a100

void __cdecl UE::CoreUObject::Private::Destruct<FEncodersTable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FEncodersTable> @ 14d67a150

bool __cdecl UE::CoreUObject::Private::Copy<FEncodersTable>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FRichCurve::operator=(this,pFVar1);
      FRichCurve::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataTablePointInfoBase> @ 14d67a230

void __cdecl UE::CoreUObject::Private::Construct<FDataTablePointInfoBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FDataTablePointInfoBase> @ 14d67a240

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataTablePointInfoBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FDataTablePointInfoBase> @ 14d67a250

void __cdecl UE::CoreUObject::Private::Destruct<FDataTablePointInfoBase>(void *param_1)

{
  return;
}

// Copy<FDataTablePointInfoBase> @ 14d67a330

bool __cdecl
UE::CoreUObject::Private::Copy<FDataTablePointInfoBase>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSTMapTable> @ 14d67a460

void __cdecl UE::CoreUObject::Private::Construct<FSTMapTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSTMapTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FSTMapTable> @ 14d67a4d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSTMapTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FSTMapTable> @ 14d67a500

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapTable>(void *param_1)

{
  DestructItems<FSTMapFocusCurve,int>
            (*(FSTMapFocusCurve **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FSTMapFocusPoint,int>
            (*(FSTMapFocusPoint **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FSTMapTable> @ 14d67a560

bool __cdecl UE::CoreUObject::Private::Copy<FSTMapTable>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FSTMapFocusPoint *pFVar4;
  FSTMapFocusCurve *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FSTMapFocusPoint,int>
                ((FSTMapFocusPoint *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FSTMapFocusPoint *)((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FSTMapFocusPoint,FSTMapFocusPoint,int>(pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FSTMapFocusCurve,int>
                ((FSTMapFocusCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FSTMapFocusCurve *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FSTMapFocusCurve,FSTMapFocusCurve,int>(pFVar1->Data,pFVar5,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FDistortionTable> @ 14d67a6f0

void __cdecl UE::CoreUObject::Private::Construct<FDistortionTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDistortionTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FDistortionTable> @ 14d67a720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDistortionTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FDistortionTable> @ 14d67a750

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionTable>(void *param_1)

{
  DestructItems<FDistortionFocusCurve,int>
            (*(FDistortionFocusCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FDistortionFocusPoint,int>
            (*(FDistortionFocusPoint **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FDistortionTable> @ 14d67a7a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionTable>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FDistortionFocusPoint *pFVar4;
  FDistortionFocusCurve *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FDistortionFocusPoint,int>
                ((FDistortionFocusPoint *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FDistortionFocusPoint *)((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FDistortionFocusPoint,FDistortionFocusPoint,int>(pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FDistortionFocusCurve,int>
                ((FDistortionFocusCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FDistortionFocusCurve *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FDistortionFocusCurve,FDistortionFocusCurve,int>(pFVar1->Data,pFVar5,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FDistortionData> @ 14d67a930

void __cdecl UE::CoreUObject::Private::Construct<FDistortionData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDistortionData> @ 14d67a950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDistortionData> @ 14d67a970

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDistortionData> @ 14d67a9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionData>(void *param_1,void *param_2,int param_3)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      *(undefined4 *)&this[1].AllocatorInstance.Data =
           *(undefined4 *)&pTVar1[1].AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&this[1].ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDistortionFocusCurve> @ 14d67aef0

void __cdecl UE::CoreUObject::Private::Construct<FDistortionFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FDistortionFocusCurve> @ 14d67af60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FDistortionFocusCurve> @ 14d67afc0

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionFocusCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FDistortionFocusCurve> @ 14d67b020

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionFocusCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FRichCurve::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FRichCurve *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodalPointOffset> @ 14d67b0e0

void __cdecl UE::CoreUObject::Private::Construct<FNodalPointOffset>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  return;
}

// ConstructForTests<FNodalPointOffset> @ 14d67b130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodalPointOffset>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  return;
}

// Destruct<FNodalPointOffset> @ 14d67b170

void __cdecl UE::CoreUObject::Private::Destruct<FNodalPointOffset>(void *param_1)

{
  return;
}

// Copy<FNodalPointOffset> @ 14d67b2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNodalPointOffset>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSTMapFocusCurve> @ 14d67b4a0

void __cdecl UE::CoreUObject::Private::Construct<FSTMapFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FSTMapFocusCurve> @ 14d67b510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FSTMapFocusCurve> @ 14d67b570

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapFocusCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FSTMapFocusCurve> @ 14d67b8f0

bool __cdecl
UE::CoreUObject::Private::Copy<FSTMapFocusCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FRichCurve::operator=(this,pFVar1);
      *(int *)&this[1]._padding_ = (int)pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FRichCurve *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDistortionFocusPoint> @ 14d67ba70

void __cdecl UE::CoreUObject::Private::Construct<FDistortionFocusPoint>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)param_1 = &___7FDistortionFocusPoint__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FDistortionFocusPoint> @ 14d67bbc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FDistortionFocusPoint__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FDistortionFocusPoint> @ 14d67bc40

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionFocusPoint>(void *param_1)

{
  DestructItems<FDistortionZoomPoint,int>
            (*(FDistortionZoomPoint **)((longlong)param_1 + 0x90),*(int *)((longlong)param_1 + 0x98)
            );
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FDistortionFocusPoint> @ 14d67bc50

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionFocusPoint>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FDistortionZoomPoint *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x90);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x90)) {
      DestructItems<FDistortionZoomPoint,int>
                ((FDistortionZoomPoint *)pFVar4->Data,*(int *)((longlong)param_1 + 0x98));
      iVar2 = *(int *)((longlong)param_2 + 0x98);
      piVar1 = (int *)((longlong)param_1 + 0x9c);
      pFVar3 = (FDistortionZoomPoint *)((ForAnyElementType *)((longlong)param_2 + 0x90))->Data;
      *(int *)((longlong)param_1 + 0x98) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FDistortionZoomPoint,FDistortionZoomPoint,int>(pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0xa0);
    param_2 = (void *)((longlong)param_2 + 0xa0);
  }
  return true;
}

// Construct<FImageCenterInfo> @ 14d67bdd0

void __cdecl UE::CoreUObject::Private::Construct<FImageCenterInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  return;
}

// ConstructForTests<FImageCenterInfo> @ 14d67bdf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageCenterInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3fe0000000000000;
  return;
}

// Destruct<FImageCenterInfo> @ 14d67be10

void __cdecl UE::CoreUObject::Private::Destruct<FImageCenterInfo>(void *param_1)

{
  return;
}

// Copy<FImageCenterInfo> @ 14d67be20

bool __cdecl
UE::CoreUObject::Private::Copy<FImageCenterInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSTMapFocusPoint> @ 14d67be50

void __cdecl UE::CoreUObject::Private::Construct<FSTMapFocusPoint>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)param_1 = &___7FSTMapFocusPoint__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FSTMapFocusPoint> @ 14d67bee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSTMapFocusPoint__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FSTMapFocusPoint> @ 14d67bf60

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapFocusPoint>(void *param_1)

{
  DestructItems<FSTMapZoomPoint,int>
            (*(FSTMapZoomPoint **)((longlong)param_1 + 0x90),*(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FSTMapFocusPoint> @ 14d67bf70

bool __cdecl
UE::CoreUObject::Private::Copy<FSTMapFocusPoint>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FSTMapZoomPoint *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    FRichCurve::operator=
              ((FRichCurve *)((longlong)param_1 + 0x10),(FRichCurve *)((longlong)param_2 + 0x10));
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x90);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x90)) {
      DestructItems<FSTMapZoomPoint,int>
                ((FSTMapZoomPoint *)pFVar4->Data,*(int *)((longlong)param_1 + 0x98));
      iVar2 = *(int *)((longlong)param_2 + 0x98);
      piVar1 = (int *)((longlong)param_1 + 0x9c);
      pFVar3 = (FSTMapZoomPoint *)((ForAnyElementType *)((longlong)param_2 + 0x90))->Data;
      *(int *)((longlong)param_1 + 0x98) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FSTMapZoomPoint,FSTMapZoomPoint,int>(pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0xa0);
    param_2 = (void *)((longlong)param_2 + 0xa0);
  }
  return true;
}

// Construct<FDistortionZoomPoint> @ 14d67c070

void __cdecl UE::CoreUObject::Private::Construct<FDistortionZoomPoint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FDistortionZoomPoint> @ 14d67c090

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionZoomPoint>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FDistortionZoomPoint> @ 14d67c0b0

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionZoomPoint>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDistortionZoomPoint> @ 14d67c110

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionZoomPoint>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 2),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSTMapInfo> @ 14d67c390

void __cdecl UE::CoreUObject::Private::Construct<FSTMapInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// ConstructForTests<FSTMapInfo> @ 14d67c3b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Destruct<FSTMapInfo> @ 14d67c3d0

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapInfo>(void *param_1)

{
  return;
}

// Copy<FSTMapInfo> @ 14d67c5a0

bool __cdecl UE::CoreUObject::Private::Copy<FSTMapInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar2 + 10) = *(undefined1 *)((longlong)puVar1 + 10);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSTMapZoomPoint> @ 14d67c7d0

void __cdecl UE::CoreUObject::Private::Construct<FSTMapZoomPoint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// ConstructForTests<FSTMapZoomPoint> @ 14d67c810

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSTMapZoomPoint>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Destruct<FSTMapZoomPoint> @ 14d67c850

void __cdecl UE::CoreUObject::Private::Destruct<FSTMapZoomPoint>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSTMapZoomPoint> @ 14d67c8b0

bool __cdecl
UE::CoreUObject::Private::Copy<FSTMapZoomPoint>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      *(undefined2 *)((longlong)param_1 + 0x10) = *(undefined2 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x12);
      FDerivedDistortionData::operator=
                ((FDerivedDistortionData *)((longlong)param_1 + 0x18),
                 (FDerivedDistortionData *)((longlong)param_1 + lVar2 + 0x18));
      *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBaseLensTable> @ 14d67cb60

void __cdecl UE::CoreUObject::Private::Construct<FBaseLensTable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseLensTable__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBaseLensTable> @ 14d67cbc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBaseLensTable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseLensTable__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBaseLensTable> @ 14d67cbe0

void __cdecl UE::CoreUObject::Private::Destruct<FBaseLensTable>(void *param_1)

{
  return;
}

// Copy<FBaseLensTable> @ 14d67cc30

bool __cdecl UE::CoreUObject::Private::Copy<FBaseLensTable>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined8 *)((longlong)pvVar1 + 8) =
           *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFocalLengthInfo> @ 14d67cd90

void __cdecl UE::CoreUObject::Private::Construct<FFocalLengthInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ffc71c71c71c71c;
  return;
}

// ConstructForTests<FFocalLengthInfo> @ 14d67ce00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFocalLengthInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ffc71c71c71c71c;
  return;
}

// Destruct<FFocalLengthInfo> @ 14d67ce30

void __cdecl UE::CoreUObject::Private::Destruct<FFocalLengthInfo>(void *param_1)

{
  return;
}

// Copy<FFocalLengthInfo> @ 14d67cec0

bool __cdecl
UE::CoreUObject::Private::Copy<FFocalLengthInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDerivedDistortionData> @ 14d67d1a0

void __cdecl UE::CoreUObject::Private::Construct<FDerivedDistortionData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FDerivedDistortionData> @ 14d67d1d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDerivedDistortionData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FDerivedDistortionData> @ 14d67d200

void __cdecl UE::CoreUObject::Private::Destruct<FDerivedDistortionData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDerivedDistortionData> @ 14d67d5a0

bool __cdecl
UE::CoreUObject::Private::Copy<FDerivedDistortionData>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  int iVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    *(undefined4 *)
     &(((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10)
       )->AllocatorInstance).Data =
         *(undefined4 *)
          &(((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)
         &((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x10))->ArrayNum != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)
                           &((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                            ((longlong)param_2 + 0x10))->ArrayNum);
    }
    iVar2 = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x10))->ArrayMax;
    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
    ArrayNum = ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10))->ArrayNum;
    ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
    ArrayMax = iVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)
                 (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x20))->AllocatorInstance).Data, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))
    ->AllocatorInstance).Data =
         (((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    *(char *)&((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x20))->ArrayNum =
         (char)((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20))->ArrayNum;
    param_1 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x30);
    param_2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FBaseFocusCurve> @ 14d67d7e0

void __cdecl UE::CoreUObject::Private::Construct<FBaseFocusCurve>(void *param_1)

{
  return;
}

// ConstructForTests<FBaseFocusCurve> @ 14d67d7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBaseFocusCurve>(void *param_1)

{
  return;
}

// Construct<FDistortionInfo> @ 14d67d880

void __cdecl UE::CoreUObject::Private::Construct<FDistortionInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDistortionInfo> @ 14d67d890

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDistortionInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDistortionInfo> @ 14d67d8e0

void __cdecl UE::CoreUObject::Private::Destruct<FDistortionInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDistortionInfo> @ 14d67d910

bool __cdecl
UE::CoreUObject::Private::Copy<FDistortionInfo>(void *param_1,void *param_2,int param_3)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<float,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodalOffsetTable> @ 14d67e020

void __cdecl UE::CoreUObject::Private::Construct<FNodalOffsetTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNodalOffsetTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FNodalOffsetTable> @ 14d67e100

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodalOffsetTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNodalOffsetTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FNodalOffsetTable> @ 14d67e1e0

void __cdecl UE::CoreUObject::Private::Destruct<FNodalOffsetTable>(void *param_1)

{
  DestructItems<FNodalOffsetFocusCurve,int>
            (*(FNodalOffsetFocusCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FNodalOffsetFocusPoint,int>
            (*(FNodalOffsetFocusPoint **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FNodalOffsetTable> @ 14d67e230

bool __cdecl
UE::CoreUObject::Private::Copy<FNodalOffsetTable>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FNodalOffsetFocusPoint *pFVar4;
  FNodalOffsetFocusCurve *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FNodalOffsetFocusPoint,int>
                ((FNodalOffsetFocusPoint *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FNodalOffsetFocusPoint *)((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x310,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FNodalOffsetFocusPoint,FNodalOffsetFocusPoint,int>(pFVar1->Data,pFVar4,iVar3)
        ;
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FNodalOffsetFocusCurve,int>
                ((FNodalOffsetFocusCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FNodalOffsetFocusCurve *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x308,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FNodalOffsetFocusCurve,FNodalOffsetFocusCurve,int>(pFVar1->Data,pFVar5,iVar3)
        ;
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// Construct<FSimulcamInfo> @ 14d67e550

void __cdecl UE::CoreUObject::Private::Construct<FSimulcamInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSimulcamInfo> @ 14d67e560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSimulcamInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSimulcamInfo> @ 14d67e570

void __cdecl UE::CoreUObject::Private::Destruct<FSimulcamInfo>(void *param_1)

{
  return;
}

// Copy<FSimulcamInfo> @ 14d67e630

bool __cdecl UE::CoreUObject::Private::Copy<FSimulcamInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBaseFocusPoint> @ 14d67e660

void __cdecl UE::CoreUObject::Private::Construct<FBaseFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseFocusPoint__6B_;
  return;
}

// ConstructForTests<FBaseFocusPoint> @ 14d67e680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBaseFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseFocusPoint__6B_;
  return;
}

// Destruct<FBaseFocusPoint> @ 14d67e6e0

void __cdecl UE::CoreUObject::Private::Destruct<FBaseFocusPoint>(void *param_1)

{
  return;
}

// Copy<FBaseFocusPoint> @ 14d67e6f0

bool __cdecl
UE::CoreUObject::Private::Copy<FBaseFocusPoint>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FNodalOffsetFocusCurve> @ 14d67e780

void __cdecl UE::CoreUObject::Private::Construct<FNodalOffsetFocusCurve>(void *param_1)

{
  memset(param_1,0,0x308);
  FNodalOffsetFocusCurve::FNodalOffsetFocusCurve(param_1);
  return;
}

// ConstructForTests<FNodalOffsetFocusCurve> @ 14d67e7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodalOffsetFocusCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined4 *)((longlong)param_1 + 0x230) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x268) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x26c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x200) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2ec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x280) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x300) = 0;
  return;
}

// Destruct<FNodalOffsetFocusCurve> @ 14d67e800

void __cdecl UE::CoreUObject::Private::Destruct<FNodalOffsetFocusCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f0));
  }
  *(undefined ***)((longlong)param_1 + 0x280) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x2d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d8));
  }
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0;
  if (*(void **)((longlong)param_1 + 0x2c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x288));
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  *(undefined ***)((longlong)param_1 + 0x200) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  *(undefined4 *)((longlong)param_1 + 0x250) = 0;
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x208));
  if (*(void **)((longlong)param_1 + 0x1f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f0));
  }
  *(undefined ***)((longlong)param_1 + 0x180) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  if (*(void **)((longlong)param_1 + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x188));
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FNodalOffsetFocusCurve> @ 14d67e850

bool __cdecl
UE::CoreUObject::Private::Copy<FNodalOffsetFocusCurve>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x70);
    *(undefined1 *)((longlong)pvVar5 + 0x6c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6d - (longlong)param_1));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x7c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0xf0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xe8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xe8 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0xf0);
    *(undefined1 *)((longlong)pvVar5 + 0xec) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xec - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0xed) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xed - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0xf8 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0xfc);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x170 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x168) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x168 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x170);
    *(undefined1 *)((longlong)pvVar5 + 0x16c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x16d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x178 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x17c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x178) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x1f0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x1e8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x1e8 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x1f0);
    *(undefined1 *)((longlong)pvVar5 + 0x1ec) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ec - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x1ed) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x1ed - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x1f8 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1fc);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x1f8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x270 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x268) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x268 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x270);
    *(undefined1 *)((longlong)pvVar5 + 0x26c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x26c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x26d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x26d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x278 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x27c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x278) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0x2f0);
    *(undefined4 *)((longlong)pvVar5 + 0x2e8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x2e8 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x2ec) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x2ec - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x2ed) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x2ed - (longlong)param_1));
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0x2f0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0x2f8);
      piVar2 = (int *)((longlong)pvVar5 + 0x2fc);
      pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0x2f0))->Data;
      *(int *)((longlong)pvVar5 + 0x2f8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0x300) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x300 - (longlong)param_1));
    pvVar5 = (void *)((longlong)pvVar5 + 0x308);
    pvVar6 = (void *)((longlong)pvVar6 + 0x308);
  }
  return true;
}

// Construct<FCameraFeedInfo> @ 14d67ef70

void __cdecl UE::CoreUObject::Private::Construct<FCameraFeedInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FCameraFeedInfo> @ 14d67ef80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraFeedInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FCameraFeedInfo> @ 14d67efa0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraFeedInfo>(void *param_1)

{
  return;
}

// Copy<FCameraFeedInfo> @ 14d67f000

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraFeedInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSphericalDistortionParameters> @ 14d67f170

void __cdecl UE::CoreUObject::Private::Construct<FSphericalDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSphericalDistortionParameters> @ 14d67f1d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSphericalDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSphericalDistortionParameters> @ 14d67f200

void __cdecl UE::CoreUObject::Private::Destruct<FSphericalDistortionParameters>(void *param_1)

{
  return;
}

// Copy<FSphericalDistortionParameters> @ 14d67f260

bool __cdecl
UE::CoreUObject::Private::Copy<FSphericalDistortionParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodalOffsetFocusPoint> @ 14d67f750

void __cdecl UE::CoreUObject::Private::Construct<FNodalOffsetFocusPoint>(void *param_1)

{
  memset(param_1,0,0x310);
  FNodalOffsetFocusPoint::FNodalOffsetFocusPoint(param_1);
  return;
}

// ConstructForTests<FNodalOffsetFocusPoint> @ 14d67f900

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodalOffsetFocusPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNodalOffsetFocusPoint__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x110) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0x404;
  *(undefined ***)((longlong)param_1 + 400) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x248) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined4 *)((longlong)param_1 + 0x278) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x210) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x290) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  return;
}

// Destruct<FNodalOffsetFocusPoint> @ 14d67f910

void __cdecl UE::CoreUObject::Private::Destruct<FNodalOffsetFocusPoint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x300));
  }
  *(undefined ***)((longlong)param_1 + 0x290) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x2e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2e8));
  }
  *(undefined4 *)((longlong)param_1 + 0x2e0) = 0;
  if (*(void **)((longlong)param_1 + 0x2d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x298));
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  *(undefined ***)((longlong)param_1 + 0x210) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  if (*(void **)((longlong)param_1 + 600) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 600));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x218));
  if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x200));
  }
  *(undefined ***)((longlong)param_1 + 400) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1e0) = 0;
  if (*(void **)((longlong)param_1 + 0x1d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1d8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x198));
  if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x180));
  }
  *(undefined ***)((longlong)param_1 + 0x110) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  *(undefined4 *)((longlong)param_1 + 0x160) = 0;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x118));
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  *(undefined ***)((longlong)param_1 + 0x90) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FNodalOffsetFocusPoint> @ 14d67f9e0

bool __cdecl
UE::CoreUObject::Private::Copy<FNodalOffsetFocusPoint>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  void *pvVar6;
  void *pvVar7;
  int local_res18;
  
  if (param_3 != 0) {
    pvVar6 = param_2;
    pvVar7 = param_1;
    local_res18 = param_3;
    do {
      pvVar2 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar7);
      *(undefined4 *)((longlong)pvVar7 + 8) = *(undefined4 *)((longlong)pvVar2 + 8);
      *(undefined4 *)((longlong)pvVar7 + 0x78) = *(undefined4 *)((longlong)pvVar2 + 0x78);
      *(undefined1 *)((longlong)pvVar7 + 0x7c) = *(undefined1 *)((longlong)pvVar2 + 0x7c);
      pFVar5 = (ForAnyElementType *)((longlong)pvVar7 + 0x80);
      *(undefined1 *)((longlong)pvVar7 + 0x7d) = *(undefined1 *)((longlong)pvVar2 + 0x7d);
      if (pFVar5 != (ForAnyElementType *)((longlong)pvVar6 + 0x80)) {
        iVar3 = *(int *)((longlong)pvVar6 + 0x88);
        piVar1 = (int *)((longlong)pvVar7 + 0x8c);
        _Src = ((ForAnyElementType *)((longlong)pvVar6 + 0x80))->Data;
        *(int *)((longlong)pvVar7 + 0x88) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar7 + 0xf8) = *(undefined4 *)((longlong)pvVar2 + 0xf8);
      *(undefined1 *)((longlong)pvVar7 + 0xfc) = *(undefined1 *)((longlong)pvVar2 + 0xfc);
      *(undefined1 *)((longlong)pvVar7 + 0xfd) = *(undefined1 *)((longlong)pvVar2 + 0xfd);
      if (pvVar7 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 0x108);
        piVar1 = (int *)((longlong)pvVar7 + 0x10c);
        pvVar4 = *(void **)((longlong)pvVar2 + 0x100);
        *(int *)((longlong)pvVar7 + 0x108) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar7 + 0x100),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar7 + 0x100))->Data,pvVar4,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar7 + 0x178) = *(undefined4 *)((longlong)pvVar2 + 0x178);
      *(undefined1 *)((longlong)pvVar7 + 0x17c) = *(undefined1 *)((longlong)pvVar2 + 0x17c);
      *(undefined1 *)((longlong)pvVar7 + 0x17d) = *(undefined1 *)((longlong)pvVar2 + 0x17d);
      if (pvVar7 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 0x188);
        piVar1 = (int *)((longlong)pvVar7 + 0x18c);
        pvVar4 = *(void **)((longlong)pvVar2 + 0x180);
        *(int *)((longlong)pvVar7 + 0x188) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar7 + 0x180),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar7 + 0x180))->Data,pvVar4,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar7 + 0x1f8) = *(undefined4 *)((longlong)pvVar2 + 0x1f8);
      *(undefined1 *)((longlong)pvVar7 + 0x1fc) = *(undefined1 *)((longlong)pvVar2 + 0x1fc);
      *(undefined1 *)((longlong)pvVar7 + 0x1fd) = *(undefined1 *)((longlong)pvVar2 + 0x1fd);
      if (pvVar7 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 0x208);
        piVar1 = (int *)((longlong)pvVar7 + 0x20c);
        pvVar4 = *(void **)((longlong)pvVar2 + 0x200);
        *(int *)((longlong)pvVar7 + 0x208) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar7 + 0x200),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar7 + 0x200))->Data,pvVar4,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar7 + 0x278) = *(undefined4 *)((longlong)pvVar2 + 0x278);
      *(undefined1 *)((longlong)pvVar7 + 0x27c) = *(undefined1 *)((longlong)pvVar2 + 0x27c);
      *(undefined1 *)((longlong)pvVar7 + 0x27d) = *(undefined1 *)((longlong)pvVar2 + 0x27d);
      if (pvVar7 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 0x288);
        piVar1 = (int *)((longlong)pvVar7 + 0x28c);
        pvVar4 = *(void **)((longlong)pvVar2 + 0x280);
        *(int *)((longlong)pvVar7 + 0x288) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar7 + 0x280),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar7 + 0x280))->Data,pvVar4,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar7 + 0x2f8) = *(undefined4 *)((longlong)pvVar2 + 0x2f8);
      *(undefined1 *)((longlong)pvVar7 + 0x2fc) = *(undefined1 *)((longlong)pvVar2 + 0x2fc);
      *(undefined1 *)((longlong)pvVar7 + 0x2fd) = *(undefined1 *)((longlong)pvVar2 + 0x2fd);
      if (pvVar7 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 0x308);
        piVar1 = (int *)((longlong)pvVar7 + 0x30c);
        pvVar2 = *(void **)((longlong)pvVar2 + 0x300);
        *(int *)((longlong)pvVar7 + 0x308) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar7 + 0x300),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar7 + 0x300))->Data,pvVar2,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      local_res18 = local_res18 + -1;
      pvVar6 = (void *)((longlong)pvVar6 + 0x310);
      pvVar7 = (void *)((longlong)pvVar7 + 0x310);
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FLensInfo> @ 14d680000

void __cdecl UE::CoreUObject::Private::Construct<FLensInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4037c28f60000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x402abae140000000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x780;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x438;
  return;
}

// ConstructForTests<FLensInfo> @ 14d680050

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLensInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x780;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x4037c28f60000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x402abae140000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  return;
}

// Destruct<FLensInfo> @ 14d6800a0

void __cdecl UE::CoreUObject::Private::Destruct<FLensInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLensInfo> @ 14d680160

bool __cdecl UE::CoreUObject::Private::Copy<FLensInfo>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(FScriptContainerElement **)((longlong)param_1 + 0x20) =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    param_1 = (int *)((longlong)param_1 + 0x48);
    param_2 = (int *)((longlong)param_2 + 0x48);
  }
  return true;
}

// Construct<FBrownConradyUDDistortionParameters> @ 14d680220

void __cdecl UE::CoreUObject::Private::Construct<FBrownConradyUDDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FBrownConradyUDDistortionParameters> @ 14d680280

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBrownConradyUDDistortionParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FBrownConradyUDDistortionParameters> @ 14d6802e0

void __cdecl UE::CoreUObject::Private::Destruct<FBrownConradyUDDistortionParameters>(void *param_1)

{
  return;
}

// Copy<FBrownConradyUDDistortionParameters> @ 14d6802f0

bool __cdecl
UE::CoreUObject::Private::Copy<FBrownConradyUDDistortionParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImageCenterTable> @ 14d6803b0

void __cdecl UE::CoreUObject::Private::Construct<FImageCenterTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FImageCenterTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FImageCenterTable> @ 14d6803e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageCenterTable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FImageCenterTable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FImageCenterTable> @ 14d680410

void __cdecl UE::CoreUObject::Private::Destruct<FImageCenterTable>(void *param_1)

{
  DestructItems<FImageCenterFocusCurve,int>
            (*(FImageCenterFocusCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FImageCenterFocusPoint,int>
            (*(FImageCenterFocusPoint **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FImageCenterTable> @ 14d680520

bool __cdecl
UE::CoreUObject::Private::Copy<FImageCenterTable>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FImageCenterFocusPoint *pFVar4;
  FImageCenterFocusCurve *pFVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x10)) {
      DestructItems<FImageCenterFocusPoint,int>
                ((FImageCenterFocusPoint *)pFVar1->Data,*(int *)((longlong)param_1 + 0x18));
      iVar3 = *(int *)((longlong)param_2 + 0x18);
      piVar2 = (int *)((longlong)param_1 + 0x1c);
      pFVar4 = (FImageCenterFocusPoint *)((ForAnyElementType *)((longlong)param_2 + 0x10))->Data;
      *(int *)((longlong)param_1 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x110,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FImageCenterFocusPoint,FImageCenterFocusPoint,int>(pFVar1->Data,pFVar4,iVar3)
        ;
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FImageCenterFocusCurve,int>
                ((FImageCenterFocusCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar5 = (FImageCenterFocusCurve *)((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x108,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FImageCenterFocusCurve,FImageCenterFocusCurve,int>(pFVar1->Data,pFVar5,iVar3)
        ;
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// DeleterFunc<FRHIGPUBufferReadback> @ 14d68eb90

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FRHIGPUBufferReadback>(void *param_1)

{
  FRHIGPUBufferReadback::~FRHIGPUBufferReadback((FRHIGPUBufferReadback *)((longlong)param_1 + 0x10))
  ;
  ::operator_delete(param_1,0x70);
  return;
}

// DereferenceIfNecessary<ULensFile,ULensFile_*_&> @ 14d68ebc0

ULensFile * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULensFile,ULensFile_*_&>(ULensFile **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>_> @ 14d6a1df0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>_>
          (ushort param_1,ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14d6a1eb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xb) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>_> @ 14d6a1f90

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14d6a2060

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xb) {
    iVar2 = 10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>_> @ 14d6a2120

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>_>
          (uint param_1,uint param_2,
          ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TArray<float,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

