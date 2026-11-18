// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 68

// Call @ 1497041b0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,int),void,int,int>::Call
          (void *param_1,int *param_2,int *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001497041bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 1497041d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  (**(code **)param_1)(*param_2,*param_3,*param_4,param_5,param_6,param_7);
  return;
}

// Call @ 149704220

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),bool,UE::Geometry::TAxisAlignedBox3<double>_const_&,int>
::Call(void *param_1,TAxisAlignedBox3<double> *param_2,int *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014970422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,*param_3);
  return (bool)uVar1;
}

// Call @ 149704240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshRenderBufferSetConversionUtil::InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FMeshRenderBufferSetConversionUtil::
  InitializeBuffersFromOverlays<UE::Geometry::FRefCountVector::IndexEnumerable,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::UploadIndexBufferUpdate(*(FMeshRenderBufferSet **)param_1);
  return;
}

// Call @ 149704270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::UploadIndexBufferUpdate(*(FMeshRenderBufferSet **)param_1);
  return;
}

// Call @ 149704280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ```UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::
  operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStackY_108 [32];
  <lambda_1> <Stack_c8;
  int iStack_c4;
  TArrayView<std::nullptr_t,int> TStack_c0;
  code *pcStack_b0;
  int **ppiStack_a8;
  int *piStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  _RTL_CRITICAL_SECTION *p_Stack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  _RTL_CRITICAL_SECTION _Stack_48;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId904,
               "SimpleDynamicMeshComponent_FastVertexUpdatePrecomp_CalcBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
               ,0x388);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId904);
  }
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  uVar3 = (**(code **)(**(longlong **)param_1 + 0xb38))();
  uStack_78 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_70 = _UNK_150a9e648;
  uStack_58 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_50 = _UNK_1508ffb58;
  uStack_68 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_60 = _UNK_150a9e6d8;
  InitializeCriticalSectionAndSpinCount(&_Stack_48,4000);
  iStack_c4 = *(int *)(lVar1 + 8);
  piStack_a0 = &iStack_c4;
  TStack_c0.DataPtr = (void **)0x0;
  TStack_c0.ArrayNum = 0;
  p_Stack_88 = &_Stack_48;
  puStack_80 = &uStack_78;
  pcStack_b0 = TFunctionRefCaller<`ParallelComputeROIBounds'::__l2::<lambda_1>,void,int>::Call;
  ppiStack_a8 = &piStack_a0;
  lStack_98 = lVar1;
  uStack_90 = uVar3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",((int)((iStack_c4 >> 0x1f & 0xfffU) + iStack_c4) >> 0xc) + 1,1,
             (TFunctionRef<void___cdecl(int)> *)&pcStack_b0,<Stack_c8,None,&TStack_c0);
  DeleteCriticalSection(&_Stack_48);
  puVar2 = *(undefined8 **)((longlong)param_1 + 8);
  *puVar2 = uStack_78;
  puVar2[1] = uStack_70;
  puVar2[2] = uStack_68;
  puVar2[3] = uStack_60;
  puVar2[4] = uStack_58;
  puVar2[5] = uStack_50;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 1497042a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::ApplyChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001497042b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)param_1 + 0x58))
            ((longlong *)**(undefined8 **)param_1,param_2,**(undefined1 **)((longlong)param_1 + 8));
  return;
}

// Call @ 1497042c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::ApplyChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = 8;
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    lVar4 = 0x18;
  }
  lVar1 = **(longlong **)param_1;
  if (*(longlong *)(lVar4 + lVar1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::Copy(param_2,*(FDynamicMesh3 **)(lVar4 + lVar1),true,true,true,true);
  return;
}

// Call @ 1497042d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::ApplyChange'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FMutex *this;
  uint *puVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  short sVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lStack_70;
  
  lVar8 = **(longlong **)param_1;
  cVar5 = *(char *)(lVar8 + 8);
  if ((*(char *)(lVar8 + 9) == '\0') || (bVar16 = true, (param_2->VertexColors).bIsSet == false)) {
    bVar16 = false;
  }
  lVar19 = 0x20;
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    lVar19 = 0x30;
  }
  lVar20 = 0x40;
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    lVar20 = 0x50;
  }
  uVar23 = 0;
  iVar6 = *(int *)(lVar8 + 0x18);
  if (0 < (longlong)iVar6) {
    lVar24 = 0;
    lStack_70 = 0;
    lVar21 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      lVar9 = **(longlong **)param_1;
      uVar18 = 0;
      if ((int)uVar23 < *(int *)(lVar9 + 0x18)) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x10) + lVar24 * 4);
      if ((-1 < (int)uVar18) &&
         ((int)uVar18 <
          (int)((param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->VertexRefCounts).RefCounts.CurBlockUsed))) {
        uVar26 = (ulonglong)(uVar18 & 0x1ff);
        uVar25 = (ulonglong)(uVar18 >> 9);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + uVar25 * 8) + uVar26 * 2) - 1U) < 0xfffe) {
          if (cVar5 != '\0') {
            uVar18 = 0;
            if ((int)uVar23 < (int)((longlong *)(lVar19 + lVar8))[1]) {
              uVar18 = uVar22;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar9 = *(longlong *)(lVar19 + lVar8);
            sVar17 = _dclass(*(undefined8 *)(lVar9 + lVar21));
            if (((sVar17 < 1) && (sVar17 = _dclass(*(undefined8 *)(lVar9 + 8 + lVar21)), sVar17 < 1)
                ) && (sVar17 = _dclass(*(undefined8 *)(lVar9 + 0x10 + lVar21)), sVar17 < 1)) {
              uVar14 = ((undefined8 *)(lVar9 + lVar21))[1];
              uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar21);
              lVar10 = *(longlong *)((param_2->Vertices).Blocks.AllocatorInstance.Data + uVar25 * 8)
              ;
              puVar2 = (undefined8 *)(lVar10 + uVar26 * 0x18);
              *puVar2 = *(undefined8 *)(lVar9 + lVar21);
              puVar2[1] = uVar14;
              *(undefined8 *)(lVar10 + 0x10 + uVar26 * 0x18) = uVar4;
              if ((param_2->ChangeStampShape).bIsEnabled != false) {
                this = &(param_2->ChangeStampShape).Mutex;
                LOCK();
                bVar15 = this->State == (atomic<unsigned_char>)0x0;
                if (bVar15) {
                  this->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar15) {
                  FMutex::LockSlow(this);
                }
                puVar1 = &(param_2->ChangeStampShape).Value;
                *puVar1 = *puVar1 + 1;
                LOCK();
                aVar3 = this->State;
                this->State = (atomic<unsigned_char>)((char)this->State + -1);
                UNLOCK();
                if (((byte)aVar3 & 2) != 0) {
                  FMutex::WakeWaitingThread(this);
                }
              }
            }
          }
          if (bVar16) {
            uVar18 = 0;
            if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
              uVar18 = uVar22;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar9 = *(longlong *)(lVar20 + lVar8);
            if ((param_2->VertexColors).bIsSet != false) {
              lVar10 = *(longlong *)
                        ((param_2->VertexColors).TypedValue.Blocks.AllocatorInstance.Data +
                        uVar25 * 8);
              uVar7 = *(undefined4 *)(lStack_70 + 8 + lVar9);
              *(undefined8 *)(lVar10 + uVar26 * 0xc) = *(undefined8 *)(lStack_70 + lVar9);
              *(undefined4 *)(lVar10 + 8 + uVar26 * 0xc) = uVar7;
            }
          }
        }
      }
      lStack_70 = lStack_70 + 0xc;
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 1;
      lVar21 = lVar21 + 0x18;
    } while (lVar24 < iVar6);
  }
  lVar8 = **(longlong **)param_1;
  if (((*(char *)(lVar8 + 0x60) != '\0') &&
      (pFVar11 = (param_2->AttributeSet).Ptr, pFVar11 != (FDynamicMeshAttributeSet *)0x0)) &&
     ((0 < (pFVar11->NormalLayers).Array.ArrayNum &&
      (pFVar12 = (pFVar11->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar12 != 0))))
  {
    lVar19 = *(longlong *)pFVar12;
    iVar6 = *(int *)(lVar8 + 0x70);
    lVar20 = 0x78;
    if (**(char **)((longlong)param_1 + 8) == '\0') {
      lVar20 = 0x88;
    }
    uVar23 = 0;
    if (0 < (longlong)iVar6) {
      lVar21 = 0;
      lVar24 = 0;
      do {
        lVar9 = **(longlong **)param_1;
        uVar18 = 0;
        if ((int)uVar23 < *(int *)(lVar9 + 0x70)) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x68) + lVar21 * 4);
        if (((-1 < (int)uVar18) &&
            ((int)uVar18 < *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar18 >> 9) * 8) +
                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar22 = 0;
          if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar9 = *(longlong *)(lVar20 + lVar8);
          uVar18 = uVar18 * 3;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 >> 9) * 8) +
           (ulonglong)(uVar18 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + lVar24);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
           (ulonglong)(uVar18 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + 4 + lVar24);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar18 + 2 >> 9) * 8) +
           (ulonglong)(uVar18 + 2 & 0x1ff) * 4) = *(undefined4 *)(lVar9 + 8 + lVar24);
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + 1;
        lVar24 = lVar24 + 0xc;
      } while (lVar21 < iVar6);
    }
  }
  lVar8 = **(longlong **)param_1;
  if (((*(char *)(lVar8 + 0x98) != '\0') &&
      (pFVar11 = (param_2->AttributeSet).Ptr, pFVar11 != (FDynamicMeshAttributeSet *)0x0)) &&
     ((0 < (pFVar11->UVLayers).Array.ArrayNum &&
      (pFVar12 = (pFVar11->UVLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar12 != 0)))) {
    lVar19 = *(longlong *)pFVar12;
    iVar6 = *(int *)(lVar8 + 0xa8);
    lVar20 = 0xb0;
    if (**(char **)((longlong)param_1 + 8) == '\0') {
      lVar20 = 0xc0;
    }
    uVar23 = 0;
    if (0 < (longlong)iVar6) {
      lVar21 = 0;
      do {
        lVar24 = **(longlong **)param_1;
        uVar18 = 0;
        if ((int)uVar23 < *(int *)(lVar24 + 0xa8)) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar18 = *(uint *)(*(longlong *)(lVar24 + 0xa0) + lVar21 * 4);
        if (((-1 < (int)uVar18) &&
            ((int)uVar18 < *(int *)(lVar19 + 8) * 0x200 + *(int *)(lVar19 + 0xc))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar19 + 0x10) + (ulonglong)(uVar18 >> 9) * 8) +
                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar22 = 0;
          if ((int)uVar23 < (int)((longlong *)(lVar20 + lVar8))[1]) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar24 = *(longlong *)(lVar20 + lVar8);
          *(undefined4 *)
           (*(longlong *)
             (*(longlong *)(lVar19 + 0x48) + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
           (ulonglong)(uVar18 * 2 & 0x1ff) * 4) = *(undefined4 *)(lVar24 + lVar21 * 8);
          *(undefined4 *)
           (*(longlong *)
             (*(longlong *)(lVar19 + 0x48) + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
           (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar24 + 4 + lVar21 * 8);
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar6);
    }
  }
  return;
}

// Call @ 1497042e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshRenderDecomposition::BuildAssociations'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FMeshRenderDecomposition::BuildAssociations'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1497042f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMeshRenderDecomposition::BuildChunkedDecomposition'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  FGroup *pFVar1;
  
  pFVar1 = FMeshRenderDecomposition::GetGroup
                     ((FMeshRenderDecomposition *)**(undefined8 **)param_1,*param_2);
  CollectSubDecomposition
            ((FDynamicMesh3 *)**(undefined8 **)((longlong)param_1 + 8),&pFVar1->Triangles,
             pFVar1->Material,*(FMeshRenderDecomposition **)((longlong)param_1 + 0x10),
             **(int **)((longlong)param_1 + 0x18),
             *(FWindowsRecursiveMutex **)((longlong)param_1 + 0x20));
  return;
}

// Call @ 149704340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_1>,void,int,int>::Call
          (void *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  
  pFVar3 = *(ForAnyElementType **)param_1;
  iVar1 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar1 < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  pFVar3 = *(ForAnyElementType **)param_1;
  uVar2 = **(uint **)((longlong)param_1 + 8);
  if (-1 < (int)uVar2) {
    if (*(int *)((longlong)&pFVar3[1].Data + 4) < (int)uVar2) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,pFVar3,*(int *)&pFVar3[1].Data,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar2);
}

// Call @ 1497043c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1497043d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1497043e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1497043f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  uint *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  FDynamicMeshAttributeSet *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  float fVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  UPhysicsSettings *pUVar21;
  FDynamicMeshAttributeSet *pFVar22;
  uint uVar23;
  longlong lVar24;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined2 auStack_178 [4];
  undefined8 uStack_170;
  uint uStack_168;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  uint uStack_134;
  IndexIterator IStack_130;
  TDynamicMeshScalarTriangleAttribute<int> *pTStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  void *pvStack_108;
  undefined8 uStack_100;
  FDynamicMeshAttributeSet *pFStack_f8;
  undefined8 uStack_f0;
  double dStack_e0;
  code *pcStack_d8;
  FDynamicMesh3 **ppFStack_d0;
  FDynamicMesh3 *pFStack_c8;
  int *piStack_c0;
  void **ppvStack_b8;
  undefined4 *puStack_b0;
  FDynamicMeshAttributeSet **ppFStack_a8;
  undefined4 *puStack_a0;
  longlong *plStack_98;
  float *pfStack_90;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_88;
  
  pUVar21 = UPhysicsSettings::Get();
  if (pUVar21->bSupportUVFromHitResults != false) {
    pFVar6 = (param_2->AttributeSet).Ptr;
    if (((pFVar6 != (FDynamicMeshAttributeSet *)0x0) &&
        (iVar17 = (**(code **)(pFVar6->_padding_ + 0xa8))(), 0 < iVar17)) &&
       (*(char *)(*(longlong *)param_1 + 0x854) == '\0')) {
      bVar13 = true;
      lVar25 = **(longlong **)((longlong)param_1 + 8);
      pFVar6 = (param_2->AttributeSet).Ptr;
      this = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(lVar25 + 0x30);
      pFVar22 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar6 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar22 = pFVar6;
      }
      uVar18 = (**(code **)(pFVar22->_padding_ + 0xa8))();
      iVar17 = *(int *)(lVar25 + 0x38);
      if (iVar17 < (int)uVar18) {
        iVar19 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar18 - iVar17,(ForAnyElementType *)this,(int *)(lVar25 + 0x38),
                            (int *)(lVar25 + 0x3c));
        memset((this->AllocatorInstance).Data + (longlong)iVar19 * 0x10,0,
               (longlong)(int)(uVar18 - iVar17) << 4);
      }
      else {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          OnInvalidArrayNum((ulonglong)uVar18);
        }
        if ((int)uVar18 < iVar17) {
          uVar29 = iVar17 - uVar18;
          if (((int)(uVar18 | uVar29) < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (uVar29 != 0) {
            TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(this,uVar18,uVar29);
            ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)this,*(int *)(lVar25 + 0x38),
                       (int *)(lVar25 + 0x3c));
          }
        }
      }
      bVar16 = true;
      goto LAB_1496fe4db;
    }
  }
  bVar16 = false;
  bVar13 = false;
LAB_1496fe4db:
  pFVar6 = (param_2->AttributeSet).Ptr;
  if ((pFVar6 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTStack_120 = (pFVar6->MaterialIDAttrib).Ptr,
     pTStack_120 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    pTStack_120 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  }
  iVar17 = (param_2->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
           (param_2->VertexRefCounts).FreeIndices.CurBlockUsed;
  TStack_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_160.ArrayNum = 0;
  TStack_160.ArrayMax = 0;
  if (bVar16) {
    uVar18 = ((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->TriangleRefCounts).RefCounts.CurBlockUsed) * 3;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar19 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar18,&TStack_160.AllocatorInstance,&TStack_160.ArrayNum,
                          &TStack_160.ArrayMax);
      memset(TStack_160.AllocatorInstance.Data + (longlong)iVar19 * 4,0,(longlong)(int)uVar18 << 2);
    }
    pFStack_f8 = (param_2->AttributeSet).Ptr;
    pvStack_108 = (void *)0x0;
    uStack_100 = 0;
    uStack_140 = (**(code **)(pFStack_f8->_padding_ + 0xa8))();
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&IStack_130,&param_2->VertexRefCounts,0,
               (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->VertexRefCounts).RefCounts.CurBlockUsed);
    uVar18 = (param_2->VertexRefCounts).RefCounts.CurBlock;
    uVar27 = (ulonglong)(uint)IStack_130._8_4_;
    uVar29 = (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
    uVar23 = IStack_130._8_4_;
    while (uVar23 != uVar18 * 0x200 + uVar29) {
      iVar19 = (int)uVar27;
      pcStack_d8 = TFunctionRefCaller<``UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()'::__l33::<lambda_1>,void,int>
                   ::Call;
      lVar25 = *(longlong *)((param_2->Vertices).Blocks.AllocatorInstance.Data + (uVar27 >> 9) * 8);
      pdVar2 = (double *)(lVar25 + (ulonglong)(IStack_130._8_4_ & 0x1ff) * 0x18);
      dStack_e0 = *(double *)(lVar25 + 0x10 + (ulonglong)(IStack_130._8_4_ & 0x1ff) * 0x18);
      plStack_98 = *(longlong **)((longlong)param_1 + 8);
      fStack_118 = (float)*pdVar2;
      fStack_114 = (float)pdVar2[1];
      fStack_110 = (float)dStack_e0;
      uStack_13c = *(undefined4 *)(*plStack_98 + 8);
      piStack_c0 = &iStack_144;
      ppvStack_b8 = &pvStack_108;
      puStack_b0 = &uStack_140;
      ppFStack_a8 = &pFStack_f8;
      puStack_a0 = &uStack_13c;
      pfStack_90 = &fStack_118;
      pTStack_88 = &TStack_160;
      iStack_144 = iVar19;
      ppFStack_d0 = &pFStack_c8;
      pFStack_c8 = param_2;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (param_2,iVar19,(TFunctionRef<void___cdecl(int)> *)&pcStack_d8);
      IStack_130._8_4_ = iVar19 + 1;
      uVar27 = (ulonglong)(uint)IStack_130._8_4_;
      if ((int)IStack_130._8_4_ < (int)IStack_130._12_4_) {
        do {
          if ((*(short *)(*(longlong *)(*(longlong *)(IStack_130._0_8_ + 8) + (uVar27 >> 9) * 8) +
                         (ulonglong)(IStack_130._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(*(longlong *)(IStack_130._0_8_ + 8) + (uVar27 >> 9) * 8) +
                        (ulonglong)(IStack_130._8_4_ & 0x1ff) * 2) != -1)) break;
          IStack_130._8_4_ = (int)uVar27 + 1;
          uVar27 = (ulonglong)(uint)IStack_130._8_4_;
        } while ((int)IStack_130._8_4_ < (int)IStack_130._12_4_);
      }
      uVar23 = (uint)uVar27;
    }
    if (pvStack_108 != (void *)0x0) {
      FMemory::Free(pvStack_108);
    }
  }
  else {
    if (iVar17 != 0) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                (&TStack_160,
                 (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    }
    uVar18 = (param_2->VertexRefCounts).UsedCount;
    pFVar7 = (ForAnyElementType *)**(undefined8 **)((longlong)param_1 + 8);
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (*(int *)((longlong)&pFVar7[1].Data + 4) < (int)uVar18) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar18,pFVar7,*(int *)&pFVar7[1].Data,(int *)((longlong)&pFVar7[1].Data + 4))
      ;
    }
    uVar29 = (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
    uVar18 = 0;
    if ((uVar29 != 0) &&
       (pFVar8 = (param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
       0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
      uVar23 = 1;
      uVar18 = 1;
      if (1 < (int)uVar29) {
        do {
          sVar5 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar23 >> 9) * 8) +
                            (ulonglong)(uVar23 & 0x1ff) * 2);
          if ((sVar5 != 0) && (uVar18 = uVar23, sVar5 != -1)) break;
          uVar23 = uVar23 + 1;
          uVar18 = uVar23;
        } while ((int)uVar23 < (int)uVar29);
      }
    }
joined_r0x0001496fe5eb:
    if (uVar18 != uVar29) {
      while( true ) {
        pFVar7 = (ForAnyElementType *)**(undefined8 **)((longlong)param_1 + 8);
        lVar25 = *(longlong *)
                  ((param_2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        dStack_e0 = *(double *)(lVar25 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        fStack_150 = (float)*pdVar2;
        fStack_14c = (float)pdVar2[1];
        fStack_148 = (float)dStack_e0;
        if (((pFVar7->Data <= (FScriptContainerElement *)&fStack_150) &&
            ((FScriptContainerElement *)&fStack_150 <
             pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0xc)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar23 = *(uint *)&pFVar7[1].Data;
        puVar1 = (uint *)((longlong)&pFVar7[1].Data + 4);
        if (uVar23 == *puVar1) {
          uVar23 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,pFVar7,(int *)puVar1);
        }
        pFVar8 = pFVar7->Data;
        *(uint *)&pFVar7[1].Data = uVar23 + 1;
        *(ulonglong *)(pFVar8 + (longlong)(int)uVar23 * 0xc) = CONCAT44(fStack_14c,fStack_150);
        *(float *)(pFVar8 + (longlong)(int)uVar23 * 0xc + 8) = fStack_148;
        if (iVar17 == 0) {
          if ((uVar18 != uVar23) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("vid == Index",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
                                  ,0x578,L""), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          uVar20 = 0;
          if ((int)uVar18 < TStack_160.ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          *(uint *)(TStack_160.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) = uVar23;
        }
        uVar18 = uVar18 + 1;
        if ((int)uVar29 <= (int)uVar18) break;
        pFVar8 = (param_2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          if ((*(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
          uVar18 = uVar18 + 1;
          if ((int)uVar29 <= (int)uVar18) goto joined_r0x0001496fe5eb;
        }
      }
      goto joined_r0x0001496fe5eb;
    }
  }
  uVar18 = (param_2->TriangleRefCounts).UsedCount;
  lVar25 = **(longlong **)((longlong)param_1 + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)(lVar25 + 0x1c) < (int)uVar18) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar18,(ForAnyElementType *)(lVar25 + 0x10),*(int *)(lVar25 + 0x18),
               (int *)(lVar25 + 0x1c));
  }
  uVar18 = (param_2->TriangleRefCounts).UsedCount;
  lVar25 = **(longlong **)((longlong)param_1 + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (*(int *)(lVar25 + 0x2c) < (int)uVar18) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar18,(ForAnyElementType *)(lVar25 + 0x20),*(int *)(lVar25 + 0x28),
               (int *)(lVar25 + 0x2c));
  }
  fVar14 = __real_322bcc77;
  iStack_138 = (param_2->TriangleRefCounts).RefCounts.CurBlockUsed +
               (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar18 = 0;
  if (((iStack_138 != 0) &&
      (pFVar8 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
      0xfffd < (ushort)(**(short **)pFVar8 - 1U))) && (uVar18 = 1, 1 < iStack_138)) {
    do {
      sVar5 = *(short *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 2);
      if ((sVar5 != 0) && (sVar5 != -1)) break;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iStack_138);
  }
  uStack_134 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (uVar18 != uStack_134) {
LAB_1496feb00:
    do {
      lVar25 = *(longlong *)
                ((param_2->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
      uStack_f0 = *(undefined8 *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      uVar29 = *(uint *)(lVar25 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      uStack_170 = 0;
      uStack_168 = 0;
      if (bVar13) {
        uVar29 = uVar18 * 3;
        uVar23 = 0;
        if ((int)uVar29 < TStack_160.ArrayNum) {
          uVar23 = ~uVar29 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar25 = (longlong)(int)uVar29;
        uStack_170 = CONCAT44(uStack_170._4_4_,
                              *(undefined4 *)(TStack_160.AllocatorInstance.Data + lVar25 * 4));
        uVar23 = 0;
        if ((int)(uVar29 + 1) < TStack_160.ArrayNum) {
          uVar23 = ~(uVar29 + 1) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uStack_170 = CONCAT44(*(undefined4 *)(TStack_160.AllocatorInstance.Data + lVar25 * 4 + 4),
                              (uint)uStack_170);
        uVar23 = 0;
        if ((int)(uVar29 + 2) < TStack_160.ArrayNum) {
          uVar23 = ~(uVar29 + 2) >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar15 = uStack_170;
        uVar29 = *(uint *)(TStack_160.AllocatorInstance.Data + lVar25 * 4 + 8);
      }
      else {
        uVar15 = uStack_f0;
        if (iVar17 != 0) {
          lVar25 = (longlong)(int)(uint)uStack_f0;
          uVar23 = 0;
          if ((int)(uint)uStack_f0 < TStack_160.ArrayNum) {
            uVar23 = ~(uint)uStack_f0 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar26 = (longlong)(int)uStack_f0._4_4_;
          uStack_170 = CONCAT44(uStack_170._4_4_,
                                *(undefined4 *)(TStack_160.AllocatorInstance.Data + lVar25 * 4));
          uVar23 = 0;
          if ((int)uStack_f0._4_4_ < TStack_160.ArrayNum) {
            uVar23 = ~uStack_f0._4_4_ >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uStack_170 = CONCAT44(*(undefined4 *)(TStack_160.AllocatorInstance.Data + lVar26 * 4),
                                (uint)uStack_170);
          uVar23 = 0;
          if ((int)uVar29 < TStack_160.ArrayNum) {
            uVar23 = ~uVar29 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar15 = uStack_170;
          uVar29 = *(uint *)(TStack_160.AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
        }
      }
      uStack_168 = uVar29;
      uStack_170 = uVar15;
      lVar25 = (longlong)(int)(uint)uStack_170;
      plVar9 = (longlong *)**(longlong **)((longlong)param_1 + 8);
      uVar29 = 0;
      if ((int)(uint)uStack_170 < (int)plVar9[1]) {
        uVar29 = ~(uint)uStack_170 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar24 = (longlong)(int)uStack_170._4_4_;
      lVar26 = *plVar9;
      plVar9 = (longlong *)**(longlong **)((longlong)param_1 + 8);
      uVar29 = 0;
      if ((int)uStack_170._4_4_ < (int)plVar9[1]) {
        uVar29 = ~uStack_170._4_4_ >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar28 = (longlong)(int)uStack_168;
      lVar10 = *plVar9;
      plVar9 = (longlong *)**(longlong **)((longlong)param_1 + 8);
      uVar29 = 0;
      if ((int)uStack_168 < (int)plVar9[1]) {
        uVar29 = ~uStack_168 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar35 = *(float *)(lVar10 + lVar24 * 0xc);
      fVar3 = *(float *)(lVar26 + lVar25 * 0xc);
      lVar11 = *plVar9;
      if ((((((fVar3 != fVar35) ||
             (*(float *)(lVar10 + 4 + lVar24 * 0xc) != *(float *)(lVar26 + 4 + lVar25 * 0xc))) ||
            (*(float *)(lVar10 + 8 + lVar24 * 0xc) != *(float *)(lVar26 + 8 + lVar25 * 0xc))) &&
           (((fVar4 = *(float *)(lVar11 + lVar28 * 0xc), fVar3 != fVar4 ||
             (*(float *)(lVar11 + 4 + lVar28 * 0xc) != *(float *)(lVar26 + 4 + lVar25 * 0xc))) ||
            (*(float *)(lVar11 + 8 + lVar28 * 0xc) != *(float *)(lVar26 + 8 + lVar25 * 0xc))))) &&
          (((fVar35 != fVar4 ||
            (*(float *)(lVar11 + 4 + lVar28 * 0xc) != *(float *)(lVar10 + 4 + lVar24 * 0xc))) ||
           (*(float *)(lVar11 + 8 + lVar28 * 0xc) != *(float *)(lVar10 + 8 + lVar24 * 0xc))))) &&
         (fVar32 = *(float *)(lVar26 + 4 + lVar25 * 0xc),
         fVar30 = *(float *)(lVar26 + 8 + lVar25 * 0xc),
         fVar34 = fVar30 - *(float *)(lVar10 + 8 + lVar24 * 0xc),
         fVar33 = fVar32 - *(float *)(lVar10 + 4 + lVar24 * 0xc),
         fVar32 = fVar32 - *(float *)(lVar11 + 4 + lVar28 * 0xc),
         fVar30 = fVar30 - *(float *)(lVar11 + 8 + lVar28 * 0xc),
         fVar31 = fVar33 * fVar30 - fVar34 * fVar32,
         fVar32 = (fVar3 - fVar35) * fVar32 - fVar33 * (fVar3 - fVar4),
         fVar35 = fVar34 * (fVar3 - fVar4) - (fVar3 - fVar35) * fVar30,
         fVar14 <= fVar35 * fVar35 + fVar31 * fVar31 + fVar32 * fVar32)) {
        lVar25 = **(longlong **)((longlong)param_1 + 8);
        if (((*(undefined8 **)(lVar25 + 0x10) <= &uStack_170) &&
            (&uStack_170 <
             (undefined8 *)
             ((longlong)*(undefined8 **)(lVar25 + 0x10) + (longlong)*(int *)(lVar25 + 0x1c) * 0xc)))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = *(int *)(lVar25 + 0x18);
        if (iVar19 == *(int *)(lVar25 + 0x1c)) {
          iVar19 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(lVar25 + 0x10),(int *)(lVar25 + 0x1c));
        }
        *(int *)(lVar25 + 0x18) = iVar19 + 1;
        lVar25 = *(longlong *)(lVar25 + 0x10);
        *(undefined8 *)(lVar25 + (longlong)iVar19 * 0xc) = uStack_170;
        *(uint *)(lVar25 + 8 + (longlong)iVar19 * 0xc) = uStack_168;
        if (pTStack_120 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          auStack_178[0] = 0;
        }
        else {
          auStack_178[0] =
               (undefined2)
               *(undefined4 *)
                (*(longlong *)(*(longlong *)&pTStack_120->field_0x20 + (ulonglong)(uVar18 >> 9) * 8)
                + (ulonglong)(uVar18 & 0x1ff) * 4);
        }
        lVar25 = **(longlong **)((longlong)param_1 + 8);
        if (((*(undefined2 **)(lVar25 + 0x20) <= auStack_178) &&
            (auStack_178 < *(undefined2 **)(lVar25 + 0x20) + *(int *)(lVar25 + 0x2c))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar19 = *(int *)(lVar25 + 0x28);
        if (iVar19 == *(int *)(lVar25 + 0x2c)) {
          iVar19 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,(ForAnyElementType *)(lVar25 + 0x20),(int *)(lVar25 + 0x2c));
        }
        *(int *)(lVar25 + 0x28) = iVar19 + 1;
        *(undefined2 *)(*(longlong *)(lVar25 + 0x20) + (longlong)iVar19 * 2) = auStack_178[0];
      }
      uVar18 = uVar18 + 1;
      if ((int)uVar18 < iStack_138) {
        do {
          lVar25 = *(longlong *)
                    ((param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar18 >> 9) * 8);
          if ((*(short *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar25 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) goto LAB_1496feb00;
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < iStack_138);
      }
    } while (uVar18 != uStack_134);
  }
  puVar1 = (uint *)(**(longlong **)((longlong)param_1 + 8) + 0x40);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)(**(longlong **)((longlong)param_1 + 8) + 0x40);
  *puVar1 = *puVar1 | 2;
  puVar1 = (uint *)(**(longlong **)((longlong)param_1 + 8) + 0x40);
  *puVar1 = *puVar1 | 4;
  if (TStack_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_160.AllocatorInstance.Data);
  }
  return;
}

// Call @ 149704400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::GetTriMeshSizeEstimates'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  UPhysicsSettings *pUVar3;
  
  pUVar3 = UPhysicsSettings::Get();
  if ((pUVar3->bSupportUVFromHitResults != false) &&
     (pFVar1 = (param_2->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0)) {
    iVar2 = (**(code **)(pFVar1->_padding_ + 0xa8))();
    if ((0 < iVar2) && (*(char *)(*(longlong *)param_1 + 0x854) == '\0')) {
      **(longlong **)((longlong)param_1 + 8) =
           (longlong)((param_2->TriangleRefCounts).UsedCount * 3);
      return;
    }
  }
  **(longlong **)((longlong)param_1 + 8) = (longlong)(param_2->VertexRefCounts).UsedCount;
  return;
}

// Call @ 149704480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::InitializeByMaterial'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1497044a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::Upload(*(FMeshRenderBufferSet **)param_1);
  return;
}

// Call @ 1497044b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParallelComputeROIBounds'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `ParallelComputeROIBounds'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1497044c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::Reset'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>::Call
          (void *param_1,FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != *(FDynamicMesh3 **)(*(longlong *)param_1 + 0xb8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("&EditMesh == Mesh.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149704506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x2b0))();
  return;
}

// Call @ 149704520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::ResetToCube'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  FMeshShapeGenerator *pFVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMeshAttributeSet *this;
  FMinimalBoxMeshGenerator FStack_348;
  FDynamicMesh3 FStack_248;
  
  UE::Geometry::FDynamicMesh3::Clear(param_2);
  UE::Geometry::FMinimalBoxMeshGenerator::FMinimalBoxMeshGenerator(&FStack_348);
  FStack_348.Box.Extents.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4049000000000000;
  FStack_348.Box.Frame.Origin.field0_0x0._16_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  FStack_348.Box.Frame.Origin.field0_0x0._20_4_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  FStack_348.Box.Frame.Rotation.field0_0x0._0_4_ = 0;
  FStack_348.Box.Frame.Rotation.field0_0x0._4_4_ = 0;
  FStack_348.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  FStack_348.Box.Frame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  FStack_348.Box.Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_348.Box.Frame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FStack_348.Box.Frame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
  FStack_348.Box.Extents.field0_0x0._16_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4049000000000000,0);
  FStack_348.Box.Extents.field0_0x0._8_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4049000000000000;
  FStack_348.Box.Extents.field0_0x0._20_4_ =
       (int)((ulonglong)
             (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4049000000000000) >>
            0x20);
  pFVar2 = UE::Geometry::FMinimalBoxMeshGenerator::Generate(&FStack_348);
  pFVar3 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(&FStack_248,pFVar2);
  UE::Geometry::FDynamicMesh3::operator=(param_2,pFVar3);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&FStack_248);
  UE::Geometry::FDynamicMesh3::EnableTriangleGroups(param_2,0);
  pFVar1 = (param_2->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this);
  FStack_348._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  if ((void *)FStack_348._padding_ != (void *)0x0) {
    FMemory::Free((void *)FStack_348._padding_);
  }
  return;
}

