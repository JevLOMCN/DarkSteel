// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 34

// StaticStruct @ 14d67b610

UScriptStruct * __cdecl FSTMapTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSTMapTable,(UObject *)pUVar1,L"STMapTable");
  }
  return Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton;
}

// AddPoint @ 14d6b6260

bool __thiscall
FSTMapTable::AddPoint
          (FSTMapTable *this,float param_1,float param_2,FSTMapInfo *param_3,float param_4,
          bool param_5)

{
  bool bVar1;
  
  bVar1 = LensDataTableUtils::AddPoint<FSTMapFocusPoint,FSTMapInfo>
                    (&this->FocusPoints,param_1,param_2,param_3,param_4,param_5);
  if (bVar1) {
    LensDataTableUtils::AddPointToFocusCurve<FSTMapFocusCurve,FSTMapInfo>
              (&this->FocusCurves,param_1,param_2,param_3,param_4);
  }
  return bVar1;
}

// BuildFocusCurves @ 14d6b7690

void __thiscall FSTMapTable::BuildFocusCurves(FSTMapTable *this)

{
  int *piVar1;
  
  DestructItems<FSTMapFocusCurve,int>
            ((FSTMapFocusCurve *)(this->FocusCurves).AllocatorInstance.Data,
             (this->FocusCurves).ArrayNum);
  piVar1 = &(this->FocusCurves).ArrayMax;
  (this->FocusCurves).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&(this->FocusCurves).AllocatorInstance,0,piVar1);
  }
  LensDataTableUtils::BuildFocusCurves<FSTMapFocusPoint,FSTMapFocusCurve>
            (&this->FocusPoints,&this->FocusCurves);
  return;
}

// BuildParameterCurveAtFocus @ 14d6b8440

bool __thiscall
FSTMapTable::BuildParameterCurveAtFocus
          (FSTMapTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_38d1b717) break;
    pFVar2 = pFVar2 + 0xa0;
  }
  FRichCurve::operator=(param_3,(FRichCurve *)(pFVar2 + 0x10));
  return true;
}

// BuildParameterCurveAtZoom @ 14d6b8b00

bool __thiscall
FSTMapTable::BuildParameterCurveAtZoom
          (FSTMapTable *this,float param_1,int param_2,FRichCurve *param_3)

{
  FRichCurve *pFVar1;
  FRichCurve *pFVar2;
  
  pFVar2 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = (FRichCurve *)((longlong)pFVar2 + (longlong)(this->FocusCurves).ArrayNum * 0x88);
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)&pFVar2[1]._padding_ - param_1) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) break;
    pFVar2 = (FRichCurve *)&pFVar2[1]._padding_;
  }
  FRichCurve::operator=(param_3,pFVar2);
  return true;
}

// CanEditCurveKeyAttributes @ 14d6b9230

bool __thiscall FSTMapTable::CanEditCurveKeyAttributes(FSTMapTable *this,int param_1)

{
  return true;
}

// CanEditCurveKeyPositions @ 14d6b92b0

bool __thiscall FSTMapTable::CanEditCurveKeyPositions(FSTMapTable *this,int param_1)

{
  return false;
}

// ChangeFocusPoint @ 14d6b9a80

void __thiscall
FSTMapTable::ChangeFocusPoint(FSTMapTable *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 extraout_var;
  FRichCurve *this_00;
  FRichCurve *pFVar3;
  float fVar4;
  undefined1 local_res8 [8];
  FKeyHandle local_48;
  
  fVar4 = param_1;
  LensDataTableUtils::ChangeFocusPoint<FSTMapFocusPoint>(&this->FocusPoints,param_1,param_2,param_3)
  ;
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar3 = (FRichCurve *)((longlong)this_00 + (longlong)iVar1 * 0x88);
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSTMapFocusCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar3) break;
    FRealCurve::FindKey((FRealCurve *)this_00,fVar4,param_1);
    FVar2 = FKeyHandle::Invalid();
    if (local_48.Index != *(uint *)CONCAT44(extraout_var,FVar2.Index)) {
      FRichCurve::SetKeyTime(this_00,local_48,param_2);
    }
    this_00 = (FRichCurve *)&this_00[1]._padding_;
  }
  return;
}

