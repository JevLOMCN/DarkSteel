// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// Create<GPUMessage::FParameters> @ 145d03b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FParameters * __thiscall FRDGBlackboard::Create<GPUMessage::FParameters>(FRDGBlackboard *this)

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
  FParameters *pFVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *local_38;
  FString local_30;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<GPUMessage::FParameters>(void)'
      ::__l2::Index == 0xffffffff) {
    GetTypeName(&local_30,L"GPUMessage::FParameters",
                L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                ,0xb);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<GPUMessage::FParameters>(void)'
    ::__l2::Index = AllocateIndex(&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  uVar4 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<GPUMessage::FParameters>(void)'
          ::__l2::Index;
  iVar8 = (this->Blackboard).ArrayNum;
  if (iVar8 <= (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<GPUMessage::FParameters>(void)'
                    ::__l2::Index) {
    uVar7 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<GPUMessage::FParameters>(void)'
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
            pFVar9 = (FParameters *)(*pcVar3)();
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
      pFVar9 = (FParameters *)(*pcVar3)();
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
      pFVar9 = (FParameters *)(*pcVar3)();
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
      pFVar9 = (FParameters *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    puVar10[4] = 0;
    *puVar10 = &
               ___7__TObject_U__TStruct_VFParameters_GPUMessage___FRDGBlackboard___FRDGAllocator__6B_
    ;
    puVar10[2] = &___7__TStruct_VFParameters_GPUMessage___FRDGBlackboard__6B_;
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
      pFVar9 = (FParameters *)(*pcVar3)();
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
      pFVar9 = (FParameters *)(*pcVar3)();
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
      pFVar9 = (FParameters *)(*pcVar3)();
      return pFVar9;
    }
  }
  (this->Blackboard).AllocatorInstance.Data[(int)uVar4] = (FStruct *)(puVar11 + 2);
  return (FParameters *)(puVar11 + 4);
}

// AllocateIndex @ 145da1100

uint __cdecl FRDGBlackboard::AllocateIndex(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  FString *local_18;
  uint *local_10;
  
  bVar2 = IsInRenderingThread();
  pwVar8 = L"";
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphBlackboard.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRDGBlackboard::AllocateIndex'::__l2::_dynamic_atexit_destructor_for__StructMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 != 0) {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar4 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&StructMap,uVar3,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x20 + StructMap._0_8_;
    puVar7 = (uint *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (uint *)0x0;
    }
    if (puVar7 != (uint *)0x0) {
      return *puVar7;
    }
  }
  local_10 = &NextIndex;
  local_18 = param_1;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,unsigned_int_&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&StructMap,(TPairInitializer<FString_&&,unsigned_int_&> *)&stack0x00000008,
             (bool *)&local_18);
  uVar3 = NextIndex;
  NextIndex = NextIndex + 1;
  return uVar3;
}

// GetTypeName @ 145dbbf10

FString * __cdecl
FRDGBlackboard::GetTypeName
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s %d");
  return __return_storage_ptr__;
}