// Call @ 149704530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UBaseDynamicMeshComponent::DefaultVertexColorMaterial = *(UMaterialInterface **)param_1;
  return;
}

// Call @ 149704550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UBaseDynamicMeshComponent::DefaultWireframeMaterial = *(UMaterialInterface **)param_1;
  return;
}

// Call @ 149704570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::SetMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>::
Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(param_2,*(FDynamicMesh3 **)param_1);
  return;
}

// Call @ 149704590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMesh::SetMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>::
Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=(param_2,*(FDynamicMesh3 **)param_1);
  return;
}

// Call @ 1497045b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::ValidateMaterialSlots'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar2 = (param_2->AttributeSet).Ptr;
  if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
     (pTVar3 = (pFVar2->MaterialIDAttrib).Ptr,
     pTVar3 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    uVar10 = (param_2->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar9 = 0;
    if ((uVar10 != 0) &&
       (pFVar4 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar9 = 0,
       0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
      uVar8 = 1;
      uVar9 = 1;
      if (1 < (int)uVar10) {
        do {
          lVar7 = (ulonglong)(uVar8 & 0x1ff) * 2;
          lVar5 = *(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8);
          if ((*(short *)(lVar7 + lVar5) != 0) && (uVar9 = uVar8, *(short *)(lVar7 + lVar5) != -1))
          break;
          uVar8 = uVar8 + 1;
          uVar9 = uVar8;
        } while ((int)uVar8 < (int)uVar10);
      }
    }
joined_r0x0001496ffab7:
    if (uVar9 != uVar10) {
      while( true ) {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)&pTVar3->field_0x20 + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 4);
        piVar6 = *(int **)param_1;
        if (iVar1 < *piVar6) {
          iVar1 = *piVar6;
        }
        uVar9 = uVar9 + 1;
        *piVar6 = iVar1;
        if ((int)uVar10 <= (int)uVar9) break;
        pFVar4 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          lVar5 = (ulonglong)(uVar9 >> 9) * 8;
          lVar7 = (ulonglong)(uVar9 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar5)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(pFVar4 + lVar5)) != -1)) break;
          uVar9 = uVar9 + 1;
          if ((int)uVar10 <= (int)uVar9) goto joined_r0x0001496ffab7;
        }
      }
      goto joined_r0x0001496ffab7;
    }
  }
  return;
}

