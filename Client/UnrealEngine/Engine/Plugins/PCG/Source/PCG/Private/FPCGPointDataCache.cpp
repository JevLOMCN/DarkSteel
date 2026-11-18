// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149854590

UScriptStruct * __cdecl FPCGPointDataCache::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPointDataCache.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPointDataCache.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPointDataCache,(UObject *)pUVar1,
                         L"PCGPointDataCache");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPointDataCache.OuterSingleton;
}

// GetResourceSizeEx @ 1498c5370

void __thiscall
FPCGPointDataCache::GetResourceSizeEx(FPCGPointDataCache *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pUVar3 = (this->CachedPointData).field0_0x0.DebugPtr;
  if (pUVar3 != (UPCGBasePointData *)0x0) {
    (**(code **)(pUVar3->_padding_ + 400))();
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->CachedBoundedPointDataBoxes).ArrayMax * 7 +
                     (longlong)(this->CachedBoundedPointData).ArrayMax) * 8);
  pFVar5 = (this->CachedBoundedPointData).AllocatorInstance.Data;
  iVar2 = (this->CachedBoundedPointData).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CachedBoundedPointData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGBasePointData_const_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    plVar4 = *(longlong **)pFVar5;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 400))(plVar4,param_1);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// ToBasePointDataInternal @ 1498f7310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
