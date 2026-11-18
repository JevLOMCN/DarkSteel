// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 7

// FRenderCaptureOcclusionHandler @ 14ca66360

FRenderCaptureOcclusionHandler * __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::FRenderCaptureOcclusionHandler
          (FRenderCaptureOcclusionHandler *this,FImageDimensions param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FRenderCaptureOcclusionHandler *pFVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = 0;
  (this->SampleStats).Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  plVar1 = &(this->SampleStats).Image.Buffer.ArrayNum;
  *plVar1 = 0;
  plVar2 = &(this->SampleStats).Image.Buffer.ArrayMax;
  *plVar2 = 0;
  (this->InfillRequired).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InfillRequired).ArrayNum = 0;
  (this->InfillRequired).ArrayMax = 0;
  (this->Infill).InfillSequence.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Infill).InfillSequence.ArrayNum = 0;
  (this->Infill).InfillSequence.ArrayMax = 0;
  (this->SampleStats).Dimensions = param_1;
  lVar5 = (longlong)(this->SampleStats).Dimensions.Height;
  (this->SampleStats).Image.DimensionX = (longlong)param_1.Width;
  uVar7 = param_1.Width * lVar5;
  (this->SampleStats).Image.DimensionY = lVar5;
  lVar5 = *plVar1;
  if (uVar7 - lVar5 == 0 || (longlong)uVar7 < lVar5) {
    if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar7);
    }
    if ((longlong)uVar7 < lVar5) {
      lVar5 = lVar5 - uVar7;
      if (((((uint)(uVar7 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRenderCaptureOcclusionHandler *)(*pcVar3)();
        return pFVar6;
      }
      if (lVar5 != 0) {
        _Dst = (this->SampleStats).Image.Buffer.AllocatorInstance.Data + uVar7 * 4;
        lVar9 = (*plVar1 - lVar5) - uVar7;
        if (lVar9 != 0) {
          memmove(_Dst,_Dst + lVar5 * 4,lVar9 * 4);
        }
        *plVar1 = *plVar1 - lVar5;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (4,2,(ForAnyElementType *)&(this->SampleStats).Image,*plVar1,plVar2);
      }
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,2,uVar7 - lVar5,(ForAnyElementType *)&(this->SampleStats).Image,plVar1,plVar2);
  }
  lVar5 = (this->SampleStats).Image.DimensionY * (this->SampleStats).Image.DimensionX;
  if (0 < lVar5) {
    do {
      if ((*plVar1 <= lVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FRenderCaptureOcclusionHandler *)(*pcVar3)();
        return pFVar6;
      }
      *(undefined4 *)((this->SampleStats).Image.Buffer.AllocatorInstance.Data + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar5);
  }
  return this;
}

// operator() @ 14ca6de10

void __thiscall
`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSampleStats *pFVar5;
  int iVar6;
  int *piVar7;
  int local_18;
  int iStack_14;
  
  piVar7 = *(int **)this;
  iVar6 = 0;
  iVar4 = *piVar7;
  if (0 < iVar4) {
    do {
      pFVar5 = UE::Geometry::TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>
               ::operator[]((TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>
                             *)(piVar7 + 2),(longlong)iVar4 * (longlong)param_1 + (longlong)iVar6);
      if ((pFVar5->NumInvalid != 0) && (pFVar5->NumValid == 0)) {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        pFVar1 = *(ForAnyElementType **)((longlong)this + 8);
        local_18 = iVar6;
        iStack_14 = param_1;
        if ((pFVar1->Data <= (FScriptContainerElement *)&local_18) &&
           (((FScriptContainerElement *)&local_18 <
             pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 8 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = *(int *)&pFVar1[1].Data;
        piVar7 = (int *)((longlong)&pFVar1[1].Data + 4);
        if (iVar4 == *piVar7) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar1,piVar7);
        }
        *(int *)&pFVar1[1].Data = iVar4 + 1;
        *(ulonglong *)(pFVar1->Data + (longlong)iVar4 * 8) = CONCAT44(iStack_14,local_18);
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      }
      piVar7 = *(int **)this;
      iVar6 = iVar6 + 1;
      iVar4 = *piVar7;
    } while (iVar6 < iVar4);
  }
  return;
}

// ApplyInfill @ 14ca78ed0

void __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::ApplyInfill
          (FRenderCaptureOcclusionHandler *this,TImageBuilder<UE::Math::TVector4<float>_> *param_1)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ApplyInfill'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Math::TVector4<float>,int>
             ::Call;
  TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
  ApplyInfill<UE::Math::TVector4<float>_>
            (&this->Infill,param_1,
             (TFunctionRef<UE::Math::TVector4<float>___cdecl(UE::Math::TVector4<float>,int)> *)
             &local_18);
  return;
}

// ComputeAndApplyInfill @ 14ca80a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::ComputeAndApplyInfill
          (FRenderCaptureOcclusionHandler *this,
          TArray<TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStackY_118 [32];
  <lambda_1> local_d8;
  undefined1 local_d7;
  undefined1 local_d6 [2];
  undefined4 local_d4;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_d0;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  FRenderCaptureOcclusionHandler **local_a8;
  code *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 *local_88;
  FRenderCaptureOcclusionHandler *local_80;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *local_78;
  _RTL_CRITICAL_SECTION *local_70;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((param_1->ArrayNum != (this->InfillRequired).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Images.Num() == InfillRequired.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Baking\\RenderCaptureFunctions.cpp"
                         ,0x30,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->ArrayNum != 0) {
    pFVar7 = (this->InfillRequired).AllocatorInstance.Data;
    iVar2 = (this->InfillRequired).ArrayNum;
    pFVar1 = pFVar7 + iVar2;
    while( true ) {
      if ((this->InfillRequired).ArrayNum != iVar2) {
        local_d8 = (<lambda_1>)0x0;
        `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_d8);
      }
      if (pFVar7 == pFVar1) {
        return;
      }
      if (*pFVar7 != (FScriptContainerElement)0x0) break;
      pFVar7 = pFVar7 + 1;
    }
    uVar8 = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount(&local_68,4000);
    local_78 = &local_d0;
    local_70 = &local_68;
    local_c0.DataPtr = (void **)0x0;
    local_b0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_1>,void,int>
               ::Call;
    local_a8 = &local_80;
    local_c0.ArrayNum = 0;
    local_80 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->SampleStats).Dimensions.Height,1,
               (TFunctionRef<void___cdecl(int)> *)&local_b0,local_d8,None,&local_c0);
    local_98 = &local_d7;
    local_d4 = 0;
    local_a0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_2>,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int>
               ::Call;
    TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::ComputeInfill
              (&this->Infill,&this->SampleStats,&local_d0,(FSampleStats)0x0,
               (TFunctionRef<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats___cdecl(UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int)>
                *)&local_a0);
    DeleteCriticalSection(&local_68);
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    uVar9 = uVar8;
    if (0 < param_1->ArrayNum) {
      do {
        uVar6 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar6 < (this->InfillRequired).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->InfillRequired).AllocatorInstance.Data[uVar9] != (FScriptContainerElement)0x0) {
          uVar5 = 0;
          if ((int)uVar6 < param_1->ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_88 = local_d6;
          local_90 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ApplyInfill'::__l2::<lambda_1>,UE::Math::TVector4<float>,UE::Math::TVector4<float>,int>
                     ::Call;
          TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
          ApplyInfill<UE::Math::TVector4<float>_>
                    (&this->Infill,
                     *(TImageBuilder<UE::Math::TVector4<float>_> **)
                      ((param_1->AllocatorInstance).Data + uVar9 * 8),
                     (TFunctionRef<UE::Math::TVector4<float>___cdecl(UE::Math::TVector4<float>,int)>
                      *)&local_90);
        }
        uVar8 = (ulonglong)(uVar6 + 1);
        uVar9 = uVar9 + 1;
      } while ((int)(uVar6 + 1) < param_1->ArrayNum);
    }
  }
  return;
}

