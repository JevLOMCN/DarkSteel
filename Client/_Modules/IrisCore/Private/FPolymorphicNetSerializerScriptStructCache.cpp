// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// operator() @ 144327470

bool __thiscall
`UE::Net::FPolymorphicNetSerializerScriptStructCache::InitForType'::__l2::<lambda_1>::operator()
          (void *this,FTypeInfo *param_1,FTypeInfo *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FName local_res10 [3];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10[0] = (FName)param_2->ScriptStruct->_padding_;
  ::FName::ToString(local_res10,&local_38);
  pFVar2 = ::FString::ToLower(&local_38,&local_18);
  local_res10[0] = (FName)param_1->ScriptStruct->_padding_;
  ::FName::ToString(local_res10,&local_48);
  pFVar3 = ::FString::ToLower(&local_48,&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// InitForType @ 144332680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FPolymorphicNetSerializerScriptStructCache::InitForType
          (FPolymorphicNetSerializerScriptStructCache *this,UScriptStruct *param_1)

{
  uint uVar1;
  UScriptStruct *pUVar2;
  FReplicationStateDescriptor *pFVar3;
  code *pcVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> this_00;
  bool bVar5;
  EInternalObjectFlags EVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FIdentityFunctor FVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [16];
  FTypeInfo local_f8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_e8;
  uint local_d8;
  FScriptContainerElement *local_d0;
  FReplicationStateDescriptor *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  TObjectPtr<UField>_u_0 local_80 [2];
  FString local_70;
  FParameters local_60;
  
  FVar17 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
  if ((bool)FVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId22,"FPolymorphicNetSerializerScriptStructCache_InitForType",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\PolymorphicNetSerializer.cpp"
               ,0x16);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId22);
  }
  uVar1 = (this->RegisteredTypes).ArrayNum;
  local_108._0_8_ = (FTypeInfo *)0x0;
  local_108._8_4_ = 0;
  local_108._12_4_ = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  uVar1 = this->EstimatedScriptStructCount;
  bVar18 = false;
  this->CommonTraits = None;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  EVar6 = GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar9,&local_e8,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  uVar13 = (ulonglong)local_e8.ArrayNum;
  this->EstimatedScriptStructCount = local_e8.ArrayMax;
  local_d8 = local_e8.ArrayNum;
  pFVar15 = local_e8.AllocatorInstance.Data + uVar13 * 8;
  FVar16.Data = local_e8.AllocatorInstance.Data;
  local_d0 = pFVar15;
  do {
    if (local_e8.ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar16.Data == pFVar15) {
      AlgoImpl::
      IntroSortInternal<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,_UE::Net::FPolymorphicNetSerializerScriptStructCache::InitForType_::__l2::<lambda_1>_>_>
                ((FTypeInfo *)local_108._0_8_,local_108._8_4_,FVar17,(<lambda_1> *)local_res20);
      if (0x1f < (uint)local_108._8_4_) {
        if (1 < (byte)LogIris._0_1_) {
          local_b0 = (FName)param_1->_padding_;
          ::FName::ToString(&local_b0,(FString *)&local_80[0].ObjectPtr);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_80[0].DebugPtr != (UField *)0x0) {
            FMemory::Free(local_80[0].DebugPtr);
          }
        }
        if ((0x1f < (uint)(this->RegisteredTypes).ArrayNum) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)RegisteredTypes.Num() <= MaxRegisteredTypeCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\PolymorphicNetSerializer.cpp"
                               ,0x4f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((local_108._8_4_ != (this->RegisteredTypes).ArrayNum) || (bVar18)) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if ((4 < (byte)LogIris._0_1_) && (bVar18)) {
        local_a8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_a8,&local_70);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      if (this != (FPolymorphicNetSerializerScriptStructCache *)local_108) {
        DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
                  ((FTypeInfo *)(this->RegisteredTypes).AllocatorInstance.Data,
                   (this->RegisteredTypes).ArrayNum);
        pFVar15 = (this->RegisteredTypes).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (this->RegisteredTypes).AllocatorInstance.Data = (FScriptContainerElement *)local_108._0_8_;
        (this->RegisteredTypes).ArrayNum = local_108._8_4_;
        (this->RegisteredTypes).ArrayMax = local_108._12_4_;
        local_108._8_4_ = 0;
        local_108._12_4_ = 0;
        local_108._0_8_ = (FTypeInfo *)0x0;
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
                ((FTypeInfo *)local_108._0_8_,local_108._8_4_);
      if ((FTypeInfo *)local_108._0_8_ != (FTypeInfo *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
      if ((bool)FVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pUVar2 = *(UScriptStruct **)&(FVar16.Data)->field_0x0;
    if (param_1 != (UScriptStruct *)0x0) {
      iVar7 = (int)param_1->_padding_;
      if (((int)pUVar2->_padding_ < iVar7) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
          &param_1->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_f8.Descriptor.Reference = (FReplicationStateDescriptor *)0x0;
        local_f8.ScriptStruct = pUVar2;
        if (pUVar2 != (UScriptStruct *)0x0) {
          pFVar12 = (this->RegisteredTypes).AllocatorInstance.Data;
          uVar1 = (this->RegisteredTypes).ArrayNum;
          for (pFVar10 = pFVar12; pFVar10 != pFVar12 + (longlong)(int)uVar1 * 0x10;
              pFVar10 = pFVar10 + 0x10) {
            if (*(UScriptStruct **)pFVar10 == pUVar2) {
              uVar13 = (longlong)pFVar10 - (longlong)pFVar12 >> 4;
              uVar8 = (uint)uVar13;
              if ((uVar8 != 0xffffffff) && (uVar8 != 0xffffffff)) {
                if (uVar8 < uVar1) {
                  pFVar12 = pFVar12 + (uVar13 & 0xffffffff) * 0x10;
                }
                else {
                  pFVar12 = (FScriptContainerElement *)0x0;
                }
                pFVar3 = *(FReplicationStateDescriptor **)(pFVar12 + 8);
                if (pFVar3 == (FReplicationStateDescriptor *)0x0) goto LAB_1443329f6;
                local_f8.Descriptor.Reference = pFVar3;
                FReplicationStateDescriptor::AddRef(pFVar3);
                goto LAB_1443328b4;
              }
              break;
            }
          }
        }
        FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_60);
        TVar11 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                           ((UStruct *)&local_c8,(FParameters *)pUVar2);
        this_00.Reference = local_f8.Descriptor.Reference;
        if ((FReplicationStateDescriptor *)&local_f8.Descriptor != TVar11.Reference) {
          pFVar3 = (FReplicationStateDescriptor *)(TVar11.Reference)->MemberDescriptors;
          (TVar11.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
          bVar18 = local_f8.Descriptor.Reference != (FReplicationStateDescriptor *)0x0;
          local_f8.Descriptor.Reference = pFVar3;
          if (bVar18) {
            FReplicationStateDescriptor::Release(this_00.Reference);
          }
        }
        if (local_c8 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(local_c8);
        }
        bVar18 = true;
LAB_1443328b4:
        if (local_f8.Descriptor.Reference == (FReplicationStateDescriptor *)0x0) {
LAB_1443329f6:
          if (1 < (byte)LogIris._0_1_) {
            local_c0 = (FName)param_1->_padding_;
            ::FName::ToString(&local_c0,&local_90);
            local_b8 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_b8,&local_a0);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            pFVar15 = local_d0;
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
              pFVar15 = local_d0;
            }
          }
        }
        else {
          if ((((ulonglong)local_108._0_8_ <= &local_f8) &&
              (&local_f8 < (FTypeInfo *)(local_108._0_8_ + (longlong)(int)local_108._12_4_ * 0x10)))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = local_108._8_4_;
          if (local_108._8_4_ == local_108._12_4_) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)local_108,(int *)(local_108 + 0xc));
          }
          local_108._8_4_ = iVar7 + 1;
          lVar14 = (longlong)iVar7;
          *(UScriptStruct **)
           &((FScriptContainerElement *)(local_108._0_8_ + lVar14 * 0x10))->field_0x0 =
               local_f8.ScriptStruct;
          *(undefined8 *)(local_108._0_8_ + lVar14 * 0x10 + 8) = 0;
          *(FReplicationStateDescriptor **)(local_108._0_8_ + lVar14 * 0x10 + 8) =
               local_f8.Descriptor.Reference;
          if (local_f8.Descriptor.Reference != (FReplicationStateDescriptor *)0x0) {
            FReplicationStateDescriptor::AddRef(local_f8.Descriptor.Reference);
          }
          this->CommonTraits =
               this->CommonTraits | (local_f8.Descriptor.Reference)->Traits & HasObjectReference;
        }
        if (local_f8.Descriptor.Reference != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(local_f8.Descriptor.Reference);
        }
      }
    }
    uVar13 = (ulonglong)local_d8;
    FVar16.Data = FVar16.Data + 8;
  } while( true );
}