// Call @ 1497045c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1497045e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 149704600

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 149704620

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 149704640

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 149704660

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 149704680

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1497046a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1497046c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::Upload(*(FMeshRenderBufferSet **)param_1);
  return;
}

// Call @ 1497046d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::UpdateAutoCalculatedTangents'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar3;
  FComputeTangentsOptions aFStackX_10 [12];
  
  pFVar1 = (param_2->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    if ((pFVar1->UVLayers).Array.ArrayNum < 1) {
      pTVar3 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
    }
    else {
      pTVar3 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                (pFVar1->UVLayers).Array.AllocatorInstance.Data;
    }
    if ((pFVar1->NormalLayers).Array.ArrayNum < 1) {
      pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((pTVar3 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
       (pTVar2 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      aFStackX_10[0].bAveraged = true;
      aFStackX_10[0].bAngleWeighted = true;
      *(FDynamicMesh3 **)(*(longlong *)param_1 + 0x770) = param_2;
      UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
                ((TMeshTangents<float> *)(*(longlong *)param_1 + 0x770),pTVar2,pTVar3,aFStackX_10);
      *(undefined8 *)(*(longlong *)param_1 + 0x770) = 0;
      *(undefined1 *)(*(longlong *)param_1 + 0x769) = 1;
    }
  }
  return;
}

// Call @ 1497046e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if ((*(char *)((longlong)param_1 + 9) == '\0') && (*(char *)((longlong)param_1 + 0xb) == '\0')) {
    FMeshRenderBufferSet::UploadVertexUpdate
              (*(FMeshRenderBufferSet **)param_1,*(bool *)((longlong)param_1 + 8),false,
               *(bool *)((longlong)param_1 + 10));
    return;
  }
  FMeshRenderBufferSet::UploadVertexUpdate
            (*(FMeshRenderBufferSet **)param_1,*(bool *)((longlong)param_1 + 8),true,
             *(bool *)((longlong)param_1 + 10));
  return;
}

