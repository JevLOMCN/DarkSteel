// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// DestroyObjects @ 142025ea0

bool __thiscall
FObjectPurge::DestroyObjects(FObjectPurge *this,bool param_1,double param_2,double param_3)

{
  undefined8 *puVar1;
  UObjectBase *pUVar2;
  code *pcVar3;
  double dVar4;
  int iVar5;
  ForAnyElementType FVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  char local_res10;
  LARGE_INTEGER local_78 [8];
  
  bVar14 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FObjectPurge::DestroyObjects(bool,double,double)___ptr64'::
                __l2::__CpuProfilerEventSpecId861,"FObjectPurge::DestroyObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x35d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FObjectPurge::DestroyObjects(bool,double,double)___ptr64'::__l2
               ::__CpuProfilerEventSpecId861);
  }
  iVar5 = GIncrementalBeginDestroyGranularity;
  iVar13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  dVar4 = __real_4170000000000000;
  uVar12 = this->ObjCurrentFreeIndexObjectIndex;
  if ((int)uVar12 < GUnreachableObjects.ArrayNum) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < GUnreachableObjects.ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      FVar6.Data = GUnreachableObjects.AllocatorInstance.Data;
      puVar1 = *(undefined8 **)
                (GUnreachableObjects.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
      if ((((uint)((ulonglong)*puVar1 >> 0x3c) & 1) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectItem->IsUnreachable()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x36e,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pUVar2 = (UObjectBase *)puVar1[1];
      if (((pUVar2->ObjectFlags & (RF_FinishDestroyed|RF_BeginDestroyed)) !=
           (RF_FinishDestroyed|RF_BeginDestroyed)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object->HasAllFlags(RF_FinishDestroyed | RF_BeginDestroyed)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x371,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      FUObjectArray::FreeUObjectIndex(&GUObjectArray,pUVar2);
      *(UObjectBase **)(FVar6.Data + (longlong)(int)uVar12 * 8) = pUVar2;
      iVar13 = iVar13 + 1;
      iVar11 = this->ObjCurrentFreeIndexObjectIndex + 1;
      this->ObjCurrentFreeIndexObjectIndex = iVar11;
      if (((param_1) && (iVar5 <= iVar13)) && (iVar11 < GUnreachableObjects.ArrayNum)) {
        iVar13 = 0;
        QueryPerformanceCounter(&local_res8);
        if (param_2 < ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)
                      - param_3) break;
      }
      uVar12 = this->ObjCurrentFreeIndexObjectIndex;
    } while ((int)uVar12 < GUnreachableObjects.ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  cVar7 = local_res10;
  iVar11 = GUnreachableObjects.ArrayNum;
  if ((this->ObjCurrentFreeIndexObjectIndex == iVar11) &&
     (uVar12 = this->ObjCurrentPurgeObjectIndex, (int)uVar12 < iVar11)) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < GUnreachableObjects.ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      FVar6.Data = GUnreachableObjects.AllocatorInstance.Data;
      pUVar2 = *(UObjectBase **)
                (GUnreachableObjects.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
      (**(code **)pUVar2->_padding_)(pUVar2,0);
      FUObjectAllocator::FreeUObject(&GUObjectAllocator,pUVar2);
      *(undefined8 *)(FVar6.Data + (longlong)(int)uVar12 * 8) = 0;
      iVar13 = iVar13 + 1;
      this->ObjectsDestroyedSinceLastMarkPhase = this->ObjectsDestroyedSinceLastMarkPhase + 1;
      iVar11 = this->ObjCurrentPurgeObjectIndex + 1;
      this->ObjCurrentPurgeObjectIndex = iVar11;
      if (((cVar7 != '\0') && (iVar5 <= iVar13)) && (iVar11 < GUnreachableObjects.ArrayNum)) {
        iVar13 = 0;
        QueryPerformanceCounter(local_78);
        if (param_2 < ((double)local_78[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)
                      - param_3) {
          iVar11 = GUnreachableObjects.ArrayNum;
          break;
        }
      }
      uVar12 = this->ObjCurrentPurgeObjectIndex;
      iVar11 = GUnreachableObjects.ArrayNum;
    } while ((int)uVar12 < iVar11);
  }
  bVar8 = this->ObjCurrentPurgeObjectIndex == iVar11;
  this->bFinishedDestroyingObjects = bVar8;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// VerifyAllObjectsDestroyed @ 142093750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FObjectPurge::VerifyAllObjectsDestroyed(FObjectPurge *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  
  iVar2 = GUnreachableObjects.ArrayNum;
  pFVar1 = GUnreachableObjects.AllocatorInstance.Data + (longlong)GUnreachableObjects.ArrayNum * 8;
  FVar3.Data = GUnreachableObjects.AllocatorInstance.Data;
  while( true ) {
    if (GUnreachableObjects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::GC::FUnreachableObject,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    if (*(longlong *)FVar3.Data != 0) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FObjectPurge::VerifyAllObjectsDestroyed(void)const___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
    FVar3.Data = FVar3.Data + 8;
  }
  return;
}

