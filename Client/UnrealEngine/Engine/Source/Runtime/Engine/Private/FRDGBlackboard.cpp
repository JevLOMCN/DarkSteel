// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Create<FDynamicMeshBoundsBlackboardStruct> @ 147c1fa20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FDynamicMeshBoundsBlackboardStruct * __thiscall
FRDGBlackboard::Create<FDynamicMeshBoundsBlackboardStruct>(FRDGBlackboard *this)

{
  TArray<FRDGBlackboard::FStruct_*,TRDGArrayAllocator<0>_> *this_00;
  FRDGAllocator *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDynamicMeshBoundsBlackboardStruct *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FDynamicMeshBoundsBlackboardStruct",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                ,1099);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
          ::__l2::Index;
  this_00 = &this->Blackboard;
  if ((this->Blackboard).ArrayNum <=
      (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
           ::__l2::Index) {
    TArray<FRDGBlackboard::FStruct_*,TRDGArrayAllocator<0>_>::SetNumZeroed
              (this_00,`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FDynamicMeshBoundsBlackboardStruct>(void)'
                       ::__l2::Index + 1,Default);
  }
  puVar10 = (undefined8 *)0x0;
  uVar6 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  if ((this_00->AllocatorInstance).Data[(int)uVar4] != (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Blackboard[StructIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x47,
                       L"RDGBlackboard duplicate Create called on struct \'%s\'. Only one Create call per struct is allowed."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  this_01 = this->Allocator;
  puVar9 = FMemStackBase::Alloc(&this_01->MemStack,0x40,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *puVar9 = &
              ___7__TObject_U__TStruct_UFDynamicMeshBoundsBlackboardStruct___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar9[2] = &___7__TStruct_UFDynamicMeshBoundsBlackboardStruct___FRDGBlackboard__6B_;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar10 = puVar9;
  }
  pFVar1 = (this_01->Objects).AllocatorInstance.Data;
  local_38 = puVar10;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)(this_01->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar7 = (this_01->Objects).ArrayNum;
  piVar3 = &(this_01->Objects).ArrayMax;
  if (iVar7 == *piVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this_01->Objects).AllocatorInstance,piVar3);
  }
  (this_01->Objects).ArrayNum = iVar7 + 1;
  *(undefined8 **)((this_01->Objects).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
  if ((FStruct *)(puVar10 + 2) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FDynamicMeshBoundsBlackboardStruct *)(*pcVar2)();
      return pFVar8;
    }
  }
  (this_00->AllocatorInstance).Data[(int)uVar4] = (FStruct *)(puVar10 + 2);
  return (FDynamicMeshBoundsBlackboardStruct *)(puVar10 + 4);
}

// Create<FGPUSkinCache::FTaskData,FRDGBuilder_&,enum_EShaderPlatform,enum_ERHIPipeline_&> @ 147c1fce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FTaskData * __thiscall
FRDGBlackboard::
Create<FGPUSkinCache::FTaskData,FRDGBuilder_&,enum_EShaderPlatform,enum_ERHIPipeline_&>
          (FRDGBlackboard *this,FRDGBuilder *param_1,EShaderPlatform *param_2,ERHIPipeline *param_3)

{
  TArray<FRDGBlackboard::FStruct_*,TRDGArrayAllocator<0>_> *this_00;
  FRDGAllocator *this_01;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTaskData *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *local_58;
  FString local_50;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_50,L"FGPUSkinCache::FTaskData",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                ,0x129);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
    ::__l2::Index = AllocateIndex(&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
          ::__l2::Index;
  this_00 = &this->Blackboard;
  if ((this->Blackboard).ArrayNum <=
      (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
           ::__l2::Index) {
    TArray<FRDGBlackboard::FStruct_*,TRDGArrayAllocator<0>_>::SetNumZeroed
              (this_00,`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
                       ::__l2::Index + 1,Default);
  }
  puVar10 = (undefined8 *)0x0;
  uVar6 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  if ((this_00->AllocatorInstance).Data[(int)uVar4] != (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Blackboard[StructIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x47,
                       L"RDGBlackboard duplicate Create called on struct \'%s\'. Only one Create call per struct is allowed."
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  this_01 = this->Allocator;
  puVar9 = FMemStackBase::Alloc(&this_01->MemStack,0xd0,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  else {
    *puVar9 = &
              ___7__TObject_U__TStruct_UFTaskData_FGPUSkinCache___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar9[1] = &___7__TStruct_UFTaskData_FGPUSkinCache___FRDGBlackboard__6B_;
    FGPUSkinCache::FTaskData::FTaskData((FTaskData *)(puVar9 + 2),param_1,*param_2,*param_3);
    puVar10 = puVar9;
  }
  pFVar1 = (this_01->Objects).AllocatorInstance.Data;
  local_58 = puVar10;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar1 + (longlong)(this_01->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  iVar7 = (this_01->Objects).ArrayNum;
  piVar3 = &(this_01->Objects).ArrayMax;
  if (iVar7 == *piVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this_01->Objects).AllocatorInstance,piVar3);
  }
  (this_01->Objects).ArrayNum = iVar7 + 1;
  *(undefined8 **)((this_01->Objects).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_58;
  if ((FStruct *)(puVar10 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  uVar6 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FTaskData *)(*pcVar2)();
      return pFVar8;
    }
  }
  (this_00->AllocatorInstance).Data[(int)uVar4] = (FStruct *)(puVar10 + 1);
  return (FTaskData *)(puVar10 + 2);
}

// GetMutable<FGPUSkinCache::FTaskData> @ 147c22e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTaskData * __thiscall FRDGBlackboard::GetMutable<FGPUSkinCache::FTaskData>(FRDGBlackboard *this)

{
  FStruct *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FTaskData *pFVar5;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_18,L"FGPUSkinCache::FTaskData",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                ,0x129);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
    ::__l2::Index = AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
           ::__l2::Index < (this->Blackboard).ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FGPUSkinCache::FTaskData>(void)'
             ::__l2::Index < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTaskData *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->Blackboard).AllocatorInstance.Data[(int)uVar3];
    pFVar5 = (FTaskData *)0x0;
    if (pFVar1 != (FStruct *)0x0) {
      pFVar5 = (FTaskData *)(pFVar1 + 1);
    }
    return pFVar5;
  }
  return (FTaskData *)0x0;
}

// Create<FSkeletalMeshUpdater::FSubmitTasks,FSkeletalMeshUpdater::FSubmitTasks> @ 1485e9260

FSubmitTasks * __thiscall
FRDGBlackboard::Create<FSkeletalMeshUpdater::FSubmitTasks,FSkeletalMeshUpdater::FSubmitTasks>
          (FRDGBlackboard *this,FSubmitTasks *param_1)

{
  int *piVar1;
  FStruct **_Dst;
  FRDGAllocator *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FSubmitTasks *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *local_48;
  FString local_40;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_40,L"FSkeletalMeshUpdater::FSubmitTasks",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                ,0x189);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
    ::__l2::Index = AllocateIndex(&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
            ::__l2::Index + 1;
    if (iVar8 < (int)uVar7) {
      iVar6 = UE::Core::Private::
              ReallocGrow<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                        (8,8,uVar7 - iVar8,&(this->Blackboard).AllocatorInstance,
                         &(this->Blackboard).ArrayNum,&(this->Blackboard).ArrayMax);
      memset((this->Blackboard).AllocatorInstance.Data + iVar6,0,(longlong)(int)(uVar7 - iVar8) << 3
            );
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar8) {
        uVar11 = iVar8 - uVar7;
        if ((int)(uVar11 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FSubmitTasks *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar11 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar11) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar11,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar12 = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  if ((this->Blackboard).AllocatorInstance.Data[(int)uVar4] != (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Blackboard[StructIndex]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x47,
                       L"RDGBlackboard duplicate Create called on struct \'%s\'. Only one Create call per struct is allowed."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x30,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    puVar10[2] = 0;
    *puVar10 = &
               ___7__TObject_U__TStruct_UFSubmitTasks_FSkeletalMeshUpdater___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[1] = &___7__TStruct_UFSubmitTasks_FSkeletalMeshUpdater___FRDGBlackboard__6B_;
    puVar10[2] = (param_1->Filter).Pimpl.Reference;
    (param_1->Filter).Pimpl.Reference = (FTaskBase *)0x0;
    puVar10[3] = 0;
    puVar10[3] = (param_1->Inline).Pimpl.Reference;
    (param_1->Inline).Pimpl.Reference = (FTaskBase *)0x0;
    puVar10[4] = 0;
    puVar10[4] = (param_1->MeshDeformer).Pimpl.Reference;
    (param_1->MeshDeformer).Pimpl.Reference = (FTaskBase *)0x0;
    puVar10[5] = 0;
    puVar10[5] = (param_1->SkinCache).Pimpl.Reference;
    (param_1->SkinCache).Pimpl.Reference = (FTaskBase *)0x0;
    puVar12 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_48 = puVar12;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (this_00->Objects).ArrayNum;
  piVar1 = &(this_00->Objects).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this_00->Objects).AllocatorInstance,piVar1);
  }
  (this_00->Objects).ArrayNum = iVar8 + 1;
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_48;
  if ((FStruct *)(puVar12 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  uVar7 = 0;
  if ((int)uVar4 < (this->Blackboard).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSubmitTasks *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar12 + 1);
  return (FSubmitTasks *)(puVar12 + 2);
}