// Call @ 149704720

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  UDynamicMeshComponent::GetTriangleColor
            ((UDynamicMeshComponent *)*param_2,param_1,(int)*(undefined8 *)param_3);
  return (FColor)SUB84(param_1,0);
}

// Call @ 149704750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Local::FDynamicMeshCopyHelper::ExtractStashedMesh'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  UE::Geometry::FDynamicMesh3::operator=((FDynamicMesh3 *)**(undefined8 **)param_1,param_2);
  return;
}

// Call @ 149704770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  UE::Geometry::FDynamicMeshTangents::GetTangentVectors
            (param_1,*param_3,*param_4,param_5,param_6,param_7);
  return;
}

// Call @ 1497047b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  UE::Geometry::FDynamicMeshTangents::GetTangentVectors
            (param_1,*param_3,*param_4,param_5,param_6,param_7);
  return;
}

// Call @ 1497047f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if ((*(char *)((longlong)param_1 + 9) == '\0') && (*(char *)((longlong)param_1 + 0xb) == '\0')) {
    FMeshRenderBufferSet::UploadVertexUpdate
              (*(FMeshRenderBufferSet **)param_1,*(bool *)((longlong)param_1 + 8),false,
               *(bool *)((longlong)param_1 + 10));
    return;
  }
  FMeshRenderBufferSet::UploadVertexUpdate
            (*(FMeshRenderBufferSet **)param_1,*(bool *)((longlong)param_1 + 8),true,
             *(bool *)((longlong)param_1 + 10));
  return;
}

