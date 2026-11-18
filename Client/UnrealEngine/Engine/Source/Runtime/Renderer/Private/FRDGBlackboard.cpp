// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// Create<TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>,TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>_> @ 1447ec9d0

TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
* __thiscall
FRDGBlackboard::
Create<TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>,TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>_>
          (FRDGBlackboard *this,
          TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
          *param_1)

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
  TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
  *pTVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_48;
  FString local_40;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<TMap<FLightSceneInfo_const*___ptr64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const*___ptr64,int,0>_>_>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_40,L"FRayTracingLightFunctionMap",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingLighting.h"
                ,0x23);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<TMap<FLightSceneInfo_const*___ptr64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const*___ptr64,int,0>_>_>(void)'
    ::__l2::Index = AllocateIndex(&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<TMap<FLightSceneInfo_const*___ptr64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const*___ptr64,int,0>_>_>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<TMap<FLightSceneInfo_const*___ptr64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const*___ptr64,int,0>_>_>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<TMap<FLightSceneInfo_const*___ptr64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const*___ptr64,int,0>_>_>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
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
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x60,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
    }
  }
  else {
    *(undefined8 *)
     &((TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
        *)(puVar10 + 2))->Elements = 0;
    *puVar10 = &
               ___7__TObject_U__TStruct_V__TMap_PEBVFLightSceneInfo__HVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEBVFLightSceneInfo__H_0A______FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[1] = &
                 ___7__TStruct_V__TMap_PEBVFLightSceneInfo__HVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEBVFLightSceneInfo__H_0A______FRDGBlackboard__6B_
    ;
    puVar10[3] = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0x80;
    *(undefined4 *)(puVar10 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
    puVar10[10] = 0;
    *(undefined4 *)(puVar10 + 0xb) = 0;
    TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
                *)(puVar10 + 2),
               (TSet<TTuple<FLightSceneInfo_const_*,int>,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>,FDefaultSetAllocator>
                *)param_1);
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_48 = puVar11;
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
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
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
  if ((FStruct *)(puVar11 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
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
      pTVar9 = (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
                *)(*pcVar3)();
      return pTVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 1);
  return (TMap<FLightSceneInfo_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLightSceneInfo_const_*,int,0>_>
          *)(puVar11 + 2);
}

// Create<FPathTracingSkylight> @ 1450aa0a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPathTracingSkylight * __thiscall FRDGBlackboard::Create<FPathTracingSkylight>(FRDGBlackboard *this)

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
  FPathTracingSkylight *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FPathTracingSkylight>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FPathTracingSkylight",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PathTracing.cpp"
                ,0xadc);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FPathTracingSkylight>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FPathTracingSkylight>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FPathTracingSkylight>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FPathTracingSkylight>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
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
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x40,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    puVar10[4] = 0;
    *puVar10 = &___7__TObject_U__TStruct_VFPathTracingSkylight___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[2] = &___7__TStruct_VFPathTracingSkylight___FRDGBlackboard__6B_;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_38 = puVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
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
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  if ((FStruct *)(puVar11 + 2) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
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
      pFVar9 = (FPathTracingSkylight *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 2);
  return (FPathTracingSkylight *)(puVar11 + 4);
}

// Create<FSceneCaptureViewportSetterMap> @ 145470a80

