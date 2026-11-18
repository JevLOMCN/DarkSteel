// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 2

// Deserialize @ 148ba3030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FStructDeserializer::Deserialize
          (void *param_1,UStruct *param_2,IStructDeserializerBackend *param_3,
          FStructDeserializerPolicies *param_4)

{
  FScriptSparseArrayLayout *pFVar1;
  ForElementType<FSetElementId> *pFVar2;
  FProperty *this;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  UStruct *pUVar13;
  FProperty *pFVar14;
  FFieldClass *pFVar15;
  uchar *puVar16;
  FFieldClass *pFVar17;
  UStruct *pUVar18;
  undefined8 uVar19;
  ForElementType<FSetElementId> *pFVar20;
  UStruct *pUVar21;
  longlong *plVar22;
  FScriptContainerElement *_Dst;
  ulonglong uVar23;
  FStaticBasicLogRecord *pFVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar27;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  byte bVar28;
  void *pvVar29;
  undefined1 auStackY_378 [32];
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  ForAnyElementType local_318;
  undefined8 local_310;
  undefined8 local_308;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_300;
  UStruct *local_2f8;
  UStruct *pUStack_2f0;
  byte local_2e8;
  FStructDeserializerPolicies *local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_2d0;
  UStruct *pUStack_2c8;
  UStruct *pUStack_2c0;
  int local_2b8;
  undefined4 local_2b0;
  FName local_2a8;
  UStruct *local_2a0;
  UStruct *local_298;
  FName local_290;
  UStruct *local_288;
  FProperty *local_280;
  IStructDeserializerBackend *local_278;
  FName local_270;
  UStruct *local_268;
  UStruct *local_260;
  undefined1 local_258 [24];
  undefined8 uStack_240;
  int local_238;
  <lambda_1> local_230;
  undefined1 local_220 [24];
  FProperty *pFStack_208;
  int local_200;
  undefined1 local_1f8 [24];
  FProperty *pFStack_1e0;
  int local_1d8;
  void *local_1d0 [2];
  void *local_1c0 [2];
  void *local_1b0 [2];
  void *local_1a0 [2];
  void *local_190 [2];
  FScriptMapHelper local_180;
  FScriptMapHelper local_148;
  undefined1 local_110 [24];
  FProperty *pFStack_f8;
  int local_f0;
  FScriptMapHelper local_e8;
  FScriptMapHelper local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2e0 = param_4;
  local_278 = param_3;
  if ((param_1 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                         ,0x6b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_308 = (ulonglong)local_308._4_4_ << 0x20;
  local_2f8 = (UStruct *)0x0;
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0;
  pTStack_300 = param_1;
  pUStack_2f0 = param_2;
LAB_148ba30e2:
  while( true ) {
    pUVar21 = (UStruct *)0x0;
    cVar8 = (**(code **)((longlong)*param_3 + 0x18))(param_3);
    if (cVar8 == '\0') break;
    puVar12 = (undefined8 *)(**(code **)*param_3)(param_3);
    local_328.Data = (FScriptContainerElement *)0x0;
    local_320 = *(int *)(puVar12 + 1);
    lVar26 = (longlong)local_320;
    pvVar29 = (void *)*puVar12;
    if (local_320 == 0) {
      local_31c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_320,0,&local_328,local_320,&local_31c);
      memcpy(local_328.Data,pvVar29,lVar26 * 2);
    }
    pUVar18 = pUStack_2f0;
    pUVar13 = local_2f8;
    pTVar27 = pTStack_300;
    switch(local_2b0) {
    case 0:
      if ((local_2f8 != (UStruct *)0x0) &&
         ((*(ulonglong *)(local_2f8->_padding_ + 0x18) & 0x800000000000) != 0)) {
        local_110._0_8_ = local_2f8->PropertyLink;
        local_110._8_8_ = pTStack_300;
        local_f0 = *(int *)&local_2f8->PostConstructLink;
        local_110._16_8_ = local_2f8->RefLink;
        pFStack_f8 = local_2f8->DestructorLink;
        if (((FProperty *)local_110._0_8_ == (FProperty *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1653,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        FScriptSetHelper::Rehash((FScriptSetHelper *)local_110);
      }
      bVar6 = (int)local_310 == 0;
      if (!bVar6) {
LAB_148ba3c33:
        iVar10 = (int)local_310;
        if (bVar6 || (int)local_310 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_310;
        }
        _Dst = local_318.Data + (longlong)(iVar10 + -1) * 0x20;
        pUVar21 = *(UStruct **)(_Dst + 0x10);
        pUVar13 = *(UStruct **)(_Dst + 0x18);
        lVar26 = *(longlong *)_Dst;
        pTVar27 = *(TScriptSparseSet<FDefaultSetAllocator> **)(_Dst + 8);
        iVar9 = (iVar10 - (iVar10 + -1)) + -1;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + 0x20,(longlong)iVar9 << 5);
          iVar10 = (int)local_310;
        }
        local_310 = CONCAT44(local_310._4_4_,iVar10 + -1);
        local_308 = lVar26;
        pTStack_300 = pTVar27;
        local_2f8 = pUVar21;
        pUStack_2f0 = pUVar13;
        goto LAB_148ba3cb1;
      }
      if (5 < (byte)LogSerialization._0_1_) {
        pFVar24 = &::LOG_Static;
LAB_148ba462e:
        UE::Logging::Private::BasicLog<6>(pFVar24,(FLogCategoryBase *)&LogSerialization);
      }
    case 3:
switchD_148ba3186_caseD_3:
      bVar6 = false;
LAB_148ba463c:
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      goto LAB_148ba464f;
    case 1:
      local_2d8 = 0;
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_320 != 0) {
        FVar25.Data = local_328.Data;
      }
      pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)0x0;
      pUStack_2c0 = (UStruct *)0x0;
      ::FName::FName(&local_2a8,(wchar_t *)FVar25.Data,FNAME_Find);
      pUVar13 = (UStruct *)FindFProperty<FProperty>(pUVar18,local_2a8,Default);
      pUStack_2c8 = pUVar13;
      if (pUVar13 == (UStruct *)0x0) {
        if ((param_4->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        }
        if (param_4->MissingFields == Error) goto switchD_148ba3186_caseD_3;
        (**(code **)((longlong)*param_3 + 0x30))(param_3);
      }
      else {
        if (*(void **)&param_4->PropertyFilter != (void *)0x0) {
          local_2a0 = local_2f8;
          local_298 = pUVar13;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_4->PropertyFilter);
          plVar3 = *(longlong **)&(param_4->PropertyFilter).field_0x28;
          pcVar4 = *(code **)&param_4->PropertyFilter;
          plVar22 = (longlong *)&(param_4->PropertyFilter).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar22 = plVar3;
          }
          uVar19 = (**(code **)(*plVar22 + 8))();
          cVar8 = (*pcVar4)(uVar19);
          if (cVar8 == '\0') {
            (**(code **)((longlong)*param_3 + 0x30))(param_3);
            goto switchD_148ba3186_caseD_2;
          }
        }
        pTVar27 = pTStack_300;
        uVar23 = *(ulonglong *)(pUVar13->_padding_ + 0x18);
        if ((uVar23 >> 0x2f & 1) == 0) {
          if (((uVar23 >> 0x15 & 1) != 0) &&
             (cVar8 = (**(code **)((longlong)*param_3 + 0x28))(param_3,pUVar13), cVar8 != '\0'))
          goto switchD_148ba3186_caseD_2;
          pTStack_2d0 = pTStack_300;
        }
        else {
          lVar26 = (longlong)(int)local_308;
          if ((((int)local_308 < 0) || ((int)pUVar13->_padding_ <= (int)local_308)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if ((pTVar27 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          local_258._16_8_ = pUVar13->RefLink;
          uStack_240 = pUVar13->DestructorLink;
          iVar10 = *(int *)&pUVar13->PostConstructLink;
          pTVar27 = (TScriptSparseSet<FDefaultSetAllocator> *)
                    ((pTVar27->Elements).AllocationFlags.AllocatorInstance.InlineData +
                    (longlong)*(int *)((longlong)&(pUVar13->SuperStruct).field0_0x0 + 4) +
                    lVar26 * *(int *)((longlong)&pUVar13->_padding_ + 4) + -0x10);
          local_258._0_8_ = pUVar13->PropertyLink;
          pTStack_2d0 = pTVar27;
          local_258._8_8_ = pTVar27;
          local_238 = iVar10;
          if (((FProperty *)local_258._0_8_ == (FProperty *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementProp",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1653,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar9 = (pTVar27->Elements).Data.ArrayNum - (pTVar27->Elements).NumFreeIndices;
          if (iVar9 != 0) {
            FScriptSetHelper::DestructItems((FScriptSetHelper *)local_258,0,iVar9);
            iVar9 = (pTVar27->Elements).Data.ArrayMax;
            (pTVar27->Elements).Data.ArrayNum = 0;
            if (iVar9 != 0) {
              TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                        ((TScriptArray<TSizedDefaultAllocator<32>_> *)pTVar27,0,iVar10,
                         uStack_240._4_4_);
            }
            (pTVar27->Elements).FirstFreeIndex = -1;
            (pTVar27->Elements).NumFreeIndices = 0;
            iVar10 = (pTVar27->Elements).AllocationFlags.MaxBits;
            (pTVar27->Elements).AllocationFlags.NumBits = 0;
            if (iVar10 != 0) {
              (pTVar27->Elements).AllocationFlags.MaxBits = 0;
              TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                        (&(pTVar27->Elements).AllocationFlags,0);
            }
            pFVar2 = *(ForElementType<FSetElementId> **)&(pTVar27->Hash).SecondaryData.field_0x0;
            pFVar20 = &pTVar27->Hash;
            if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
              pFVar20 = pFVar2;
            }
            pUVar18 = pUVar21;
            if (0 < pTVar27->HashSize) {
              do {
                pFVar20->InlineData[0] = 0xff;
                pFVar20->InlineData[1] = 0xff;
                pFVar20->InlineData[2] = 0xff;
                pFVar20->InlineData[3] = 0xff;
                pFVar20 = (ForElementType<FSetElementId> *)&pFVar20->_padding_;
                uVar11 = (int)pUVar18 + 1;
                pUVar18 = (UStruct *)(ulonglong)uVar11;
              } while ((int)uVar11 < pTVar27->HashSize);
            }
          }
        }
        if ((*(uint *)(pUVar13->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          pUVar13 = (UStruct *)pUVar13->RefLink;
        }
        if ((((pUVar13 == (UStruct *)0x0) ||
             (pUVar18 = pUVar13, (*(uint *)(pUVar13->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
            (pUVar18 = pUVar21, pUVar13 == (UStruct *)0x0)) ||
           ((*(uint *)(pUVar13->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
          pUVar13 = pUVar21;
        }
        if (pUVar18 == (UStruct *)0x0) {
          if (pUVar13 != (UStruct *)0x0) {
            pUVar21 = (UStruct *)pUVar13->PropertyLink;
          }
        }
        else {
          pUVar21 = (UStruct *)pUVar18->PropertyLink;
        }
        pUStack_2c0 = pUVar21;
        if (((local_318.Data <= (FScriptContainerElement *)&local_308) &&
            ((FScriptContainerElement *)&local_308 <
             local_318.Data + (longlong)local_310._4_4_ * 0x20)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar10 = (int)local_310;
        if ((int)local_310 == local_310._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_318,(int *)((longlong)&local_310 + 4));
        }
        local_310 = CONCAT44(local_310._4_4_,iVar10 + 1);
        *(longlong *)(local_318.Data + (longlong)iVar10 * 0x20) = local_308;
        *(TScriptSparseSet<FDefaultSetAllocator> **)(local_318.Data + (longlong)iVar10 * 0x20 + 8) =
             pTStack_300;
        local_308 = CONCAT44(uStack_2d4,local_2d8);
        *(UStruct **)(local_318.Data + (longlong)iVar10 * 0x20 + 0x10) = local_2f8;
        *(UStruct **)(local_318.Data + (longlong)iVar10 * 0x20 + 0x10 + 8) = pUStack_2f0;
        pTStack_300 = pTStack_2d0;
        local_2f8 = pUStack_2c8;
        pUStack_2f0 = pUStack_2c0;
      }
      goto LAB_148ba3cb1;
    default:
      goto switchD_148ba3186_caseD_2;
    case 5:
      if (local_320 < 2) {
        if (local_2f8 != (UStruct *)0x0) {
          pFVar17 = (FFieldClass *)local_2f8->_padding_;
          pFVar15 = FSetProperty::StaticClass();
          if (pFVar17 == pFVar15) {
            if ((local_2f8 == (UStruct *)0x0) ||
               (pUVar13 = local_2f8, (pFVar17->CastFlags & CASTCLASS_FSetProperty) == CASTCLASS_None
               )) {
              pUVar13 = pUVar21;
            }
            local_220._0_8_ = pUVar13->PropertyLink;
            local_220._8_8_ = pTStack_300;
            local_200 = *(int *)&pUVar13->PostConstructLink;
            local_220._16_8_ = pUVar13->RefLink;
            pFStack_208 = pUVar13->DestructorLink;
            if (((FProperty *)local_220._0_8_ == (FProperty *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementProp",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1653,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pFVar14 = pUVar13->PropertyLink;
            iVar10 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash
                               ((FScriptSetHelper *)local_220);
            FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_220,iVar10);
            cVar8 = (**(code **)((longlong)*param_3 + 0x20))(param_3,pFVar14);
            if ((cVar8 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_3 + 8))(param_3,local_1d0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_1d0[0] != (void *)0x0) {
                FMemory::Free(local_1d0[0]);
              }
            }
            goto LAB_148ba3cb1;
          }
        }
        if (local_320 < 2) {
          pUVar21 = local_2f8;
          if ((local_2f8 != (UStruct *)0x0) &&
             ((*(uint *)(local_2f8->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
            pUVar21 = (UStruct *)local_2f8->RefLink;
          }
          if (pUVar21 != (UStruct *)0x0) {
            cVar8 = (**(code **)((longlong)*param_3 + 0x20))(param_3,pUVar21);
            if ((cVar8 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_3 + 8))(param_3,local_1c0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_1c0[0] != (void *)0x0) {
                FMemory::Free(local_1c0[0]);
              }
            }
            local_308 = CONCAT44(local_308._4_4_,(int)local_308 + 1);
            goto LAB_148ba3cb1;
          }
          if ((param_4->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Failed_to_seria_151c72ee8,
                       (FLogCategoryBase *)&LogSerialization);
          }
          goto switchD_148ba3186_caseD_3;
        }
      }
      if (local_2f8 != (UStruct *)0x0) {
        pFVar17 = (FFieldClass *)local_2f8->_padding_;
        pFVar15 = FMapProperty::StaticClass();
        if (pFVar17 == pFVar15) {
          if ((local_2f8 == (UStruct *)0x0) ||
             (pUVar13 = local_2f8, (pFVar17->CastFlags & CASTCLASS_FMapProperty) == CASTCLASS_None))
          {
            pUVar13 = pUVar21;
          }
          FScriptMapHelper::FScriptMapHelper(&local_148,(FMapProperty *)pUVar13,pTStack_300);
          pFVar1 = &local_148.MapLayout.SetLayout.SparseArrayLayout;
          pFVar14 = pUVar13->RefLink;
          if ((local_148.MapFlags & UsesMemoryImageAllocator) == None) {
            iVar10 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                         *)local_148.field2_0x10.HeapMap,pFVar1);
          }
          else {
            iVar10 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                         *)local_148.field2_0x10.HeapMap,pFVar1);
          }
          FScriptMapHelper::ConstructItem(&local_148,iVar10);
          puVar16 = FScriptMapHelper::GetPairPtr(&local_148,iVar10);
          this = pUVar13->PropertyLink;
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_320 != 0) {
            FVar25.Data = local_328.Data;
          }
          bVar6 = FProperty::ValidateImportFlags(this,0,(FOutputDevice *)GWarn);
          if ((bVar6) && (FVar25.Data != (FScriptContainerElement *)0x0)) {
            (**(code **)(this->_padding_ + 0xe8))(this,FVar25.Data,puVar16,0);
          }
          cVar8 = (**(code **)((longlong)*param_3 + 0x20))(param_3,pFVar14);
          if ((cVar8 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
            (**(code **)((longlong)*param_3 + 8))(param_3,local_1b0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_1b0[0] != (void *)0x0) {
              FMemory::Free(local_1b0[0]);
            }
          }
          goto LAB_148ba3cb1;
        }
        if (local_2f8 != (UStruct *)0x0) {
          pFVar17 = (FFieldClass *)local_2f8->_padding_;
          pFVar15 = FOptionalProperty::StaticClass();
          if (pFVar17 == pFVar15) {
            if ((local_2f8 == (UStruct *)0x0) ||
               (pUVar13 = local_2f8,
               (pFVar17->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None)) {
              pUVar13 = pUVar21;
            }
            if ((pUVar13->PropertyLink == (FProperty *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ValueProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                   ,0x18,L"Expected ValueProperty to be initialized"), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pFVar14 = pUVar13->PropertyLink;
            FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                      ((FOptionalPropertyLayout *)&pUVar13->PropertyLink,pTStack_300);
            cVar8 = (**(code **)((longlong)*param_3 + 0x20))(param_3,pFVar14);
            if ((cVar8 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_3 + 8))(param_3,local_1a0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_1a0[0] != (void *)0x0) {
                FMemory::Free(local_1a0[0]);
              }
            }
            goto LAB_148ba3cb1;
          }
        }
      }
      pUVar21 = pUStack_2f0;
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_320 != 0) {
        FVar25.Data = local_328.Data;
      }
      ::FName::FName(&local_290,(wchar_t *)FVar25.Data,FNAME_Find);
      pFVar14 = FindFProperty<FProperty>(pUVar21,local_290,Default);
      if (pFVar14 == (FProperty *)0x0) {
        if ((param_4->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        }
        if (param_4->MissingFields == Error) goto switchD_148ba3186_caseD_3;
      }
      else {
        if (*(void **)&param_4->PropertyFilter != (void *)0x0) {
          local_288 = local_2f8;
          local_280 = pFVar14;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_4->PropertyFilter);
          plVar3 = *(longlong **)&(param_4->PropertyFilter).field_0x28;
          pcVar4 = *(code **)&param_4->PropertyFilter;
          plVar22 = (longlong *)&(param_4->PropertyFilter).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar22 = plVar3;
          }
          uVar19 = (**(code **)(*plVar22 + 8))();
          cVar8 = (*pcVar4)(uVar19,&local_280);
          if (cVar8 == '\0') goto switchD_148ba3186_caseD_2;
        }
        cVar8 = (**(code **)((longlong)*param_3 + 0x20))(param_3,pFVar14);
        if ((cVar8 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
          (**(code **)((longlong)*param_3 + 8))(param_3,local_190);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_190[0] != (void *)0x0) {
            FMemory::Free(local_190[0]);
          }
        }
      }
LAB_148ba3cb1:
      param_4 = local_2e0;
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
        param_4 = local_2e0;
      }
      break;
    case 6:
      if ((local_2f8 != (UStruct *)0x0) &&
         ((*(ulonglong *)(local_2f8->_padding_ + 0x18) & 0x400000000000) != 0)) {
        FScriptMapHelper::FScriptMapHelper(&local_b0,(FMapProperty *)local_2f8,pTStack_300);
        FScriptMapHelper::Rehash(&local_b0);
      }
      bVar6 = (int)local_310 == 0;
      if (!bVar6) goto LAB_148ba3c33;
      bVar6 = true;
      goto LAB_148ba463c;
    case 7:
      local_2d8 = 0;
      pUStack_2c0 = (UStruct *)0x0;
      pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)0x0;
      pUStack_2c8 = (UStruct *)0x0;
      if (local_320 < 2) {
        if (local_2f8 != (UStruct *)0x0) {
          uVar23 = *(ulonglong *)(local_2f8->_padding_ + 0x18);
          if ((uVar23 >> 0x2f & 1) == 0) {
            if ((uVar23 >> 0x15 & 1) != 0) {
              pUVar21 = local_2f8;
            }
            if (pUVar21 == (UStruct *)0x0) {
              if (5 < (byte)LogSerialization._0_1_) {
                pFVar24 = &::LOG_Static;
                goto LAB_148ba462e;
              }
              goto switchD_148ba3186_caseD_3;
            }
            if (((int)pUVar21->_padding_ < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if ((pTVar27 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            bVar28 = *(byte *)&pUVar21->PropertyLink;
            iVar10 = *(int *)((longlong)&(pUVar21->SuperStruct).field0_0x0 + 4);
            local_2e8 = bVar28;
            uVar11 = (**(code **)(pUVar21->RefLink->_padding_ + 0x168))();
            pFVar14 = pUVar21->RefLink;
            this_00 = (TScriptArray<TMemoryImageAllocator<0>_> *)
                      ((pTVar27->Elements).AllocationFlags.AllocatorInstance.InlineData +
                      (longlong)iVar10 + -0x10);
            local_2b8 = pFVar14->ElementSize;
            if ((local_2b8 < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if ((pFVar14 == (FProperty *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar5 = local_2b8;
            iVar9 = this_00->ArrayNum;
            iVar10 = iVar9 + 1;
            this_00->ArrayNum = iVar10;
            bVar28 = bVar28 & 1;
            if (bVar28 == 0) {
              if (this_00->ArrayMax < iVar10) {
                TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                          ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00,iVar9,local_2b8
                           ,uVar11);
              }
            }
            else if (this_00->ArrayMax < iVar10) {
              TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(this_00,iVar9,local_2b8,uVar11);
            }
            if (this_00->ArrayNum == 0) {
              pvVar29 = (void *)0x0;
            }
            else {
              uVar23 = this_00->_padding_;
              if ((bVar28 != 0) && ((uVar23 & 1) != 0)) {
                uVar23 = (longlong)&this_00->_padding_ + ((longlong)uVar23 >> 0x18);
              }
              pvVar29 = (void *)((longlong)iVar9 * (longlong)iVar5 + uVar23);
            }
            if (((uint)(int)pFVar14->PropertyFlags >> 9 & 1) == 0) {
              (**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,pvVar29);
            }
            else {
              memset(pvVar29,0,(longlong)iVar5);
            }
            pUVar18 = (UStruct *)pUVar21->RefLink;
            param_4 = local_2e0;
            param_3 = local_278;
            pUStack_2c8 = pUVar18;
            if (this_00->ArrayNum == 0) {
              pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)0x0;
            }
            else {
              uVar23 = this_00->_padding_;
              if (((local_2e8 & 1) != 0) && ((uVar23 & 1) != 0)) {
                uVar23 = (longlong)&this_00->_padding_ + ((longlong)uVar23 >> 0x18);
              }
              pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                            ((longlong)iVar9 * (longlong)iVar5 + uVar23);
            }
          }
          else {
            local_1f8._0_8_ = local_2f8->PropertyLink;
            local_1f8._8_8_ = pTStack_300;
            local_1d8 = *(int *)&local_2f8->PostConstructLink;
            local_1f8._16_8_ = local_2f8->RefLink;
            pFStack_1e0 = local_2f8->DestructorLink;
            if (((FProperty *)local_1f8._0_8_ == (FProperty *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementProp",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1653,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar10 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash
                               ((FScriptSetHelper *)local_1f8);
            pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                          FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_1f8,iVar10);
            pUVar18 = (UStruct *)pUVar13->PropertyLink;
            pUStack_2c8 = pUVar18;
          }
          goto LAB_148ba441b;
        }
        if (((int)local_310 != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StateStack.Num() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                               ,0x169,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        if (local_2f8 == (UStruct *)0x0) {
LAB_148ba4180:
          pUVar13 = pUStack_2f0;
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_320 != 0) {
            FVar25.Data = local_328.Data;
          }
          ::FName::FName(&local_270,(wchar_t *)FVar25.Data,FNAME_Find);
          pUVar18 = (UStruct *)FindFProperty<FProperty>(pUVar13,local_270,Default);
          pTVar27 = pTStack_300;
          pUStack_2c8 = pUVar18;
          if (pUVar18 == (UStruct *)0x0) {
            if ((param_4->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
            }
            if (param_4->MissingFields == Error) goto switchD_148ba3186_caseD_3;
          }
          else {
            uVar23 = *(ulonglong *)(pUVar18->_padding_ + 0x18);
            pUVar13 = pUVar18;
            if ((uVar23 & 0x400000000000) == 0) {
              pUVar13 = pUVar21;
            }
            if (pUVar13 == (UStruct *)0x0) {
              if ((uVar23 >> 0x38 & 1) == 0) {
                if (((int)pUVar18->_padding_ < 1) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                if ((pTVar27 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                              ((pTVar27->Elements).AllocationFlags.AllocatorInstance.InlineData +
                              (longlong)*(int *)((longlong)&(pUVar18->SuperStruct).field0_0x0 + 4) +
                              -0x10);
                param_4 = local_2e0;
              }
              else {
                lVar26 = (longlong)(int)local_308;
                if ((((int)local_308 < 0) || ((int)pUVar18->_padding_ <= (int)local_308)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                if ((pTVar27 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                              ((pTVar27->Elements).AllocationFlags.AllocatorInstance.InlineData +
                              (longlong)*(int *)((longlong)&(pUVar18->SuperStruct).field0_0x0 + 4) +
                              lVar26 * *(int *)((longlong)&pUVar18->_padding_ + 4) + -0x10);
                FOptionalPropertyLayout::MarkUnset
                          ((FOptionalPropertyLayout *)&pUVar18->PropertyLink,pTStack_2d0);
                param_4 = local_2e0;
              }
            }
            else {
              lVar26 = (longlong)(int)local_308;
              if ((((int)local_308 < 0) || ((int)pUVar13->_padding_ <= (int)local_308)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              if ((pTVar27 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                            ((pTVar27->Elements).AllocationFlags.AllocatorInstance.InlineData +
                            (longlong)*(int *)((longlong)&(pUVar13->SuperStruct).field0_0x0 + 4) +
                            lVar26 * *(int *)((longlong)&pUVar13->_padding_ + 4) + -0x10);
              FScriptMapHelper::FScriptMapHelper(&local_e8,(FMapProperty *)pUVar13,pTStack_2d0);
              if ((local_e8.MapFlags & UsesMemoryImageAllocator) == None) {
                iVar10 = *(int *)&((local_e8.field2_0x10.FreezableMap)->Pairs).field_0x34;
              }
              else {
                iVar10 = ((local_e8.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
              }
              iVar10 = ((local_e8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar10;
              param_4 = local_2e0;
              if (iVar10 != 0) {
                FScriptMapHelper::DestructItems(&local_e8,0,iVar10);
                local_230.__this = &local_e8;
                local_230.Slack = 0;
                FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                          (&local_e8,&local_230);
                param_4 = local_2e0;
              }
            }
          }
        }
        else {
          pFVar17 = (FFieldClass *)local_2f8->_padding_;
          pFVar15 = FMapProperty::StaticClass();
          if (pFVar17 != pFVar15) {
            if (local_2f8 != (UStruct *)0x0) {
              pFVar17 = FOptionalProperty::StaticClass();
              if ((FFieldClass *)local_2f8->_padding_ == pFVar17) {
                pUVar13 = local_2f8;
                if (((((FFieldClass *)local_2f8->_padding_)->CastFlags & CASTCLASS_FOptionalProperty
                     ) == CASTCLASS_None) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CastResult",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                       ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                   pUVar13 = pUVar21, bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                if ((pUVar13->PropertyLink == (FProperty *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ValueProperty",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                       ,0x18,L"Expected ValueProperty to be initialized"), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                pUVar18 = (UStruct *)pUVar13->PropertyLink;
                pUStack_2c8 = pUVar18;
                pTStack_2d0 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                                        ((FOptionalPropertyLayout *)&pUVar13->PropertyLink,
                                         pTStack_300);
                goto LAB_148ba441b;
              }
            }
            goto LAB_148ba4180;
          }
          if ((local_2f8 == (UStruct *)0x0) ||
             (pUVar13 = local_2f8, (pFVar17->CastFlags & CASTCLASS_FMapProperty) == CASTCLASS_None))
          {
            pUVar13 = pUVar21;
          }
          FScriptMapHelper::FScriptMapHelper(&local_180,(FMapProperty *)pUVar13,pTStack_300);
          pFVar1 = &local_180.MapLayout.SetLayout.SparseArrayLayout;
          if ((local_180.MapFlags & UsesMemoryImageAllocator) == None) {
            iVar10 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                         *)local_180.field2_0x10.HeapMap,pFVar1);
          }
          else {
            iVar10 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                         *)local_180.field2_0x10.HeapMap,pFVar1);
          }
          FScriptMapHelper::ConstructItem(&local_180,iVar10);
          puVar16 = FScriptMapHelper::GetPairPtr(&local_180,iVar10);
          pUVar18 = (UStruct *)pUVar13->RefLink;
          pFVar14 = pUVar13->PropertyLink;
          pTStack_2d0 = (TScriptSparseSet<FDefaultSetAllocator> *)
                        (puVar16 + local_180.MapLayout.ValueOffset);
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_320 != 0) {
            FVar25.Data = local_328.Data;
          }
          pUStack_2c8 = pUVar18;
          bVar6 = FProperty::ValidateImportFlags(pFVar14,0,(FOutputDevice *)GWarn);
          param_4 = local_2e0;
          if ((bVar6) && (FVar25.Data != (FScriptContainerElement *)0x0)) {
            (**(code **)(pFVar14->_padding_ + 0xe8))(pFVar14,FVar25.Data);
            param_4 = local_2e0;
          }
        }
LAB_148ba441b:
        pUVar21 = (UStruct *)0x0;
        if (pUVar18 == (UStruct *)0x0) {
          (**(code **)((longlong)*param_3 + 0x38))(param_3);
          if ((param_4->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          }
          if (param_4->MissingFields == Error) goto switchD_148ba3186_caseD_3;
        }
        else {
          if (*(void **)&param_4->PropertyFilter != (void *)0x0) {
            local_268 = local_2f8;
            local_260 = pUVar18;
            UE::Core::Private::Function::CheckCallable(*(void **)&param_4->PropertyFilter);
            plVar3 = *(longlong **)&(param_4->PropertyFilter).field_0x28;
            pcVar4 = *(code **)&param_4->PropertyFilter;
            plVar22 = (longlong *)&(param_4->PropertyFilter).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar22 = plVar3;
            }
            uVar19 = (**(code **)(*plVar22 + 8))();
            cVar8 = (*pcVar4)(uVar19,&local_260);
            if (cVar8 == '\0') {
              (**(code **)((longlong)*param_3 + 0x38))(param_3);
              goto switchD_148ba3186_caseD_2;
            }
          }
          local_2d8 = 0;
          if ((*(uint *)(pUVar18->_padding_ + 0x18) >> 0x15 & 1) != 0) {
            pUVar18 = (UStruct *)pUVar18->RefLink;
          }
          if ((((pUVar18 == (UStruct *)0x0) ||
               (pUVar13 = pUVar18, (*(uint *)(pUVar18->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
              (pUVar13 = pUVar21, pUVar18 == (UStruct *)0x0)) ||
             ((*(uint *)(pUVar18->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
            pUVar18 = pUVar21;
          }
          if (pUVar13 == (UStruct *)0x0) {
            if (pUVar18 != (UStruct *)0x0) {
              pUVar21 = (UStruct *)pUVar18->PropertyLink;
            }
          }
          else {
            pUVar21 = (UStruct *)pUVar13->PropertyLink;
          }
          pUStack_2c0 = pUVar21;
          if (((local_318.Data <= (FScriptContainerElement *)&local_308) &&
              ((FScriptContainerElement *)&local_308 <
               local_318.Data + (longlong)local_310._4_4_ * 0x20)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar10 = (int)local_310;
          if ((int)local_310 == local_310._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_318,(int *)((longlong)&local_310 + 4));
          }
          local_310 = CONCAT44(local_310._4_4_,iVar10 + 1);
          *(longlong *)(local_318.Data + (longlong)iVar10 * 0x20) = local_308;
          *(TScriptSparseSet<FDefaultSetAllocator> **)(local_318.Data + (longlong)iVar10 * 0x20 + 8)
               = pTStack_300;
          local_308 = CONCAT44(uStack_2d4,local_2d8);
          pTStack_300 = pTStack_2d0;
          *(UStruct **)(local_318.Data + (longlong)iVar10 * 0x20 + 0x10) = local_2f8;
          *(UStruct **)(local_318.Data + (longlong)iVar10 * 0x20 + 0x10 + 8) = pUStack_2f0;
          local_2f8 = pUStack_2c8;
          pUStack_2f0 = pUStack_2c0;
        }
      }
      goto switchD_148ba3186_caseD_2;
    }
  }
  bVar6 = false;
LAB_148ba464f:
  if (local_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data);
  }
  return bVar6;
switchD_148ba3186_caseD_2:
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  goto LAB_148ba30e2;
}

// DeserializeElement @ 148ba46f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FStructDeserializer::DeserializeElement
          (void *param_1,UStruct *param_2,int param_3,IStructDeserializerBackend *param_4,
          FStructDeserializerPolicies *param_5)

{
  FProperty **this;
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  FFieldClass *pFVar12;
  FMapProperty *this_00;
  UStruct *pUVar13;
  UStruct *pUVar14;
  FFieldClass *pFVar15;
  void *pvVar16;
  undefined8 uVar17;
  longlong *plVar18;
  FScriptContainerElement *_Dst;
  undefined1 *puVar19;
  ulonglong uVar20;
  FStaticBasicLogRecord *pFVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  FScriptArrayHelper_u_8 FVar24;
  UStruct *pUVar25;
  UStruct *pUVar26;
  undefined1 auStackY_548 [32];
  undefined8 local_4f8;
  UStruct *pUStack_4f0;
  UStruct *local_4e8;
  UStruct *pUStack_4e0;
  ForAnyElementType local_4d8;
  int local_4d0;
  int local_4cc;
  ForAnyElementType local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  UStruct *pUStack_4b0;
  UStruct *pUStack_4a8;
  UStruct *pUStack_4a0;
  undefined4 local_498 [2];
  FScriptArrayHelper local_490;
  FScriptArrayHelper local_470;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  UStruct *local_420;
  UStruct *local_418;
  FName local_410;
  UStruct *local_408;
  FMapProperty *local_400;
  FName local_3f8;
  UStruct *local_3f0;
  UStruct *local_3e8 [2];
  FScriptArrayHelper local_3d8;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [24];
  ulonglong *local_390;
  int local_388;
  byte local_380;
  undefined1 local_378 [32];
  int local_358;
  undefined1 local_350 [24];
  FProperty *pFStack_338;
  int local_330;
  undefined1 local_328 [32];
  int local_308;
  void *local_300 [2];
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  void *local_2c0 [2];
  void *local_2b0 [2];
  void *local_2a0 [2];
  void *local_290 [2];
  FString local_280;
  void *local_270 [2];
  void *local_260 [2];
  FString local_250;
  undefined1 local_240 [32];
  int local_220;
  undefined1 local_218 [24];
  FProperty *pFStack_200;
  int local_1f8;
  undefined1 local_1f0 [24];
  FProperty *pFStack_1d8;
  int local_1d0;
  FScriptMapHelper local_1c8;
  FScriptMapHelper local_190;
  FScriptMapHelper local_158;
  FScriptMapHelper local_120;
  FScriptMapHelper local_e8;
  FScriptMapHelper local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_548;
  if ((param_1 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutAddress != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                         ,0x1ed,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar26 = (UStruct *)0x0;
  if (param_3 == -1) {
    param_3 = 0;
  }
  local_4e8 = (UStruct *)0x0;
  local_4f8 = CONCAT44(local_4f8._4_4_,param_3);
  local_4c8.Data = (FScriptContainerElement *)0x0;
  local_4c0 = 0;
  pUStack_4f0 = param_1;
  pUStack_4e0 = param_2;
  while (cVar7 = (**(code **)((longlong)*param_4 + 0x18))(param_4,local_498), cVar7 != '\0') {
    puVar11 = (undefined8 *)(**(code **)*param_4)(param_4);
    local_4d8.Data = (FScriptContainerElement *)0x0;
    local_4d0 = *(int *)(puVar11 + 1);
    lVar23 = (longlong)local_4d0;
    pvVar16 = (void *)*puVar11;
    if (local_4d0 == 0) {
      local_4cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_4d0,0,&local_4d8,local_4d0,&local_4cc);
      memcpy(local_4d8.Data,pvVar16,lVar23 * 2);
    }
    pUVar25 = pUStack_4e0;
    pUVar14 = local_4e8;
    pUVar13 = pUStack_4f0;
    switch(local_498[0]) {
    case 0:
      if (local_4e8 == (UStruct *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentState.Property",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                           ,0x204,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (local_4e8 != (UStruct *)0x0) goto LAB_148ba4880;
LAB_148ba48c8:
        pUVar14 = local_4e8;
        iVar9 = (int)local_4e8->_padding_;
        if ((1 < iVar9) && ((int)local_4f8 < iVar9)) {
          if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
            bVar5 = IsThisNotNull(local_4e8,"FField::GetFName");
            if (bVar5) {
              local_450 = (FName)pUVar14->_padding_;
            }
            else {
              local_450.ComparisonIndex.Value = 0;
              local_450.Number = 0;
            }
            ::FName::ToString(&local_450,&local_2d0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
          }
          if (param_5->MissingFields == Error) goto switchD_148ba4844_caseD_3;
        }
      }
      else {
LAB_148ba4880:
        if ((*(ulonglong *)(local_4e8->_padding_ + 0x18) & 0x800000000000) == 0) {
          if ((local_4e8 == (UStruct *)0x0) ||
             ((*(ulonglong *)(local_4e8->_padding_ + 0x18) & 0x400000000000) == 0))
          goto LAB_148ba48c8;
          FScriptMapHelper::FScriptMapHelper(&local_e8,(FMapProperty *)local_4e8,pUStack_4f0);
          FScriptMapHelper::Rehash(&local_e8);
        }
        else {
          local_218._0_8_ = local_4e8->PropertyLink;
          local_218._8_8_ = pUStack_4f0;
          local_1f8 = *(int *)&local_4e8->PostConstructLink;
          local_218._16_8_ = local_4e8->RefLink;
          pFStack_200 = local_4e8->DestructorLink;
          if (((FProperty *)local_218._0_8_ == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementProp",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1653,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FScriptSetHelper::Rehash((FScriptSetHelper *)local_218);
        }
      }
      bVar5 = (int)local_4c0 == 0;
      if (!bVar5) {
LAB_148ba59f9:
        iVar9 = (int)local_4c0;
        if (bVar5 || (int)local_4c0 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = (int)local_4c0;
        }
        _Dst = local_4c8.Data + (longlong)(iVar9 + -1) * 0x20;
        pUVar14 = *(UStruct **)(_Dst + 0x10);
        pUVar13 = *(UStruct **)(_Dst + 0x18);
        uVar20 = *(ulonglong *)_Dst;
        pUVar25 = *(UStruct **)(_Dst + 8);
        iVar8 = (iVar9 - (iVar9 + -1)) + -1;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 0x20,(longlong)iVar8 << 5);
          iVar9 = (int)local_4c0;
        }
        local_4c0 = CONCAT44(local_4c0._4_4_,iVar9 + -1);
        local_4f8 = uVar20;
        pUStack_4f0 = pUVar25;
        local_4e8 = pUVar14;
        pUStack_4e0 = pUVar13;
        break;
      }
      if (5 < (byte)LogSerialization._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      }
    case 3:
switchD_148ba4844_caseD_3:
      bVar5 = false;
LAB_148ba4968:
      if (local_4d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data);
      }
      goto LAB_148ba66e8;
    case 1:
      local_4b8 = 0;
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_4d0 != 0) {
        FVar22.Data = local_4d8.Data;
      }
      pUStack_4b0 = (UStruct *)0x0;
      pUStack_4a0 = (UStruct *)0x0;
      ::FName::FName(&local_428,(wchar_t *)FVar22.Data,FNAME_Find);
      pUVar14 = (UStruct *)FindFProperty<FProperty>(pUVar25,local_428,Default);
      pUStack_4a8 = pUVar14;
      if (pUVar14 == (UStruct *)0x0) {
        if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
        }
        if (param_5->MissingFields == Error) goto switchD_148ba4844_caseD_3;
        (**(code **)((longlong)*param_4 + 0x30))(param_4);
      }
      else {
        if (*(void **)&param_5->PropertyFilter != (void *)0x0) {
          local_420 = local_4e8;
          local_418 = pUVar14;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_5->PropertyFilter);
          plVar3 = *(longlong **)&(param_5->PropertyFilter).field_0x28;
          pcVar4 = *(code **)&param_5->PropertyFilter;
          plVar18 = (longlong *)&(param_5->PropertyFilter).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar18 = plVar3;
          }
          uVar17 = (**(code **)(*plVar18 + 8))();
          cVar7 = (*pcVar4)(uVar17,&local_418);
          if (cVar7 == '\0') {
            (**(code **)((longlong)*param_4 + 0x30))(param_4);
            break;
          }
        }
        pUVar13 = pUStack_4f0;
        uVar20 = *(ulonglong *)(pUVar14->_padding_ + 0x18);
        if (((uVar20 >> 0x2f & 1) != 0) ||
           (((uVar20 >> 0x15 & 1) == 0 && ((uVar20 & 0x400000000000) != 0)))) {
          if (((int)pUVar14->_padding_ < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((pUVar13 == (UStruct *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pUVar13 = (UStruct *)
                    ((longlong)&pUVar13->_padding_ +
                    (longlong)*(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4));
        }
        local_4b8 = 0;
        if ((*(uint *)(pUVar14->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          pUVar14 = (UStruct *)pUVar14->RefLink;
        }
        if ((((pUVar14 == (UStruct *)0x0) ||
             (pUVar25 = pUVar14, (*(uint *)(pUVar14->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
            (pUVar25 = pUVar26, pUVar14 == (UStruct *)0x0)) ||
           ((*(uint *)(pUVar14->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
          pUVar14 = pUVar26;
        }
        if (pUVar25 == (UStruct *)0x0) {
          pUStack_4a0 = pUVar26;
          if (pUVar14 != (UStruct *)0x0) {
            pUStack_4a0 = (UStruct *)pUVar14->PropertyLink;
          }
        }
        else {
          pUStack_4a0 = (UStruct *)pUVar25->PropertyLink;
        }
        pUStack_4b0 = pUVar13;
        if (((local_4c8.Data <= (FScriptContainerElement *)&local_4f8) &&
            ((FScriptContainerElement *)&local_4f8 <
             local_4c8.Data + (longlong)local_4c0._4_4_ * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar9 = (int)local_4c0;
        if ((int)local_4c0 != local_4c0._4_4_) goto LAB_148ba6617;
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_4c8,(int *)((longlong)&local_4c0 + 4));
        local_4c0 = CONCAT44(local_4c0._4_4_,iVar9 + 1);
        *(ulonglong *)(local_4c8.Data + (longlong)iVar9 * 0x20) = local_4f8;
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 8) = pUStack_4f0;
        local_4f8 = CONCAT44(uStack_4b4,local_4b8);
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 0x10) = local_4e8;
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 0x10 + 8) = pUStack_4e0;
        pUStack_4f0 = pUStack_4b0;
        local_4e8 = pUStack_4a8;
        pUStack_4e0 = pUStack_4a0;
      }
      break;
    case 5:
      if (local_4d0 < 2) {
        if (local_4e8 != (UStruct *)0x0) {
          pFVar15 = (FFieldClass *)local_4e8->_padding_;
          pFVar12 = FSetProperty::StaticClass();
          if (pFVar15 == pFVar12) {
            if ((local_4e8 == (UStruct *)0x0) ||
               (pUVar14 = local_4e8, (pFVar15->CastFlags & CASTCLASS_FSetProperty) == CASTCLASS_None
               )) {
              pUVar14 = pUVar26;
            }
            local_378._0_8_ = pUVar14->PropertyLink;
            local_378._8_8_ = pUStack_4f0;
            local_358 = *(int *)&pUVar14->PostConstructLink;
            local_378._16_8_ = pUVar14->RefLink;
            local_378._24_4_ = *(int *)&pUVar14->DestructorLink;
            local_378._28_4_ = *(int *)((longlong)&pUVar14->DestructorLink + 4);
            if (((FProperty *)local_378._0_8_ == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementProp",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1653,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar9 = StructDeserializer::ExpandForIndex<FScriptSetHelper>
                              ((FScriptSetHelper *)local_378,(int)local_4f8);
            FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_378,iVar9);
            cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pUVar14->PropertyLink);
            if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_4 + 8))(param_4,local_2c0);
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_An_item_in_Set__151c73450,
                         (FLogCategoryBase *)&LogSerialization);
              if (local_2c0[0] != (void *)0x0) {
                FMemory::Free(local_2c0[0]);
              }
            }
            local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
          }
        }
        if (1 < local_4d0) goto LAB_148ba4f0a;
        if (local_4e8 == (UStruct *)0x0) goto LAB_148ba5021;
        pFVar15 = (FFieldClass *)local_4e8->_padding_;
        pFVar12 = FMapProperty::StaticClass();
        if (pFVar15 != pFVar12) goto LAB_148ba4f0a;
        if ((local_4e8 == (UStruct *)0x0) ||
           (pUVar14 = local_4e8, (pFVar15->CastFlags & CASTCLASS_FMapProperty) == CASTCLASS_None)) {
          pUVar14 = pUVar26;
        }
        FScriptMapHelper::FScriptMapHelper(&local_120,(FMapProperty *)pUVar14,pUStack_4f0);
        iVar9 = StructDeserializer::ExpandForIndex<FScriptMapHelper>(&local_120,(int)local_4f8);
        FScriptMapHelper::GetPairPtr(&local_120,iVar9);
        cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pUVar14->RefLink);
        if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
          (**(code **)((longlong)*param_4 + 8))(param_4,local_2b0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          pvVar16 = local_2b0[0];
          goto LAB_148ba5265;
        }
      }
      else {
LAB_148ba4f0a:
        if (local_4e8 != (UStruct *)0x0) {
          pFVar15 = (FFieldClass *)local_4e8->_padding_;
          pFVar12 = FOptionalProperty::StaticClass();
          if (pFVar15 == pFVar12) {
            if ((local_4e8 == (UStruct *)0x0) ||
               (pUVar14 = local_4e8,
               (pFVar15->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None)) {
              pUVar14 = pUVar26;
            }
            if ((pUVar14->PropertyLink == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ValueProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                   ,0x18,L"Expected ValueProperty to be initialized"), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar2 = pUVar14->PropertyLink;
            FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                      ((FOptionalPropertyLayout *)&pUVar14->PropertyLink,pUStack_4f0);
            cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pFVar2);
            if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_4 + 8))(param_4,local_2a0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_2a0[0] != (void *)0x0) {
                FMemory::Free(local_2a0[0]);
              }
            }
            break;
          }
        }
LAB_148ba5021:
        pUVar25 = pUStack_4e0;
        pUVar13 = local_4e8;
        pUVar14 = pUStack_4f0;
        if (1 < local_4d0) {
          ::FName::FName(&local_410,(wchar_t *)local_4d8.Data,FNAME_Find);
          this_00 = (FMapProperty *)FindFProperty<FProperty>(pUVar25,local_410,Default);
          if (this_00 == (FMapProperty *)0x0) {
            if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
              pFVar21 = &::LOG_Static;
              goto LAB_148ba666a;
            }
            goto LAB_148ba6688;
          }
          if (*(void **)&param_5->PropertyFilter != (void *)0x0) {
            local_408 = local_4e8;
            local_400 = this_00;
            UE::Core::Private::Function::CheckCallable(*(void **)&param_5->PropertyFilter);
            plVar3 = *(longlong **)&(param_5->PropertyFilter).field_0x28;
            pcVar4 = *(code **)&param_5->PropertyFilter;
            plVar18 = (longlong *)&(param_5->PropertyFilter).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar18 = plVar3;
            }
            uVar17 = (**(code **)(*plVar18 + 8))();
            cVar7 = (*pcVar4)(uVar17);
            if (cVar7 == '\0') break;
          }
          pUVar14 = pUStack_4f0;
          uVar20 = *(ulonglong *)(this_00->_padding_ + 0x18);
          if ((uVar20 >> 0x2f & 1) == 0) {
            if ((uVar20 & 0x400000000000) == 0) {
              if ((uVar20 >> 0x15 & 1) == 0) {
                if ((uVar20 >> 0x38 & 1) != 0) {
                  pUVar13 = FProperty::ContainerVoidPtrToValuePtrInternal
                                      ((FProperty *)this_00,pUStack_4f0,0);
                  bVar5 = FOptionalPropertyLayout::IsSet
                                    ((FOptionalPropertyLayout *)&this_00->KeyProp,pUVar13);
                  pUVar14 = pUVar26;
                  if (bVar5) {
                    pUVar14 = pUVar13;
                  }
                  if (pUVar14 == (UStruct *)0x0) {
                    if (5 < (byte)LogSerialization._0_1_) {
                      bVar5 = IsThisNotNull(this_00,"FField::GetFName");
                      if (bVar5) {
                        local_440 = (FName)this_00->_padding_;
                      }
                      else {
                        local_440.ComparisonIndex.Value = 0;
                        local_440.Number = 0;
                      }
                      ::FName::ToString(&local_440,&local_250);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_250.Data.AllocatorInstance.Data);
                      }
                    }
                    (**(code **)((longlong)*param_4 + 0x38))(param_4);
                    break;
                  }
                  this_00 = (FMapProperty *)
                            FOptionalPropertyLayout::GetValueProperty
                                      ((FOptionalPropertyLayout *)&this_00->KeyProp);
                  local_4f8 = local_4f8 & 0xffffffff00000000;
                  pUStack_4f0 = pUVar14;
                }
              }
              else {
                if (((int)this_00->_padding_ < 1) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                if ((pUVar14 == (UStruct *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                iVar9 = *(int *)((longlong)&this_00->_padding_ + 4);
                EVar1 = *(EArrayPropertyFlags *)&this_00->KeyProp;
                uVar10 = (**(code **)(this_00->ValueProp->_padding_ + 0x168))();
                FScriptArrayHelper::FScriptArrayHelper
                          (&local_3d8,Internal,this_00->ValueProp,
                           (void *)((longlong)&pUVar14->_padding_ + (longlong)iVar9),
                           this_00->ValueProp->ElementSize,uVar10,EVar1);
                iVar9 = (int)local_4f8;
                if (((int)local_4f8 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x10be,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                if ((local_3d8.field1_0x8.FreezableArray)->ArrayNum <= iVar9) {
                  FScriptArrayHelper::AddValues
                            (&local_3d8,
                             (iVar9 - (local_3d8.field1_0x8.FreezableArray)->ArrayNum) + 1);
                }
                this_00 = (FMapProperty *)this_00->ValueProp;
                if ((local_3d8.field1_0x8.FreezableArray)->ArrayNum == 0) {
                  pUStack_4f0 = (UStruct *)0x0;
                  local_4f8 = (ulonglong)local_4f8._4_4_ << 0x20;
                }
                else {
                  puVar19 = (undefined1 *)(local_3d8.field1_0x8.FreezableArray)->_padding_;
                  if (((local_3d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     (((ulonglong)puVar19 & 1) != 0)) {
                    puVar19 = &(local_3d8.field1_0x8.HeapArray)->field_0x0 +
                              ((longlong)puVar19 >> 0x18);
                  }
                  lVar23 = (longlong)(int)local_4f8;
                  local_4f8 = (ulonglong)local_4f8._4_4_ << 0x20;
                  pUStack_4f0 = (UStruct *)(puVar19 + local_3d8.ElementSize * lVar23);
                }
              }
              cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,this_00);
              if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
                (**(code **)((longlong)*param_4 + 8))(param_4,local_300);
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                if (local_300[0] != (void *)0x0) {
                  FMemory::Free(local_300[0]);
                }
              }
            }
            else {
              if (((int)this_00->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar14 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              FScriptMapHelper::FScriptMapHelper
                        (&local_1c8,this_00,
                         (void *)((longlong)&pUVar14->_padding_ +
                                 (longlong)*(int *)((longlong)&this_00->_padding_ + 4)));
              iVar9 = StructDeserializer::ExpandForIndex<FScriptMapHelper>
                                (&local_1c8,(int)local_4f8);
              pFVar2 = this_00->ValueProp;
              pUStack_4f0 = (UStruct *)FScriptMapHelper::GetPairPtr(&local_1c8,iVar9);
              local_4f8 = local_4f8 & 0xffffffff00000000;
              cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pFVar2);
              if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
                (**(code **)((longlong)*param_4 + 8))(param_4,local_260);
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                if (local_260[0] != (void *)0x0) {
                  FMemory::Free(local_260[0]);
                }
              }
              FScriptMapHelper::Rehash(&local_1c8);
            }
          }
          else {
            if (((int)this_00->_padding_ < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((pUVar14 == (UStruct *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            local_240._0_8_ = this_00->KeyProp;
            local_240._16_8_ = this_00->ValueProp;
            local_240._24_4_ = (this_00->MapLayout).ValueOffset;
            local_240._28_4_ = (this_00->MapLayout).SetLayout.HashNextIdOffset;
            local_240._8_8_ =
                 (longlong)&pUVar14->_padding_ +
                 (longlong)*(int *)((longlong)&this_00->_padding_ + 4);
            local_220 = (this_00->MapLayout).SetLayout.HashIndexOffset;
            if (((FProperty *)local_240._0_8_ == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementProp",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1653,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar9 = StructDeserializer::ExpandForIndex<FScriptSetHelper>
                              ((FScriptSetHelper *)local_240,(int)local_4f8);
            pFVar2 = this_00->KeyProp;
            pUStack_4f0 = (UStruct *)
                          FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_240,iVar9);
            local_4f8 = local_4f8 & 0xffffffff00000000;
            cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pFVar2);
            if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
              (**(code **)((longlong)*param_4 + 8))(param_4,local_270);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_270[0] != (void *)0x0) {
                FMemory::Free(local_270[0]);
              }
            }
            FScriptSetHelper::Rehash((FScriptSetHelper *)local_240);
          }
          break;
        }
        if ((local_4e8 == (UStruct *)0x0) ||
           (pUVar25 = local_4e8, (*(uint *)(local_4e8->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
          pUVar25 = pUVar26;
        }
        if (pUVar25 == (UStruct *)0x0) {
          if (((int)local_4f8 < 0) ||
             (pUVar14 = local_4e8, (int)local_4e8->_padding_ <= (int)local_4f8)) {
            if (5 < (byte)LogSerialization._0_1_) {
              bVar5 = IsThisNotNull(local_4e8,"FField::GetFName");
              if (bVar5) {
                local_448 = (FName)pUVar13->_padding_;
              }
              else {
                local_448.ComparisonIndex.Value = 0;
                local_448.Number = 0;
              }
              ::FName::ToString(&local_448,&local_280);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization)
              ;
              if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
        }
        else {
          if (((int)pUVar25->_padding_ < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((pUVar14 == (UStruct *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar24.HeapArray =
               (FScriptArray *)
               ((longlong)&pUVar14->_padding_ +
               (longlong)*(int *)((longlong)&(pUVar25->SuperStruct).field0_0x0 + 4));
          EVar1 = *(EArrayPropertyFlags *)&pUVar25->PropertyLink;
          local_490.ElementAlignment = (**(code **)(pUVar25->RefLink->_padding_ + 0x168))();
          local_490.InnerProperty = pUVar25->RefLink;
          local_490.ElementSize = (local_490.InnerProperty)->ElementSize;
          local_490.field1_0x8.HeapArray = FVar24.HeapArray;
          local_490.ArrayFlags = EVar1;
          if ((local_490.ElementSize < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((local_490.InnerProperty == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = (int)local_4f8;
          if (((int)local_4f8 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((local_490.field1_0x8.FreezableArray)->ArrayNum <= iVar9) {
            FScriptArrayHelper::AddValues
                      (&local_490,(iVar9 - (local_490.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          pUVar14 = (UStruct *)pUVar25->RefLink;
        }
        if (pUVar14 == (UStruct *)0x0) {
          if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          }
          goto switchD_148ba4844_caseD_3;
        }
        cVar7 = (**(code **)((longlong)*param_4 + 0x20))(param_4,pUVar14);
        if ((cVar7 == '\0') && (5 < (byte)LogSerialization._0_1_)) {
          (**(code **)((longlong)*param_4 + 8))(param_4,local_290);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          pvVar16 = local_290[0];
LAB_148ba5265:
          if (pvVar16 != (void *)0x0) {
            FMemory::Free(pvVar16);
          }
        }
      }
      local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
      break;
    case 6:
      if (local_4e8 != (UStruct *)0x0) {
        if ((*(ulonglong *)(local_4e8->_padding_ + 0x18) & 0x400000000000) == 0) {
          if ((local_4e8 != (UStruct *)0x0) &&
             ((*(ulonglong *)(local_4e8->_padding_ + 0x18) & 0x800000000000) != 0)) {
            local_1f0._0_8_ = local_4e8->PropertyLink;
            local_1f0._8_8_ = pUStack_4f0;
            local_1d0 = *(int *)&local_4e8->PostConstructLink;
            local_1f0._16_8_ = local_4e8->RefLink;
            pFStack_1d8 = local_4e8->DestructorLink;
            if (((FProperty *)local_1f0._0_8_ == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementProp",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1653,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            FScriptSetHelper::Rehash((FScriptSetHelper *)local_1f0);
          }
        }
        else {
          FScriptMapHelper::FScriptMapHelper(&local_b0,(FMapProperty *)local_4e8,pUStack_4f0);
          FScriptMapHelper::Rehash(&local_b0);
        }
      }
      bVar5 = (int)local_4c0 == 0;
      if (!bVar5) goto LAB_148ba59f9;
      bVar5 = true;
      goto LAB_148ba4968;
    case 7:
      local_4b8 = 0;
      pUStack_4a0 = (UStruct *)0x0;
      pUStack_4b0 = (UStruct *)0x0;
      pUStack_4a8 = (UStruct *)0x0;
      if (local_4d0 < 2) {
        if (local_4e8 == (UStruct *)0x0) {
          if (((int)local_4c0 != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StateStack.Num() == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                                 ,0x35e,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          break;
        }
        uVar20 = *(ulonglong *)(local_4e8->_padding_ + 0x18);
        if ((uVar20 >> 0x2f & 1) == 0) {
          if ((uVar20 & 0x400000000000) == 0) {
            if ((uVar20 >> 0x15 & 1) == 0) {
              if ((uVar20 >> 0x38 & 1) == 0) {
                if (((int)local_4f8 < 0) || ((int)local_4e8->_padding_ <= (int)local_4f8)) {
                  if (5 < (byte)LogSerialization._0_1_) {
                    bVar5 = IsThisNotNull(local_4e8,"FField::GetFName");
                    if (bVar5) {
                      local_438 = (FName)pUVar14->_padding_;
                    }
                    else {
                      local_438.ComparisonIndex.Value = 0;
                      local_438.Number = 0;
                    }
                    ::FName::ToString(&local_438,&local_2f0);
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                    }
                  }
                  (**(code **)((longlong)*param_4 + 0x38))(param_4);
                  break;
                }
                pUStack_4a8 = local_4e8;
                pUStack_4b0 = FProperty::ContainerVoidPtrToValuePtrInternal
                                        ((FProperty *)local_4e8,pUStack_4f0,(int)local_4f8);
                local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
              }
              else {
                if (((int)local_4e8->_padding_ < 1) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                if ((pUVar13 == (UStruct *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                iVar9 = *(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4);
                this = &pUVar14->PropertyLink;
                pUVar14 = (UStruct *)
                          FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this)
                ;
                pUStack_4a8 = pUVar14;
                pUStack_4b0 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                                        ((FOptionalPropertyLayout *)this,
                                         (void *)((longlong)&pUVar13->_padding_ + (longlong)iVar9));
              }
            }
            else {
              if (((int)local_4e8->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar13 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              FVar24.HeapArray =
                   (FScriptArray *)
                   ((longlong)&pUVar13->_padding_ +
                   (longlong)*(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4));
              EVar1 = *(EArrayPropertyFlags *)&pUVar14->PropertyLink;
              local_470.ElementAlignment = (**(code **)(pUVar14->RefLink->_padding_ + 0x168))();
              local_470.InnerProperty = pUVar14->RefLink;
              local_470.ElementSize = (local_470.InnerProperty)->ElementSize;
              local_470.field1_0x8.HeapArray = FVar24.HeapArray;
              local_470.ArrayFlags = EVar1;
              if ((local_470.ElementSize < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((local_470.InnerProperty == (FProperty *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar9 = (int)local_4f8;
              if (((int)local_4f8 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x10be,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((local_470.field1_0x8.FreezableArray)->ArrayNum <= iVar9) {
                FScriptArrayHelper::AddValues
                          (&local_470,(iVar9 - (local_470.field1_0x8.FreezableArray)->ArrayNum) + 1)
                ;
              }
              pUVar14 = (UStruct *)pUVar14->RefLink;
              pUStack_4a8 = pUVar14;
              if ((local_470.field1_0x8.FreezableArray)->ArrayNum == 0) {
                local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
                pUStack_4b0 = (UStruct *)0x0;
              }
              else {
                puVar19 = (undefined1 *)(local_470.field1_0x8.FreezableArray)->_padding_;
                if (((local_470.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   (((ulonglong)puVar19 & 1) != 0)) {
                  puVar19 = &(local_470.field1_0x8.HeapArray)->field_0x0 +
                            ((longlong)puVar19 >> 0x18);
                }
                pUStack_4b0 = (UStruct *)
                              (puVar19 + (longlong)local_470.ElementSize * (longlong)(int)local_4f8)
                ;
                local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
              }
            }
          }
          else {
            FScriptMapHelper::FScriptMapHelper(&local_190,(FMapProperty *)local_4e8,pUStack_4f0);
            local_3b8._8_4_ =
                 StructDeserializer::ExpandForIndex<FScriptMapHelper>(&local_190,(int)local_4f8);
            pUVar14 = (UStruct *)pUVar14->RefLink;
            local_3b8._0_8_ = &local_190;
            pUStack_4a8 = pUVar14;
            pUStack_4b0 = (UStruct *)
                          FScriptMapHelper::
                          WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                    (&local_190,(<lambda_1> *)local_3b8);
            local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
          }
        }
        else {
          local_350._0_8_ = local_4e8->PropertyLink;
          local_350._8_8_ = pUStack_4f0;
          local_330 = *(int *)&local_4e8->PostConstructLink;
          local_350._16_8_ = local_4e8->RefLink;
          pFStack_338 = local_4e8->DestructorLink;
          if (((FProperty *)local_350._0_8_ == (FProperty *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementProp",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1653,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = StructDeserializer::ExpandForIndex<FScriptSetHelper>
                            ((FScriptSetHelper *)local_350,(int)local_4f8);
          pUVar14 = (UStruct *)pUVar14->PropertyLink;
          pUStack_4a8 = pUVar14;
          pUStack_4b0 = (UStruct *)
                        FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_350,iVar9);
          local_4f8 = CONCAT44(local_4f8._4_4_,(int)local_4f8 + 1);
        }
      }
      else {
        if (local_4e8 != (UStruct *)0x0) {
          pFVar15 = FOptionalProperty::StaticClass();
          if ((FFieldClass *)local_4e8->_padding_ == pFVar15) {
            pUVar13 = local_4e8;
            if (((((FFieldClass *)local_4e8->_padding_)->CastFlags & CASTCLASS_FOptionalProperty) ==
                 CASTCLASS_None) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pUVar13 = pUVar26, bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((pUVar13->PropertyLink == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ValueProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                   ,0x18,L"Expected ValueProperty to be initialized"), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pUVar14 = (UStruct *)pUVar13->PropertyLink;
            pUStack_4a8 = pUVar14;
            pUStack_4b0 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                                    ((FOptionalPropertyLayout *)&pUVar13->PropertyLink,pUStack_4f0);
            goto LAB_148ba64c9;
          }
        }
        pUVar14 = pUStack_4e0;
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_4d0 != 0) {
          FVar22.Data = local_4d8.Data;
        }
        ::FName::FName(&local_3f8,(wchar_t *)FVar22.Data,FNAME_Find);
        pUVar14 = (UStruct *)FindFProperty<FProperty>(pUVar14,local_3f8,Default);
        pUVar13 = pUStack_4f0;
        pUStack_4a8 = pUVar14;
        if (pUVar14 == (UStruct *)0x0) {
          if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          }
          if (param_5->MissingFields == Error) goto switchD_148ba4844_caseD_3;
        }
        else {
          uVar20 = *(ulonglong *)(pUVar14->_padding_ + 0x18);
          if ((uVar20 & 0x400000000000) == 0) {
            if ((uVar20 >> 0x2f & 1) == 0) {
              if ((uVar20 >> 0x15 & 1) == 0) {
                if ((*(ulonglong *)(pUVar14->_padding_ + 0x18) & 0x100000000000000) == 0) {
                  if (((int)local_4f8 < 0) || ((int)pUVar14->_padding_ <= (int)local_4f8)) {
                    if (5 < (byte)LogSerialization._0_1_) {
                      bVar5 = IsThisNotNull(pUVar14,"FField::GetFName");
                      if (bVar5) {
                        local_430 = (FName)pUVar14->_padding_;
                      }
                      else {
                        local_430.ComparisonIndex.Value = 0;
                        local_430.Number = 0;
                      }
                      ::FName::ToString(&local_430,&local_2e0);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
                      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                      }
                    }
                    (**(code **)((longlong)*param_4 + 0x38))(param_4);
                    break;
                  }
                  pUStack_4b0 = FProperty::ContainerVoidPtrToValuePtrInternal
                                          ((FProperty *)pUVar14,pUStack_4f0,(int)local_4f8);
                  goto LAB_148ba64c1;
                }
                pUStack_4b0 = FProperty::ContainerVoidPtrToValuePtrInternal
                                        ((FProperty *)pUVar14,pUStack_4f0,(int)local_4f8);
                FOptionalPropertyLayout::MarkUnset
                          ((FOptionalPropertyLayout *)&pUVar14->PropertyLink,pUStack_4b0);
              }
              else if ((pUVar14->RefLink != (FProperty *)0x0) &&
                      ((*(uint *)(pUVar14->RefLink->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
                pvVar16 = FProperty::ContainerVoidPtrToValuePtrInternal
                                    ((FProperty *)pUVar14,pUStack_4f0,0);
                EVar1 = *(EArrayPropertyFlags *)&pUVar14->PropertyLink;
                uVar10 = (**(code **)(pUVar14->RefLink->_padding_ + 0x168))();
                FScriptArrayHelper::FScriptArrayHelper
                          ((FScriptArrayHelper *)(local_3a8 + 0x10),Internal,pUVar14->RefLink,
                           pvVar16,pUVar14->RefLink->ElementSize,uVar10,EVar1);
                FScriptArrayHelper::ExpandForIndex
                          ((FScriptArrayHelper *)(local_3a8 + 0x10),(int)local_4f8);
                local_4e8 = pUVar14;
                pUStack_4f0 = FProperty::ContainerVoidPtrToValuePtrInternal
                                        ((FProperty *)pUVar14,pUStack_4f0,0);
                pUVar14 = (UStruct *)pUVar14->RefLink;
                pUStack_4a8 = pUVar14;
                if ((int)local_390[1] == 0) {
                  local_4b8 = 0;
                  pUStack_4b0 = (UStruct *)0x0;
                }
                else {
                  uVar20 = *local_390;
                  if (((local_380 & 1) != 0) && ((uVar20 & 1) != 0)) {
                    uVar20 = (longlong)local_390 + ((longlong)uVar20 >> 0x18);
                  }
                  local_4b8 = 0;
                  pUStack_4b0 = (UStruct *)(uVar20 + (longlong)local_388 * (longlong)(int)local_4f8)
                  ;
                }
              }
            }
            else if ((pUVar14->PropertyLink != (FProperty *)0x0) &&
                    ((*(uint *)(pUVar14->PropertyLink->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
              if (((int)pUVar14->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar13 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              local_328._0_8_ = pUVar14->PropertyLink;
              local_328._16_8_ = pUVar14->RefLink;
              local_328._24_4_ = *(int *)&pUVar14->DestructorLink;
              local_328._28_4_ = *(int *)((longlong)&pUVar14->DestructorLink + 4);
              local_328._8_8_ =
                   (longlong)&pUVar13->_padding_ +
                   (longlong)*(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4);
              local_308 = *(int *)&pUVar14->PostConstructLink;
              if (((FProperty *)local_328._0_8_ == (FProperty *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementProp",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1653,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar9 = StructDeserializer::ExpandForIndex<FScriptSetHelper>
                                ((FScriptSetHelper *)local_328,(int)local_4f8);
              pUVar13 = pUStack_4f0;
              local_4e8 = pUVar14;
              if (((int)pUVar14->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar13 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pUStack_4f0 = (UStruct *)
                            ((longlong)&pUVar13->_padding_ +
                            (longlong)*(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4));
              pUVar14 = (UStruct *)pUVar14->PropertyLink;
              pUStack_4a8 = pUVar14;
              pUStack_4b0 = (UStruct *)
                            FScriptSetHelper::GetElementPtr((FScriptSetHelper *)local_328,iVar9);
              goto LAB_148ba64c1;
            }
          }
          else {
            pUVar25 = (UStruct *)pUVar14->RefLink;
            if ((pUVar25 != (UStruct *)0x0) &&
               ((*(uint *)(pUVar25->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
              if (((int)pUVar14->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar13 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              FScriptMapHelper::FScriptMapHelper
                        (&local_158,(FMapProperty *)pUVar14,
                         (void *)((longlong)&pUVar13->_padding_ +
                                 (longlong)
                                 *(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4)));
              iVar9 = StructDeserializer::ExpandForIndex<FScriptMapHelper>
                                (&local_158,(int)local_4f8);
              pUVar13 = pUStack_4f0;
              local_4e8 = pUVar14;
              if (((int)pUVar14->_padding_ < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              if ((pUVar13 == (UStruct *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pUStack_4f0 = (UStruct *)
                            ((longlong)&pUVar13->_padding_ +
                            (longlong)*(int *)((longlong)&(pUVar14->SuperStruct).field0_0x0 + 4));
              local_3a8._0_8_ = &local_158;
              pUStack_4a8 = pUVar25;
              local_3a8._8_4_ = iVar9;
              pUStack_4b0 = (UStruct *)
                            FScriptMapHelper::
                            WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                      (&local_158,(<lambda_1> *)local_3a8);
              pUVar14 = pUVar25;
LAB_148ba64c1:
              local_4b8 = 0;
            }
          }
        }
      }
LAB_148ba64c9:
      if (pUVar14 == (UStruct *)0x0) {
        (**(code **)((longlong)*param_4 + 0x38))(param_4);
        if ((param_5->MissingFields != Ignore) && (5 < (byte)LogSerialization._0_1_)) {
          pFVar21 = &::LOG_Static;
LAB_148ba666a:
          UE::Logging::Private::BasicLog<6>(pFVar21,(FLogCategoryBase *)&LogSerialization);
        }
LAB_148ba6688:
        if (param_5->MissingFields == Error) goto switchD_148ba4844_caseD_3;
      }
      else {
        if (*(void **)&param_5->PropertyFilter != (void *)0x0) {
          local_3f0 = local_4e8;
          local_3e8[0] = pUVar14;
          UE::Core::Private::Function::CheckCallable(*(void **)&param_5->PropertyFilter);
          plVar3 = *(longlong **)&(param_5->PropertyFilter).field_0x28;
          pcVar4 = *(code **)&param_5->PropertyFilter;
          plVar18 = (longlong *)&(param_5->PropertyFilter).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar18 = plVar3;
          }
          uVar17 = (**(code **)(*plVar18 + 8))();
          cVar7 = (*pcVar4)(uVar17,local_3e8);
          if (cVar7 == '\0') {
            (**(code **)((longlong)*param_4 + 0x38))(param_4);
            break;
          }
        }
        if ((*(uint *)(pUVar14->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          pUVar14 = (UStruct *)pUVar14->RefLink;
        }
        if ((((pUVar14 == (UStruct *)0x0) ||
             (pUVar13 = pUVar14, (*(uint *)(pUVar14->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
            (pUVar13 = pUVar26, pUVar14 == (UStruct *)0x0)) ||
           ((*(uint *)(pUVar14->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
          pUVar14 = pUVar26;
        }
        if (pUVar13 == (UStruct *)0x0) {
          pUStack_4a0 = pUVar26;
          if (pUVar14 != (UStruct *)0x0) {
            pUStack_4a0 = (UStruct *)pUVar14->PropertyLink;
          }
        }
        else {
          pUStack_4a0 = (UStruct *)pUVar13->PropertyLink;
        }
        if (((local_4c8.Data <= (FScriptContainerElement *)&local_4f8) &&
            ((FScriptContainerElement *)&local_4f8 <
             local_4c8.Data + (longlong)local_4c0._4_4_ * 0x20)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar9 = (int)local_4c0;
        if ((int)local_4c0 == local_4c0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_4c8,(int *)((longlong)&local_4c0 + 4));
        }
LAB_148ba6617:
        local_4c0 = CONCAT44(local_4c0._4_4_,iVar9 + 1);
        *(ulonglong *)(local_4c8.Data + (longlong)iVar9 * 0x20) = local_4f8;
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 8) = pUStack_4f0;
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 0x10) = local_4e8;
        *(UStruct **)(local_4c8.Data + (longlong)iVar9 * 0x20 + 0x10 + 8) = pUStack_4e0;
        pUStack_4f0 = pUStack_4b0;
        local_4e8 = pUStack_4a8;
        pUStack_4e0 = pUStack_4a0;
        local_4f8 = CONCAT44(uStack_4b4,local_4b8);
      }
    }
    if (local_4d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data);
    }
  }
  bVar5 = false;
LAB_148ba66e8:
  if (local_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data);
  }
  return bVar5;
}