// Call @ 149704830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,void>
::Call(void *param_1)

{
  if (CpuChannel->Enabled < 0) {
    UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId728,
             "SimpleDynamicMeshComponent_FastVertexUpdate_AsyncBoundsUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
             ,0x2d8);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId728);
  UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 1497048a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,void>
::Call(void *param_1)

{
  if (CpuChannel->Enabled < 0) {
    UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId815,
             "SimpleDynamicMeshComponent_FastVertexUpdate_AsyncBoundsUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
             ,0x32f);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId815);
  UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 149704910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()'::__l33::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UDynamicMeshComponent::GetPhysicsTriMeshData'::__l2::<lambda_1>::operator()'::__l33::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 149704920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::TransferVertexUpdateToGPU
            (*(FMeshRenderBufferSet **)param_1,(FRHICommandListBase *)param_2,
             *(bool *)((longlong)param_1 + 8),*(bool *)((longlong)param_1 + 9),
             *(bool *)((longlong)param_1 + 0xb),*(bool *)((longlong)param_1 + 10));
  return;
}

// Call @ 149704960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,void>::
Call(void *param_1)

{
  if (CpuChannel->Enabled < 0) {
    UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId510,
             "SimpleDynamicMeshComponent_FastPositionsUpdate_AsyncBoundsUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
             ,0x1fe);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId510);
  UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 1497049d0

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  UDynamicMeshComponent::GetTriangleColor
            ((UDynamicMeshComponent *)*param_2,param_1,(int)*(undefined8 *)param_3);
  return (FColor)SUB84(param_1,0);
}