FSceneCaptureViewportSetterMap * __thiscall
FRDGBlackboard::Create<FSceneCaptureViewportSetterMap>(FRDGBlackboard *this)

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
  FSceneCaptureViewportSetterMap *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FSceneCaptureViewportSetterMap",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                ,0xdd);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
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
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x60,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar10 = &
               ___7__TObject_U__TStruct_VFSceneCaptureViewportSetterMap___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[1] = &___7__TStruct_VFSceneCaptureViewportSetterMap___FRDGBlackboard__6B_;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[9] = 0;
    puVar10[0xb] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[6] = 0;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0x80;
    *(undefined4 *)(puVar10 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
    puVar10[10] = 0;
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_38 = puVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
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
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  if ((FStruct *)(puVar11 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
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
      pFVar9 = (FSceneCaptureViewportSetterMap *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 1);
  return (FSceneCaptureViewportSetterMap *)(puVar11 + 2);
}

// GetMutable<FSceneCaptureViewportSetterMap> @ 1454740d0

FSceneCaptureViewportSetterMap * __thiscall
FRDGBlackboard::GetMutable<FSceneCaptureViewportSetterMap>(FRDGBlackboard *this)

{
  FStruct *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FSceneCaptureViewportSetterMap *pFVar5;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_18,L"FSceneCaptureViewportSetterMap",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                ,0xdd);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
    ::__l2::Index = AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
           ::__l2::Index < (this->Blackboard).ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneCaptureViewportSetterMap>(void)'
             ::__l2::Index < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSceneCaptureViewportSetterMap *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->Blackboard).AllocatorInstance.Data[(int)uVar3];
    pFVar5 = (FSceneCaptureViewportSetterMap *)0x0;
    if (pFVar1 != (FStruct *)0x0) {
      pFVar5 = (FSceneCaptureViewportSetterMap *)(pFVar1 + 1);
    }
    return pFVar5;
  }
  return (FSceneCaptureViewportSetterMap *)0x0;
}

// Create<FSceneUniformBufferBlackboardStruct> @ 1454c9bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneUniformBufferBlackboardStruct * __thiscall
FRDGBlackboard::Create<FSceneUniformBufferBlackboardStruct>(FRDGBlackboard *this)

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
  FSceneUniformBufferBlackboardStruct *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FSceneUniformBufferBlackboardStruct",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                ,0xa45);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
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
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x18,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar10 = &
               ___7__TObject_U__TStruct_UFSceneUniformBufferBlackboardStruct___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[1] = &___7__TStruct_UFSceneUniformBufferBlackboardStruct___FRDGBlackboard__6B_;
    puVar10[2] = 0;
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_38 = puVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
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
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  if ((FStruct *)(puVar11 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
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
      pFVar9 = (FSceneUniformBufferBlackboardStruct *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 1);
  return (FSceneUniformBufferBlackboardStruct *)(puVar11 + 2);
}

// GetMutable<FSceneUniformBufferBlackboardStruct> @ 1454ceb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneUniformBufferBlackboardStruct * __thiscall
FRDGBlackboard::GetMutable<FSceneUniformBufferBlackboardStruct>(FRDGBlackboard *this)

{
  FStruct *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FSceneUniformBufferBlackboardStruct *pFVar5;
  FStruct *pFVar6;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_18,L"FSceneUniformBufferBlackboardStruct",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                ,0xa45);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
    ::__l2::Index = AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
           ::__l2::Index < (this->Blackboard).ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSceneUniformBufferBlackboardStruct>(void)'
             ::__l2::Index < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSceneUniformBufferBlackboardStruct *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->Blackboard).AllocatorInstance.Data[(int)uVar3];
    pFVar6 = (FStruct *)0x0;
    if (pFVar1 != (FStruct *)0x0) {
      pFVar6 = pFVar1 + 1;
    }
    return (FSceneUniformBufferBlackboardStruct *)pFVar6;
  }
  return (FSceneUniformBufferBlackboardStruct *)0x0;
}