// ChangeZoomPoint @ 14d6ba350

void __thiscall
FSTMapTable::ChangeZoomPoint
          (FSTMapTable *this,float param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  TObjectPtr<UTexture>_u_0 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  
  LensDataTableUtils::ChangeZoomPoint<FSTMapFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  local_58.DebugPtr = (UTexture *)0x0;
  local_50 = 0;
  local_4e = 1;
  bVar1 = GetPoint(this,param_1,param_3,(FSTMapInfo *)&local_58.ObjectPtr,param_4);
  if (bVar1) {
    LensDataTableUtils::ChangeZoomInFocusCurves<FSTMapFocusCurve,FSTMapInfo>
              (&this->FocusCurves,param_1,param_2,param_3,(FSTMapInfo *)&local_58.ObjectPtr,param_4)
    ;
  }
  return;
}

// DoesFocusPointExists @ 14d6c09d0

bool __thiscall FSTMapTable::DoesFocusPointExists(FSTMapTable *this,float param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_2) break;
    pFVar2 = pFVar2 + 0xa0;
  }
  return true;
}

// DoesZoomPointExists @ 14d6c0be0

bool __thiscall
FSTMapTable::DoesZoomPointExists(FSTMapTable *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  TObjectPtr<UTexture>_u_0 local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  local_18.DebugPtr = (UTexture *)0x0;
  local_10 = 0;
  local_e = 1;
  bVar1 = GetPoint(this,param_1,param_2,(FSTMapInfo *)&local_18.ObjectPtr,param_3);
  return bVar1;
}

// ForEachPoint @ 14d6cb6c0

void __thiscall
FSTMapTable::ForEachPoint
          (FSTMapTable *this,TFunction<void___cdecl(FBaseFocusPoint_const_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [16];
  
  pFVar6 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSTMapFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_38);
    }
    if (pFVar6 == pFVar5) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar4 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_1->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,pFVar6);
    pFVar6 = pFVar6 + 0xa0;
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// GetBaseFocusPoint @ 14d6d2010

FBaseFocusPoint * __thiscall FSTMapTable::GetBaseFocusPoint(FSTMapTable *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBaseFocusPoint *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->FocusPoints).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->FocusPoints).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBaseFocusPoint *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FBaseFocusPoint *)
           ((this->FocusPoints).AllocatorInstance.Data + (longlong)param_1 * 0xa0);
  }
  return (FBaseFocusPoint *)0x0;
}

// GetFocusCurve @ 14d6d3f10

FSTMapFocusCurve * __thiscall
FSTMapTable::GetFocusCurve(FSTMapTable *this,float param_1,float param_2)