// Call @ 149704a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,void>
::Call(void *param_1)

{
  if (CpuChannel->Enabled < 0) {
    UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId587,
             "SimpleDynamicMeshComponent_FastVertexAttribUpdate_AsyncBoundsUpdate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
             ,0x24b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
  UDynamicMeshComponent::UpdateLocalBounds(*(UDynamicMeshComponent **)param_1);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 149704a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  <lambda_1> <StackX_8;
  uint auStack_78 [2];
  ForAnyElementType FStack_70;
  int aiStack_68 [2];
  TArrayView<std::nullptr_t,int> TStack_60;
  code *pcStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ForAnyElementType *pFStack_30;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId910,
               "SimpleDynamicMeshComponent_FastVertexUpdatePrecomp_FindSets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\Components\\DynamicMeshComponent.cpp"
               ,0x38e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId910);
  }
  uVar11 = 0;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)param_1 + 0x730) + 8);
  FStack_70.Data = (FScriptContainerElement *)0x0;
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  else {
    iVar6 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar2,&FStack_70,aiStack_68,aiStack_68 + 1);
    DefaultConstructItems<std::atomic<bool>,int>(FStack_70.Data + iVar6,uVar2);
    uVar8 = uVar11;
    uVar10 = uVar11;
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < aiStack_68[0]) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      LOCK();
      FStack_70.Data[uVar8] = (FScriptContainerElement)0x0;
      UNLOCK();
      uVar8 = uVar8 + 1;
    } while ((int)(uVar9 + 1) < (int)uVar2);
  }
  uStack_40 = *(undefined8 *)param_1;
  lStack_38 = *(longlong *)((longlong)param_1 + 0x10);
  pFStack_30 = &FStack_70;
  pcStack_50 = TFunctionRefCaller<```UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
  puStack_48 = &uStack_40;
  TStack_60.DataPtr = (void **)0x0;
  TStack_60.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(lStack_38 + 8),1,
             (TFunctionRef<void___cdecl(int)> *)&pcStack_50,<StackX_8,None,&TStack_60);
  pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 8);
  iVar6 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar6 < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  auStack_78[0] = 0;
  if (0 < (int)uVar2) {
    do {
      uVar9 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar9 < aiStack_68[0]) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (FStack_70.Data[(int)uVar9] != (FScriptContainerElement)0x0) {
        pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 8);
        if (((pFVar3->Data <= (FScriptContainerElement *)auStack_78) &&
            ((FScriptContainerElement *)auStack_78 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar6 + 1;
        *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = auStack_78[0];
      }
      auStack_78[0] = auStack_78[0] + 1;
      uVar11 = (ulonglong)auStack_78[0];
    } while ((int)auStack_78[0] < (int)uVar2);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 149704a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `CollectSubDecomposition'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704a90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,bool>