// Create<FRDGSystemTextures> @ 1456c9710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGSystemTextures * __thiscall FRDGBlackboard::Create<FRDGSystemTextures>(FRDGBlackboard *this)

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
  FRDGSystemTextures *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FRDGSystemTextures",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
                ,0x67);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
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
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x98,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar10 = &___7__TObject_U__TStruct_UFRDGSystemTextures___FRDGBlackboard___FRDGAllocator__6B_;
    puVar10[1] = &___7__TStruct_UFRDGSystemTextures___FRDGBlackboard__6B_;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_38 = puVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
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
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  if ((FStruct *)(puVar11 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
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
      pFVar9 = (FRDGSystemTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 1);
  return (FRDGSystemTextures *)(puVar11 + 2);
}

// Get<FRDGSystemTextures> @ 1456ccb30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGSystemTextures * __thiscall FRDGBlackboard::Get<FRDGSystemTextures>(FRDGBlackboard *this)

{
  FStruct *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FRDGSystemTextures *pFVar5;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_18,L"FRDGSystemTextures",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
                ,0x67);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
    ::__l2::Index = AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
           ::__l2::Index < (this->Blackboard).ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FRDGSystemTextures>(void)'
             ::__l2::Index < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRDGSystemTextures *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->Blackboard).AllocatorInstance.Data[(int)uVar3];
    if (pFVar1 != (FStruct *)0x0) {
      return (FRDGSystemTextures *)(pFVar1 + 1);
    }
  }
  return (FRDGSystemTextures *)0x0;
}

// Create<FCASImageData> @ 145749240

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCASImageData * __thiscall FRDGBlackboard::Create<FCASImageData>(FRDGBlackboard *this)

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
  FCASImageData *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'::
      __l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"FCASImageData",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                ,0x16c);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'::__l2
    ::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
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
        uVar12 = iVar8 - uVar7;
        if ((int)(uVar12 | uVar7) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FCASImageData *)(*pcVar3)();
            return pFVar9;
          }
        }
        if (uVar12 != 0) {
          _Dst = (this->Blackboard).AllocatorInstance.Data + (int)uVar7;
          iVar8 = ((this->Blackboard).ArrayNum - uVar12) - uVar7;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar12,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->Blackboard).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::
          ReallocShrink<0,TRDGArrayAllocator<0>::ForElementType<FRDGBlackboard::FStruct_*>_>
                    (8,8,&(this->Blackboard).AllocatorInstance,(this->Blackboard).ArrayNum,
                     &(this->Blackboard).ArrayMax);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
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
      pFVar9 = (FCASImageData *)(*pcVar3)();
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
      pFVar9 = (FCASImageData *)(*pcVar3)();
      return pFVar9;
    }
  }
  this_00 = this->Allocator;
  puVar10 = FMemStackBase::Alloc(&this_00->MemStack,0x50,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCASImageData *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar10 = &___7__TObject_U__TStruct_UFCASImageData___FRDGBlackboard___FRDGAllocator__6B_;
    puVar10[1] = &___7__TStruct_UFCASImageData___FRDGBlackboard__6B_;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar11 = puVar10;
  }
  pFVar2 = (this_00->Objects).AllocatorInstance.Data;
  local_38 = puVar11;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this_00->Objects).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCASImageData *)(*pcVar3)();
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
  *(undefined8 **)((this_00->Objects).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
  if ((FStruct *)(puVar11 + 1) == (FStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphBlackboard.h"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCASImageData *)(*pcVar3)();
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
      pFVar9 = (FCASImageData *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 1);
  return (FCASImageData *)(puVar11 + 2);
}

// Get<FCASImageData> @ 14574ce00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCASImageData * __thiscall FRDGBlackboard::Get<FCASImageData>(FRDGBlackboard *this)

{
  FStruct *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FCASImageData *pFVar5;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'::
      __l2::Index == 0xffffffff) {
    GetTypeName(&local_18,L"FCASImageData",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VariableRateShading\\ContrastAdaptiveImageGenerator.cpp"
                ,0x16c);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'::__l2
    ::Index = AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
          ::__l2::Index;
  if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
           ::__l2::Index < (this->Blackboard).ArrayNum) {
    if ((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FCASImageData>(void)'
             ::__l2::Index < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCASImageData *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = (this->Blackboard).AllocatorInstance.Data[(int)uVar3];
    if (pFVar1 != (FStruct *)0x0) {
      return (FCASImageData *)(pFVar1 + 1);
    }
  }
  return (FCASImageData *)0x0;
}