// ComputeInfill @ 14ca81d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill(FRenderCaptureOcclusionHandler *this)

{
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88 [4];
  undefined4 local_84;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_80;
  code *local_70;
  <lambda_1> *local_68;
  TArrayView<std::nullptr_t,int> local_60;
  FRenderCaptureOcclusionHandler *local_50;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *local_48;
  _RTL_CRITICAL_SECTION *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_48 = &local_80;
  local_40 = &local_38;
  local_60.DataPtr = (void **)0x0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = (<lambda_1> *)&local_50;
  local_60.ArrayNum = 0;
  local_50 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->SampleStats).Dimensions.Height,1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88[0],None,&local_60);
  local_68 = local_88;
  local_84 = 0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRenderCaptureOcclusionHandler::ComputeInfill'::__l2::<lambda_2>,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int>
             ::Call;
  TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::ComputeInfill
            (&this->Infill,&this->SampleStats,&local_80,(FSampleStats)0x0,
             (TFunctionRef<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats___cdecl(UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int)>
              *)&local_70);
  DeleteCriticalSection(&local_38);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// PushInfillRequired @ 14ca9f200

void __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::PushInfillRequired
          (FRenderCaptureOcclusionHandler *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement local_res10 [24];
  
  pFVar2 = (this->InfillRequired).AllocatorInstance.Data;
  local_res10[0] = (FScriptContainerElement)param_1;
  if ((pFVar2 <= local_res10) && (local_res10 < pFVar2 + (this->InfillRequired).ArrayMax)) {
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
  iVar5 = (this->InfillRequired).ArrayNum;
  piVar1 = &(this->InfillRequired).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&(this->InfillRequired).AllocatorInstance,piVar1);
  }
  (this->InfillRequired).ArrayNum = iVar5 + 1;
  (this->InfillRequired).AllocatorInstance.Data[iVar5] = local_res10[0];
  return;
}

// RegisterSample @ 14ca9f700

void __thiscall
UE::Geometry::FRenderCaptureOcclusionHandler::RegisterSample
          (FRenderCaptureOcclusionHandler *this,FVector2i *param_1,bool param_2)

{
  FSampleStats *pFVar1;
  TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this_00;
  longlong lVar2;
  
  this_00 = &(this->SampleStats).Image;
  lVar2 = (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)(this->SampleStats).Dimensions.Width +
          (longlong)(param_1->field0_0x0)._s_0.X;
  if (param_2) {
    pFVar1 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::operator[]
                       (this_00,lVar2);
    pFVar1->NumValid = pFVar1->NumValid + 1;
    return;
  }
  pFVar1 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::operator[]
                     (this_00,lVar2);
  pFVar1->NumInvalid = pFVar1->NumInvalid + 1;
  return;
}