::Call(void *param_1)

{
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  <lambda_1> <Stack_98;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_58;
  undefined8 uStack_40;
  TUniqueFunction<void___cdecl(void)> TStack_38;
  
  <Stack_98.__this = *(UDynamicMeshComponent **)param_1;
  <Stack_98.BoundsOut = *(TAxisAlignedBox3<double> **)((longlong)param_1 + 0x18);
  <Stack_98.Triangles = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  auStack_68._0_8_ = (UDynamicMeshComponent *)0x0;
  uStack_40 = 0;
  Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)auStack_80,DynamicMeshComponentAsyncExecTarget,&<Stack_98,
             (TUniqueFunction<void___cdecl(void)> *)auStack_68);
  auStack_68._0_8_ = *(undefined8 *)param_1;
  auStack_68._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  pTStack_58 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  TStack_38._0_8_ = 0;
  TStack_38._40_8_ = 0;
  Async<__UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>_>
            ((TFuture<void> *)&<Stack_98,DynamicMeshComponentAsyncExecTarget,
             (<lambda_2> *)auStack_68,&TStack_38);
  pUVar1 = <Stack_98.__this;
  if (<Stack_98.__this != (UDynamicMeshComponent *)0x0) {
    do {
      cVar2 = (**(code **)(*(longlong *)pUVar1->_padding_ + 0x20))
                        ((longlong *)pUVar1->_padding_,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  if (auStack_80._0_8_ != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(auStack_80._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(auStack_80._0_8_ + 0x60),0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)<Stack_98.BoundsOut);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_80._8_8_);
  return true;
}

// Call @ 149704aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::ApplyTransform'::__l5::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
::Call(void *param_1,FDynamicMesh3 *param_2)

{
  double *pdVar1;
  TQuaternion<double>_u_0 TStack_60;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  pdVar1 = *(double **)((longlong)param_1 + 8);
  TStack_60._s_0.X = *pdVar1;
  TStack_60._s_0.Y = pdVar1[1];
  TStack_60._s_0.Z = pdVar1[2];
  TStack_60._s_0.W = pdVar1[3];
  dStack_30 = pdVar1[6];
  dStack_40 = pdVar1[4];
  dStack_38 = pdVar1[5];
  dStack_18 = pdVar1[10];
  dStack_28 = pdVar1[8];
  dStack_20 = pdVar1[9];
  if (**(char **)param_1 != '\0') {
    MeshTransforms::ApplyTransformInverse
              (param_2,(TTransformSRT3<double> *)&TStack_60._s_0,true,All);
    return;
  }
  MeshTransforms::ApplyTransform(param_2,(TTransformSRT3<double> *)&TStack_60._s_0,true,All);
  return;
}

// Call @ 149704ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMeshRenderBufferSet::Upload(*(FMeshRenderBufferSet **)param_1);
  return;
}