{
  FSTMapFocusCurve *pFVar1;
  FSTMapFocusCurve *pFVar2;
  
  pFVar2 = (FSTMapFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurve @ 14d6d3f60

FSTMapFocusCurve * __thiscall
FSTMapTable::GetFocusCurve(FSTMapTable *this,float param_1,float param_2)

{
  FSTMapFocusCurve *pFVar1;
  FSTMapFocusCurve *pFVar2;
  
  pFVar2 = (FSTMapFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusCurves).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapFocusCurve *)0x0;
    }
    if ((float)((uint)(pFVar2->Zoom - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2)
    break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusCurves @ 14d6d41b0

TArray<FSTMapFocusCurve,TSizedDefaultAllocator<32>_> * __thiscall
FSTMapTable::GetFocusCurves(FSTMapTable *this)

{
  return &this->FocusCurves;
}

// GetFocusCurves @ 14d6d41c0

TArrayView<FSTMapFocusCurve_const_,int> * __thiscall
FSTMapTable::GetFocusCurves
          (FSTMapTable *this,TArrayView<FSTMapFocusCurve_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSTMapFocusCurve_const_,int> *pTVar4;
  
  iVar1 = (this->FocusCurves).ArrayNum;
  __return_storage_ptr__->DataPtr = (FSTMapFocusCurve *)(this->FocusCurves).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSTMapFocusCurve_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoint @ 14d6d45d0

FSTMapFocusPoint * __thiscall
FSTMapTable::GetFocusPoint(FSTMapTable *this,float param_1,float param_2)

{
  FSTMapFocusPoint *pFVar1;
  FSTMapFocusPoint *pFVar2;
  
  pFVar2 = (FSTMapFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPoint @ 14d6d4630

FSTMapFocusPoint * __thiscall
FSTMapTable::GetFocusPoint(FSTMapTable *this,float param_1,float param_2)

{
  FSTMapFocusPoint *pFVar1;
  FSTMapFocusPoint *pFVar2;
  
  pFVar2 = (FSTMapFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->FocusPoints).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FSTMapFocusPoint *)0x0;
    }
    if ((float)((uint)(pFVar2->Focus - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= param_2
       ) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetFocusPointNum @ 14d6d4710

int __thiscall FSTMapTable::GetFocusPointNum(FSTMapTable *this)

{
  return (this->FocusPoints).ArrayNum;
}

// GetFocusPoints @ 14d6d4920

TArrayView<FSTMapFocusPoint,int> * __thiscall
FSTMapTable::GetFocusPoints
          (FSTMapTable *this,TArrayView<FSTMapFocusPoint,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSTMapFocusPoint,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr = (FSTMapFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSTMapFocusPoint,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFocusPoints @ 14d6d4990

TArrayView<FSTMapFocusPoint_const_,int> * __thiscall
FSTMapTable::GetFocusPoints
          (FSTMapTable *this,TArrayView<FSTMapFocusPoint_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FSTMapFocusPoint_const_,int> *pTVar4;
  
  iVar1 = (this->FocusPoints).ArrayNum;
  __return_storage_ptr__->DataPtr = (FSTMapFocusPoint *)(this->FocusPoints).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FSTMapFocusPoint_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLinkedCategories @ 14d6d58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
* __thiscall
FSTMapTable::GetLinkedCategories
          (FSTMapTable *this,
          TMap<ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>_>
          *__return_storage_ptr__)

{
  undefined1 auStack_88 [32];
  ELensDataCategory local_68;
  FLinkPointMetadata local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63 [11];
  initializer_list<TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&>_> local_58
  ;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_48;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  TPairInitializer<ELensDataCategory_const_&,FLinkPointMetadata_const_&> local_18;
  
  local_18.Key = (ELensDataCategory *)(__security_cookie.value ^ (ulonglong)auStack_88);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_48.Key = &local_68;
      local_68 = Zoom;
      local_48.Value = &local_67;
      local_67.bRemoveByDefault = true;
      local_38 = &local_66;
      local_66 = 4;
      local_30 = &local_65;
      local_28 = &local_64;
      local_20 = local_63;
      local_58._First = &local_48;
      local_58._Last = &local_18;
      local_65 = 1;
      local_64 = 6;
      local_63[0] = 0;
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
      ::
      TMap<enum_ELensDataCategory,FLinkPointMetadata,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>_>
                (&LinkedToCategories,&local_58);
      atexit(`FSTMapTable::GetLinkedCategories'::__l2::
             _dynamic_atexit_destructor_for__LinkedToCategories__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  TSet<TTuple<enum_ELensDataCategory,FLinkPointMetadata>,TDefaultMapHashableKeyFuncs<enum_ELensDataCategory,FLinkPointMetadata,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,
              (TSet<TTuple<ELensDataCategory,FLinkPointMetadata>,TDefaultMapHashableKeyFuncs<ELensDataCategory,FLinkPointMetadata,0>,FDefaultSetAllocator>
               *)&LinkedToCategories);
  return __return_storage_ptr__;
}

// GetPoint @ 14d6d78e0

bool __thiscall
FSTMapTable::GetPoint
          (FSTMapTable *this,float param_1,float param_2,FSTMapInfo *param_3,float param_4)

{
  ECalibratedMapChannels EVar1;
  undefined2 uVar2;
  UTexture *pUVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  FScriptContainerElement *pFVar6;
  float *pfVar7;
  
  pFVar6 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar4 = pFVar6 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  while( true ) {
    if (pFVar6 == pFVar4) {
      return false;
    }
    if ((float)((uint)(*(float *)(pFVar6 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= param_4) break;
    pFVar6 = pFVar6 + 0xa0;
  }
  pfVar7 = *(float **)(pFVar6 + 0x90);
  pfVar5 = pfVar7 + (longlong)*(int *)(pFVar6 + 0x98) * 0x14;
  if (pfVar7 == pfVar5) {
    return false;
  }
  do {
    if ((float)((uint)(*pfVar7 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      if ((UE::GC::GIsIncrementalReachabilityPending) &&
         (*(UObject **)(pfVar7 + 2) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pfVar7 + 2));
      }
      pUVar3 = *(UTexture **)(pfVar7 + 2);
      uVar2 = *(undefined2 *)(pfVar7 + 4);
      EVar1 = *(ECalibratedMapChannels *)((longlong)pfVar7 + 0x12);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (param_3->DistortionMap).field0_0x0.DebugPtr = pUVar3;
      (param_3->MapFormat).PixelOrigin = (char)uVar2;
      (param_3->MapFormat).UndistortionChannels = (char)((ushort)uVar2 >> 8);
      (param_3->MapFormat).DistortionChannels = EVar1;
      return true;
    }
    pfVar7 = pfVar7 + 0x14;
  } while (pfVar7 != pfVar5);
  return false;
}

// GetScriptStruct @ 14d6d8d20

UScriptStruct * __thiscall FSTMapTable::GetScriptStruct(FSTMapTable *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSTMapTable,(UObject *)pUVar1,L"STMapTable");
  }
  return Z_Registration_Info_UScriptStruct_FSTMapTable.OuterSingleton;
}

// GetTotalPointNum @ 14d6dc170

int __thiscall FSTMapTable::GetTotalPointNum(FSTMapTable *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FocusPoints).ArrayNum;
  iVar5 = 0;
  pFVar3 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->FocusPoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSTMapFocusPoint_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    iVar5 = iVar5 + iVar2;
    pFVar3 = pFVar3 + 0xa0;
  }
  return iVar5;
}

// HasFocusPoint @ 14d6dd1f0

bool __thiscall FSTMapTable::HasFocusPoint(FSTMapTable *this,float param_1,float param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6dd1f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 8))();
  return (bool)uVar1;
}

// HasZoomPoint @ 14d6ddbc0

bool __thiscall
FSTMapTable::HasZoomPoint(FSTMapTable *this,float param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d6ddbc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  return (bool)uVar1;
}

// MergeFocusPoint @ 14d6e4490

void __thiscall
FSTMapTable::MergeFocusPoint
          (FSTMapTable *this,float param_1,float param_2,bool param_3,float param_4)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  
  LensDataTableUtils::MergeFocusPoint<FSTMapFocusPoint>
            (&this->FocusPoints,param_1,param_2,param_3,param_4);
  iVar1 = (this->FocusCurves).ArrayNum;
  this_00 = (this->FocusCurves).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->FocusCurves).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSTMapFocusCurve,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FBaseFocusCurve::MergeFocusInCurve
              ((FBaseFocusCurve *)this_00,(FRichCurve *)this_00,param_1,param_2,param_3,param_4);
    this_00 = this_00 + 0x88;
  }
  return;
}

// RemoveFocusPoint @ 14d6e7f90

void __thiscall FSTMapTable::RemoveFocusPoint(FSTMapTable *this,float param_1)

{
  LensDataTableUtils::RemoveFocusPoint<FSTMapFocusPoint>(&this->FocusPoints,param_1);
  LensDataTableUtils::RemoveFocusFromFocusCurves<FSTMapFocusCurve>(&this->FocusCurves,param_1);
  return;
}

// RemoveZoomPoint @ 14d6e91c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSTMapTable::RemoveZoomPoint(FSTMapTable *this,float param_1,float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  iVar1 = (this->FocusPoints).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0xa0) {
LAB_14d6e9356:
      LensDataTableUtils::RemoveZoomFromFocusCurves<FSTMapFocusCurve>
                (&this->FocusCurves,param_1,param_2,__real_38d1b717);
      return;
    }
    if ((float)((uint)(*(float *)(pFVar7 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77) {
      uVar4 = (uint)(((longlong)pFVar7 - (longlong)pFVar2) / 0xa0);
      if (uVar4 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar4 < iVar1) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FSTMapFocusPoint::RemovePoint
                  ((FSTMapFocusPoint *)
                   ((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xa0),
                   param_2);
        uVar6 = 0;
        if ((int)uVar4 < (this->FocusPoints).ArrayNum) {
          uVar6 = ~uVar4 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)((this->FocusPoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xa0 + 0x88
                    ) == 0) {
          TArray<FSTMapFocusPoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FocusPoints,uVar4,Default);
        }
      }
      goto LAB_14d6e9356;
    }
    pFVar7 = pFVar7 + 0xa0;
  } while( true );
}

// SetParameterCurveKeysAtFocus @ 14d6ec890

void __thiscall
FSTMapTable::SetParameterCurveKeysAtFocus
          (FSTMapTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  TArrayView<FKeyHandle_const_,int> local_18;
  
  pFVar2 = (this->FocusPoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->FocusPoints).ArrayNum * 0xa0;
  if (pFVar2 != pFVar1) {
    while (__real_38d1b717 <
           (float)((uint)(*(float *)(pFVar2 + 8) - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff
                  )) {
      pFVar2 = pFVar2 + 0xa0;
      if (pFVar2 == pFVar1) {
        return;
      }
    }
    local_18.DataPtr = param_4->DataPtr;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FBaseLensTable::CopyCurveKeys
              ((FBaseLensTable *)this,param_3,(FRichCurve *)(pFVar2 + 0x10),&local_18);
  }
  return;
}

// SetParameterCurveKeysAtZoom @ 14d6ed280

void __thiscall
FSTMapTable::SetParameterCurveKeysAtZoom
          (FSTMapTable *this,float param_1,int param_2,FRichCurve *param_3,
          TArrayView<FKeyHandle_const_,int> *param_4)

{
  FRichCurve *pFVar1;
  FRichCurve *pFVar2;
  TArrayView<FKeyHandle_const_,int> local_18;
  
  pFVar2 = (FRichCurve *)(this->FocusCurves).AllocatorInstance.Data;
  pFVar1 = (FRichCurve *)((longlong)pFVar2 + (longlong)(this->FocusCurves).ArrayNum * 0x88);
  if (pFVar2 != pFVar1) {
    while (__real_38d1b717 <
           (float)((uint)(*(float *)&pFVar2[1]._padding_ - param_1) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pFVar2 = (FRichCurve *)&pFVar2[1]._padding_;
      if (pFVar2 == pFVar1) {
        return;
      }
    }
    local_18.DataPtr = param_4->DataPtr;
    local_18.ArrayNum = param_4->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_4->field_0xc;
    FBaseLensTable::CopyCurveKeys((FBaseLensTable *)this,param_3,pFVar2,&local_18);
  }
  return;
}

// SetPoint @ 14d6ee720

bool __thiscall
FSTMapTable::SetPoint
          (FSTMapTable *this,float param_1,float param_2,FSTMapInfo *param_3,float param_4)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  bVar4 = LensDataTableUtils::SetPoint<FSTMapTable,FSTMapInfo>(this,param_1,param_2,param_3,param_4)
  ;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (!bVar4) {
    return false;
  }
  iVar7 = (this->FocusCurves).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      fVar1 = *(float *)((this->FocusCurves).AllocatorInstance.Data + lVar9 + 0x80);
      if ((float)((uint)(fVar1 - param_2) & uVar3) <= param_4) {
        return true;
      }
      if (param_2 < fVar1) {
        return true;
      }
      iVar7 = (this->FocusCurves).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x88;
    } while ((int)uVar8 < iVar7);
  }
  return true;
}