FPCGPointDataCache::ToBasePointDataInternal
          (FPCGPointDataCache *this,FPCGContext *param_1,TBox<double> *param_2,bool param_3,
          FWindowsRecursiveMutex *param_4,
          TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UE::Math::TBox<double>_const_&)>
          *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TBox<double> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  UPCGBasePointData *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FPCGContext *local_res18 [2];
  UPCGBasePointData *local_58;
  FPCGContext *local_50 [5];
  
  if ((param_2->IsValid == '\0') || (!param_3)) {
    if ((this->CachedPointData).field0_0x0.DebugPtr == (UPCGBasePointData *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)param_4);
      if ((this->CachedPointData).field0_0x0.DebugPtr == (UPCGBasePointData *)0x0) {
        local_50[0] = param_1;
        pUVar10 = (UPCGBasePointData *)
                  (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_50,param_2);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UPCGBasePointData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        (this->CachedPointData).field0_0x0.DebugPtr = pUVar10;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)param_4);
    }
    return (this->CachedPointData).field0_0x0.DebugPtr;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_4);
  if (((this->CachedBoundedPointDataBoxes).ArrayNum != (this->CachedBoundedPointData).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedBoundedPointDataBoxes.Num() == CachedBoundedPointData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSpatialData.cpp"
                         ,0xa7,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UPCGBasePointData *)(*pcVar4)();
    return pUVar10;
  }
  dVar6 = __real_3f1a36e2e0000000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = 0;
  if (0 < (this->CachedBoundedPointDataBoxes).ArrayNum) {
    lVar11 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar12 < (this->CachedBoundedPointDataBoxes).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pUVar10 = (UPCGBasePointData *)(*pcVar4)();
        return pUVar10;
      }
      pFVar2 = (this->CachedBoundedPointDataBoxes).AllocatorInstance.Data;
      if (param_2->IsValid == '\0') {
        if (pFVar2[lVar11 + 0x30] == (FScriptContainerElement)0x0) {
LAB_1498f742c:
          uVar13 = 0;
          if ((int)uVar12 < (this->CachedBoundedPointData).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            pUVar10 = (UPCGBasePointData *)(*pcVar4)();
            return pUVar10;
          }
          pUVar10 = *(UPCGBasePointData **)
                     ((this->CachedBoundedPointData).AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 8);
          if (pUVar10 != (UPCGBasePointData *)0x0) goto LAB_1498f7626;
          break;
        }
      }
      else if (((((pFVar2[lVar11 + 0x30] != (FScriptContainerElement)0x0) &&
                 (dVar5 = (param_2->Min).field0_0x0._s_0.X - *(double *)(pFVar2 + lVar11),
                 uVar14 = SUB84(dVar5,0) & uVar13, uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7
                 , (double)CONCAT44(uVar15,uVar14) < dVar6 ||
                   (double)CONCAT44(uVar15,uVar14) == dVar6)) &&
                (dVar5 = (param_2->Min).field0_0x0._s_0.Y - *(double *)(pFVar2 + lVar11 + 8),
                uVar14 = SUB84(dVar5,0) & uVar13, uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                (double)CONCAT44(uVar15,uVar14) < dVar6 || (double)CONCAT44(uVar15,uVar14) == dVar6)
                ) && ((dVar5 = (param_2->Min).field0_0x0._s_0.Z -
                               *(double *)(pFVar2 + lVar11 + 0x10), uVar14 = SUB84(dVar5,0) & uVar13
                      , uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                      (double)CONCAT44(uVar15,uVar14) < dVar6 ||
                      (double)CONCAT44(uVar15,uVar14) == dVar6 &&
                      (dVar5 = (param_2->Max).field0_0x0._s_0.X -
                               *(double *)(pFVar2 + lVar11 + 0x18), uVar14 = SUB84(dVar5,0) & uVar13
                      , uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                      (double)CONCAT44(uVar15,uVar14) < dVar6 ||
                      (double)CONCAT44(uVar15,uVar14) == dVar6)))) &&
              ((dVar5 = (param_2->Max).field0_0x0._s_0.Y - *(double *)(pFVar2 + lVar11 + 0x20),
               uVar14 = SUB84(dVar5,0) & uVar13, uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7,
               (double)CONCAT44(uVar15,uVar14) < dVar6 || (double)CONCAT44(uVar15,uVar14) == dVar6
               && (dVar5 = (param_2->Max).field0_0x0._s_0.Z - *(double *)(pFVar2 + lVar11 + 0x28),
                  uVar14 = SUB84(dVar5,0) & uVar13,
                  uVar15 = (uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                  (double)CONCAT44(uVar15,uVar14) < dVar6 ||
                  (double)CONCAT44(uVar15,uVar14) == dVar6)))) goto LAB_1498f742c;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x38;
    } while ((int)uVar12 < (this->CachedBoundedPointDataBoxes).ArrayNum);
  }
  local_res18[0] = param_1;
  pUVar10 = (UPCGBasePointData *)
            (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res18,param_2);
  pTVar3 = (TBox<double> *)(this->CachedBoundedPointDataBoxes).AllocatorInstance.Data;
  if (((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->CachedBoundedPointDataBoxes).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UPCGBasePointData *)(*pcVar4)();
    return pUVar10;
  }
  iVar9 = (this->CachedBoundedPointDataBoxes).ArrayNum;
  piVar1 = &(this->CachedBoundedPointDataBoxes).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->CachedBoundedPointDataBoxes).AllocatorInstance,piVar1);
  }
  (this->CachedBoundedPointDataBoxes).ArrayNum = iVar9 + 1;
  dVar6 = (param_2->Min).field0_0x0._s_0.Y;
  lVar11 = (longlong)iVar9 * 0x38;
  pFVar2 = (this->CachedBoundedPointDataBoxes).AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar11) = (param_2->Min).field0_0x0._s_0.X;
  *(double *)(pFVar2 + lVar11 + 8) = dVar6;
  dVar6 = (param_2->Max).field0_0x0._s_0.X;
  *(double *)(pFVar2 + lVar11 + 0x10) = (param_2->Min).field0_0x0._s_0.Z;
  *(double *)(pFVar2 + lVar11 + 0x10 + 8) = dVar6;
  dVar6 = (param_2->Max).field0_0x0._s_0.Z;
  *(double *)(pFVar2 + lVar11 + 0x20) = (param_2->Max).field0_0x0._s_0.Y;
  *(double *)(pFVar2 + lVar11 + 0x20 + 8) = dVar6;
  *(undefined8 *)(pFVar2 + lVar11 + 0x30) = *(undefined8 *)&param_2->IsValid;
  local_58 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar2 = (this->CachedBoundedPointData).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar2 + (longlong)(this->CachedBoundedPointData).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UPCGBasePointData *)(*pcVar4)();
    return pUVar10;
  }
  iVar9 = (this->CachedBoundedPointData).ArrayNum;
  piVar1 = &(this->CachedBoundedPointData).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CachedBoundedPointData).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->CachedBoundedPointData).AllocatorInstance.Data;
  (this->CachedBoundedPointData).ArrayNum = iVar9 + 1;
  *(UPCGBasePointData **)(pFVar2 + (longlong)iVar9 * 8) = local_58;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
LAB_1498f7626:
  LeaveCriticalSection((LPCRITICAL_SECTION)param_4);
  return pUVar10;
}