// Call @ 149704ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,void,UE::Math::TVector4<float>_&>
::Call(void *param_1,TVector4<float> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x6d0) != (void *)0x0) {
    CheckCallable(*(void **)(lVar1 + 0x6d0));
    pcVar2 = *(code **)(lVar1 + 0x6d0);
    plVar4 = (longlong *)(lVar1 + 0x6e0);
    if (*(longlong **)(lVar1 + 0x6f8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x6f8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2);
  }
  return;
}

// Call @ 149704b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704b40

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  `UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>::operator()
            (param_2,param_1,(int)*(undefined8 *)param_3);
  return (FColor)SUB84(param_1,0);
}

// Call @ 149704b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  UE::Geometry::TMeshTangents<float>::GetTriangleVertexTangentVectors<UE::Math::TVector<float>_>
            (*(TMeshTangents<float> **)param_1,*param_3,*param_4,param_6,param_7);
  return;
}

// Call @ 149704ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  UE::Geometry::TMeshTangents<float>::GetTriangleVertexTangentVectors<UE::Math::TVector<float>_>
            (*(TMeshTangents<float> **)param_1,*param_3,*param_4,param_6,param_7);
  return;
}

// Call @ 149704bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CollectSubDecomposition'::__l2::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `CollectSubDecomposition'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 149704be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,void,UE::Math::TVector4<float>_&>
::Call(void *param_1,TVector4<float> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x6d0) != (void *)0x0) {
    CheckCallable(*(void **)(lVar1 + 0x6d0));
    pcVar2 = *(code **)(lVar1 + 0x6d0);
    plVar4 = (longlong *)(lVar1 + 0x6e0);
    if (*(longlong **)(lVar1 + 0x6f8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar1 + 0x6f8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2);
  }
  return;
}

// Call @ 149704c50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
::Call(void *param_1,FDynamicMesh3 **param_2,int *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res8 [2];
  FDynamicMesh3 *local_res10;
  
  lVar1 = *(longlong *)param_1;
  if (*(void **)(lVar1 + 0x700) != (void *)0x0) {
    local_res8[0] = *param_3;
    local_res10 = *param_2;
    CheckCallable(*(void **)(lVar1 + 0x700));
    pcVar2 = *(code **)(lVar1 + 0x700);
    plVar5 = (longlong *)(lVar1 + 0x710);
    if (*(longlong **)(lVar1 + 0x728) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x728);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar2)(uVar4,&local_res10,local_res8);
    return (bool)uVar3;
  }
  return false;
}

// Call @ 149704cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
::Call(void *param_1,int *param_2,int *param_3,int *param_4,TVector<float> *param_5,
      TVector<float> *param_6,TVector<float> *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  
  local_res8[0] = *param_4;
  local_res10[0] = *param_3;
  local_res18[0] = *param_2;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res18,local_res10,local_res8,param_5,param_6,param_7);
  return;
}

