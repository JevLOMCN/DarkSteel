// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147a10590

UClass * __cdecl UCurveBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveBase",&Z_Registration_Info_UClass_UCurveBase.InnerSingleton,
               StaticRegisterNativesUCurveBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveBase>,InternalVTableHelperCtorCaller<UCurveBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveBase.InnerSingleton;
}

// UCurveBase @ 147a27630

UCurveBase * __thiscall UCurveBase::UCurveBase(UCurveBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveOwnerInterface__;
  return this;
}

// UCurveBase @ 147a27670

UCurveBase * __thiscall UCurveBase::UCurveBase(UCurveBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveOwnerInterface__;
  return this;
}

// ~UCurveBase @ 147a2a3f0

void __thiscall UCurveBase::~UCurveBase(UCurveBase *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateCurveFromCSVString @ 147a3aea0

/* WARNING: Removing unreachable block (ram,0x000147a3b4cd) */
/* WARNING: Removing unreachable block (ram,0x000147a3b5be) */
/* WARNING: Removing unreachable block (ram,0x000147a3b23e) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCurveBase::CreateCurveFromCSVString
          (UCurveBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<unsigned_int> aVar5;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int *piVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  uint local_res20;
  FString *in_stack_fffffffffffffec8;
  FString local_108;
  FString local_f8;
  FString local_e8;
  longlong local_d8;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  void *local_c0;
  int local_b8;
  void *local_b0;
  int local_a8;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *local_a0;
  int *local_98;
  FCsvParser local_90;
  FString local_60 [2];
  ulonglong uVar16;
  
  piVar20 = &__return_storage_ptr__->ArrayMax;
  uVar17 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  puVar1 = &this->field_0x28;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar20 = 0;
  local_98 = piVar20;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,&local_b0);
  iVar8 = local_a8;
  FCsvParser::FCsvParser(&local_90,param_1);
  if (local_90.Rows.ArrayNum == 0) {
    pFVar12 = (FScriptContainerElement *)::FString::FString(local_60,L"No data.");
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar20 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar13;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar20) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar20);
    }
    lVar14 = (longlong)iVar8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar14 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar14 * 0x10) =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar12->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + lVar14 * 0x10 + 8) = *(int *)&pFVar12[8].field_0x0;
    *(int *)(pFVar2 + lVar14 * 0x10 + 0xc) = *(int *)&pFVar12[0xc].field_0x0;
    *(undefined8 *)&pFVar12[8].field_0x0 = 0;
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
               local_90.Rows.AllocatorInstance.Data,local_90.Rows.ArrayNum);
  }
  else {
    (**(code **)(*(longlong *)puVar1 + 8))(puVar1,&local_c0);
    uVar16 = uVar17;
    uVar21 = uVar17;
    iVar9 = local_b8;
    if (0 < local_b8) {
      do {
        uVar15 = (uint)uVar16;
        uVar18 = 0;
        if ((int)uVar15 < iVar9) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if (uVar18 == 0) {
          in_stack_fffffffffffffec8 = (FString *)(longlong)(int)uVar15;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          iVar9 = local_b8;
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar13;
          }
        }
        if (*(longlong *)(uVar21 + 8 + (longlong)local_c0) != 0) {
          uVar18 = 0;
          if ((int)uVar15 < iVar9) {
            uVar18 = ~uVar15 >> 0x1f;
          }
          if (uVar18 == 0) {
            in_stack_fffffffffffffec8 = (FString *)(longlong)(int)uVar15;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar13;
            }
          }
          (**(code **)(**(longlong **)(uVar21 + 8 + (longlong)local_c0) + 0x78))();
          iVar9 = local_b8;
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar21 = uVar21 + 0x10;
      } while ((int)(uVar15 + 1) < iVar9);
    }
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    local_res20 = 0;
    if (0 < local_90.Rows.ArrayNum) {
      local_d8 = 0;
      do {
        lVar14 = local_d8;
        uVar15 = (uint)uVar17;
        uVar18 = 0;
        if ((int)uVar15 < local_90.Rows.ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if (uVar18 == 0) {
          in_stack_fffffffffffffec8 = (FString *)(longlong)(int)uVar15;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar13;
          }
        }
        local_a0 = (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                   local_90.Rows.AllocatorInstance.Data;
        iVar9 = *(int *)(local_90.Rows.AllocatorInstance.Data + lVar14 + 8);
        lVar22 = (longlong)iVar9;
        local_cc = iVar9;
        if (iVar9 < 2) {
          ::FString::PrintfImpl(&local_108,L"Row \'%d\' has less than 2 cells.");
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
             ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)*piVar20 * 0x10)) {
            in_stack_fffffffffffffec8 = &local_108;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar13;
            }
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == *piVar20) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,piVar20);
          }
          lVar22 = (longlong)iVar9;
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined8 *)(pFVar2 + lVar22 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar2 + lVar22 * 0x10) =
               local_108.Data.AllocatorInstance.Data;
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar2 + lVar22 * 0x10 + 8) = local_108.Data.ArrayNum;
          *(int *)(pFVar2 + lVar22 * 0x10 + 0xc) = local_108.Data.ArrayMax;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
        }
        else {
          dVar24 = _wtof((wchar_t *)**(undefined8 **)(local_90.Rows.AllocatorInstance.Data + lVar14)
                        );
          pTVar6 = local_a0;
          uVar18 = 1;
          lVar23 = 1;
          if (1 < lVar22) {
            local_c8 = iVar8 + 1;
            lVar19 = 0;
            do {
              piVar20 = local_98;
              lVar14 = local_d8;
              iVar9 = (int)lVar22;
              uVar15 = local_res20;
              if (local_c8 <= (int)uVar18) break;
              uVar10 = 0;
              if ((int)(uVar18 - 1) < local_a8) {
                uVar10 = -uVar18 >> 0x1f;
              }
              if (uVar10 == 0) {
                in_stack_fffffffffffffec8 = (FString *)(longlong)(int)(uVar18 - 1);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar13;
                }
              }
              plVar3 = *(longlong **)(lVar19 + 8 + (longlong)local_b0);
              if (plVar3 != (longlong *)0x0) {
                pcVar4 = *(code **)(*plVar3 + 0x28);
                LOCK();
                aVar5 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
                UNLOCK();
                iVar9 = (int)LastKeyHandleIndex + 1;
                LastKeyHandleIndex = aVar5;
                if ((iVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index != 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                       ,0x1c,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar13;
                }
                uVar10 = 0;
                if ((int)uVar18 < *(int *)((longlong)&pTVar6->ArrayNum + local_d8)) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if (uVar10 == 0) {
                  in_stack_fffffffffffffec8 = (FString *)(longlong)(int)uVar18;
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                    return pTVar13;
                  }
                }
                dVar25 = _wtof(*(wchar_t **)
                                (*(longlong *)
                                  ((longlong)&(pTVar6->AllocatorInstance).Data + local_d8) +
                                lVar23 * 8));
                in_stack_fffffffffffffec8 =
                     (FString *)((ulonglong)in_stack_fffffffffffffec8 & 0xffffffffffffff00);
                (*pcVar4)(plVar3,&local_d0,(float)dVar24,(float)dVar25,in_stack_fffffffffffffec8,
                          iVar9);
                (**(code **)(*plVar3 + 0x58))(plVar3,local_d0,0);
              }
              lVar22 = (longlong)local_cc;
              uVar18 = uVar18 + 1;
              lVar23 = lVar23 + 1;
              lVar19 = lVar19 + 0x10;
              piVar20 = local_98;
              lVar14 = local_d8;
              iVar9 = local_cc;
            } while (lVar23 < lVar22);
          }
          iVar11 = iVar8 + 1;
          if (iVar11 < iVar9) {
            ::FString::PrintfImpl(&local_f8,L"Row \'%d\' has too many cells for the curve(s).");
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
               ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)*piVar20 * 0x10)) {
              in_stack_fffffffffffffec8 = &local_f8;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar13;
              }
            }
            iVar9 = __return_storage_ptr__->ArrayNum;
            if (iVar9 == *piVar20) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&__return_storage_ptr__->AllocatorInstance,piVar20);
            }
            lVar22 = (longlong)iVar9;
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(undefined8 *)(pFVar2 + lVar22 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar2 + lVar22 * 0x10) =
                 local_f8.Data.AllocatorInstance.Data;
            local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar2 + lVar22 * 0x10 + 8) = local_f8.Data.ArrayNum;
            *(int *)(pFVar2 + lVar22 * 0x10 + 0xc) = local_f8.Data.ArrayMax;
            local_f8.Data.ArrayNum = 0;
            local_f8.Data.ArrayMax = 0;
          }
          else if (iVar9 < iVar11) {
            ::FString::PrintfImpl(&local_e8,L"Row \'%d\' has too few cells for the curve(s).");
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_e8) &&
               ((FScriptContainerElement *)&local_e8 < pFVar2 + (longlong)*piVar20 * 0x10)) {
              in_stack_fffffffffffffec8 = &local_e8;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                pTVar13 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                return pTVar13;
              }
            }
            iVar9 = __return_storage_ptr__->ArrayNum;
            if (iVar9 == *piVar20) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&__return_storage_ptr__->AllocatorInstance,piVar20);
            }
            lVar22 = (longlong)iVar9;
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(undefined8 *)(pFVar2 + lVar22 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar2 + lVar22 * 0x10) =
                 local_e8.Data.AllocatorInstance.Data;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar2 + lVar22 * 0x10 + 8) = local_e8.Data.ArrayNum;
            *(int *)(pFVar2 + lVar22 * 0x10 + 0xc) = local_e8.Data.ArrayMax;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
          }
        }
        local_res20 = uVar15 + 1;
        uVar17 = (ulonglong)local_res20;
        local_d8 = lVar14 + 0x10;
      } while ((int)local_res20 < local_90.Rows.ArrayNum);
    }
    DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
              ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
               local_90.Rows.AllocatorInstance.Data,local_90.Rows.ArrayNum);
  }
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_90.Rows.AllocatorInstance.Data !=
      (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_90.Rows.AllocatorInstance.Data);
  }
  if (local_90.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.SourceString.Data.AllocatorInstance.Data);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  return __return_storage_ptr__;
}

// ExportAsJSONString @ 147a43d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UCurveBase::ExportAsJSONString(UCurveBase *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  atomic<int> *paVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_58;
  TSharedRef<FJsonObject,1> local_48;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  MakeShared<FJsonObject,1>(&local_48);
  bVar3 = FJsonObjectConverter::UStructToJsonAttributes
                    (*(UStruct **)&this->field_0x10,this,&(local_48.Object)->Values,0,0x20002000,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,None);
  if (bVar3) {
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
              (&local_38,__return_storage_ptr__,0);
    FVar2.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar4 = ::operator_new(0x38);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      local_58.Object = ___xmm_00000000000000000000000000000010;
      local_58.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
      ;
      pTVar4[1]._padding_ = 0;
      pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5 = ::operator_new(0x30);
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        pTVar4[2]._padding_ = 0x10;
        pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        pTVar5->SharedReferenceCount = (atomic<int>)0x1;
        pTVar5->WeakReferenceCount = (atomic<int>)0x1;
        pTVar5->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
        ;
        local_28.Object = local_48.Object;
        local_28.SharedReferenceCount.ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar7 = (atomic<int>)((int)*paVar7 + 1);
          UNLOCK();
        }
        FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar5 + 1),&local_28);
        if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar1)();
            return pFVar6;
          }
        }
        pTVar4[2]._padding_ = (longlong)(pTVar5 + 1);
        *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar5;
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        pTVar8 = pTVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      local_58.Object = (FElement *)(pTVar4 + 1);
      *(undefined2 *)&pTVar4[3]._padding_ = 0;
      local_58.SharedReferenceCount.ReferenceController = pTVar4;
      if (local_58.Object == (FElement *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
      }
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_58,local_38.Object,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f0b0

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveBase::GetCurves
          (UCurveBase *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f0d0

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveBase::GetCurves
          (UCurveBase *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurves @ 147a4f0f0

void __thiscall
UCurveBase::GetCurves
          (UCurveBase *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 local_res8 [8];
  void *local_18 [2];
  
  (**(code **)(*(longlong *)this + 0x18))(this,local_18);
  iVar1 = (int)local_18[1];
  pvVar3 = (void *)((longlong)iVar1 * 0x10 + (longlong)local_18[0]);
  pvVar2 = local_18[0];
  while( true ) {
    if ((int)local_18[1] != iVar1) {
      `TCheckedPointerIterator<FRichCurveEditInfoTemplate<FRealCurve_const_*>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pvVar2 == pvVar3) break;
    (*(code *)**(undefined8 **)param_1)(*(undefined8 *)&param_1->field_0x8,pvVar2);
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// GetOwners @ 147a54da0

TArray<UObject_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UCurveBase::GetOwners
          (UCurveBase *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(undefined1 **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 8) =
       &this[-1].field_0x8;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147a56ea0

UClass * __cdecl UCurveBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveBase",&Z_Registration_Info_UClass_UCurveBase.InnerSingleton,
               StaticRegisterNativesUCurveBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveBase>,InternalVTableHelperCtorCaller<UCurveBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveBase.InnerSingleton;
}

// GetTimeRange @ 147a5ac10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCurveBase::GetTimeRange(UCurveBase *this,float *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  float local_168;
  float local_164 [3];
  TAdderReserverVTable<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *local_158;
  undefined1 *local_150;
  undefined1 local_148 [256];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_158 = &UE::Core::Private::
               GAdderReserverVTableImpl<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
  ;
  local_150 = local_148;
  lVar5 = 0x10;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_3c = 0x10;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x10))(&this->field_0x28,&local_158);
  if (0 < local_40) {
    puVar4 = local_148;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    if ((*(longlong *)(puVar4 + 8) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Curves[0].CurveToEdit",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\CurveBase.cpp"
                           ,0x1c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_40 < 1) {
      local_170 = (longlong)local_40;
      local_178 = 0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar4 = local_148;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    (**(code **)(**(longlong **)(puVar4 + 8) + 0x68))(*(longlong **)(puVar4 + 8),param_1,param_2);
    uVar6 = 1;
    if (1 < local_40) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < local_40) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_170 = (longlong)local_40;
          local_178 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        puVar4 = local_148;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        if ((*(longlong *)(puVar4 + lVar5 + 8) == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Curves[i].CurveToEdit != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\CurveBase.cpp"
                               ,0x22,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar6 < local_40) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_170 = (longlong)local_40;
          local_178 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        puVar4 = local_148;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        (**(code **)(**(longlong **)(puVar4 + lVar5 + 8) + 0x68))
                  (*(longlong **)(puVar4 + lVar5 + 8),&local_168,local_164);
        uVar6 = uVar6 + 1;
        fVar7 = *param_1;
        if (local_168 <= *param_1) {
          fVar7 = local_168;
        }
        lVar5 = lVar5 + 0x10;
        *param_1 = fVar7;
        fVar7 = *param_2;
        if (*param_2 <= local_164[0]) {
          fVar7 = local_164[0];
        }
        *param_2 = fVar7;
      } while ((int)uVar6 < local_40);
    }
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetTimeRange @ 147a5aec0

void __thiscall UCurveBase::GetTimeRange(UCurveBase *this,double *param_1,double *param_2)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = (float)*param_1;
  local_res18[0] = (float)*param_2;
  GetTimeRange(this,local_res10,local_res18);
  *param_1 = (double)local_res10[0];
  *param_2 = (double)local_res18[0];
  return;
}

// GetValueRange @ 147a5ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCurveBase::GetValueRange(UCurveBase *this,float *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  float local_168;
  float local_164 [3];
  TAdderReserverVTable<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *local_158;
  undefined1 *local_150;
  undefined1 local_148 [256];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_158 = &UE::Core::Private::
               GAdderReserverVTableImpl<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
  ;
  local_150 = local_148;
  lVar5 = 0x10;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_3c = 0x10;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x10))(&this->field_0x28,&local_158);
  if (0 < local_40) {
    puVar4 = local_148;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    if ((*(longlong *)(puVar4 + 8) == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Curves[0].CurveToEdit",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\CurveBase.cpp"
                           ,0x39,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_40 < 1) {
      local_170 = (longlong)local_40;
      local_178 = 0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar4 = local_148;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    (**(code **)(**(longlong **)(puVar4 + 8) + 0x70))(*(longlong **)(puVar4 + 8),param_1,param_2);
    uVar6 = 1;
    if (1 < local_40) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < local_40) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_170 = (longlong)local_40;
          local_178 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        puVar4 = local_148;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        if ((*(longlong *)(puVar4 + lVar5 + 8) == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Curves[i].CurveToEdit != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\CurveBase.cpp"
                               ,0x3f,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar6 < local_40) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if (uVar3 == 0) {
          local_170 = (longlong)local_40;
          local_178 = (longlong)(int)uVar6;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        puVar4 = local_148;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        (**(code **)(**(longlong **)(puVar4 + lVar5 + 8) + 0x70))
                  (*(longlong **)(puVar4 + lVar5 + 8),&local_168,local_164);
        uVar6 = uVar6 + 1;
        fVar7 = *param_1;
        if (local_168 <= *param_1) {
          fVar7 = local_168;
        }
        lVar5 = lVar5 + 0x10;
        *param_1 = fVar7;
        fVar7 = *param_2;
        if (*param_2 <= local_164[0]) {
          fVar7 = local_164[0];
        }
        *param_2 = fVar7;
      } while ((int)uVar6 < local_40);
    }
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetValueRange @ 147a5bcf0

void __thiscall UCurveBase::GetValueRange(UCurveBase *this,double *param_1,double *param_2)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = (float)*param_1;
  local_res18[0] = (float)*param_2;
  GetValueRange(this,local_res10,local_res18);
  *param_1 = (double)local_res10[0];
  *param_2 = (double)local_res18[0];
  return;
}

// ImportFromJSONString @ 147a5c380

/* WARNING: Removing unreachable block (ram,0x000147a5c7ec) */
/* WARNING: Removing unreachable block (ram,0x000147a5c709) */

void __thiscall
UCurveBase::ImportFromJSONString
          (UCurveBase *this,FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedPtr<FJsonObject,1> local_88;
  StackState local_78;
  TSharedRef<FJsonObject,1> local_40;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_30;
  
  local_88.Object = (FJsonObject *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = TJsonStringReader<wchar_t>::Create(&local_30,param_1);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  local_78.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Identifier.Data.ArrayNum = 0;
  local_78.Identifier.Data.ArrayMax = 0;
  local_78.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Object.Object = (FJsonObject *)0x0;
  local_78.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78.Array.ArrayNum = 0;
  local_78.Array.ArrayMax = 0;
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_78,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_78,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_78.Array.AllocatorInstance.Data,
               local_78.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_78.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_78.Array.AllocatorInstance.Data);
    }
    if (local_78.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar5) &&
       (&(local_88.Object)->Values !=
        (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
         *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      MakeShared<FJsonObject,1>(&local_40);
      bVar5 = FJsonObjectConverter::UStructToJsonAttributes
                        (*(UStruct **)&this->field_0x10,this,&(local_40.Object)->Values,0,0,
                         (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                          *)0x0,None);
      if (bVar5) {
        pUVar3 = *(UStruct **)&this->field_0x10;
        if ((&(local_88.Object)->Values ==
             (TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FJsonObjectConverter::JsonAttributesToUStruct
                          (&(local_88.Object)->Values,pUVar3,this,0,0x20002000,true,(FText *)0x0,
                           (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                            *)0x0);
        if (!bVar5) {
          FJsonObjectConverter::JsonAttributesToUStruct
                    (&(local_40.Object)->Values,*(UStruct **)&this->field_0x10,this,0,0x20002000,
                     true,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
          ::FString::PrintfImpl(&local_a8,L"Failed to import JSON data. Check logs for details.");
          pFVar8 = (param_2->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar8 + (longlong)param_2->ArrayMax * 0x10))
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
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar8 = 0;
          *(FScriptContainerElement **)pFVar8 = local_a8.Data.AllocatorInstance.Data;
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar8 + 8) = local_a8.Data.ArrayNum;
          *(int *)(pFVar8 + 0xc) = local_a8.Data.ArrayMax;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_b8,L"Failed to backup existing data before import.");
        pFVar8 = (param_2->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(FScriptContainerElement **)pFVar8 = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar8 + 8) = local_b8.Data.ArrayNum;
        *(int *)(pFVar8 + 0xc) = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
      }
      goto LAB_147a5c7f4;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_78.Array.AllocatorInstance.Data,
               local_78.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_78.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_78.Array.AllocatorInstance.Data);
    }
    if (local_78.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Identifier.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_98,L"Failed to parse the JSON data. Error: %s");
  pFVar8 = (param_2->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 < pFVar8 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  *(FScriptContainerElement **)pFVar8 = local_98.Data.AllocatorInstance.Data;
  *(int *)(pFVar8 + 8) = local_98.Data.ArrayNum;
  *(int *)(pFVar8 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.SharedReferenceCount.ReferenceController = pTVar1;
LAB_147a5c7f4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// IsValidCurve @ 147a633f0

bool __thiscall
UCurveBase::IsValidCurve(UCurveBase *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  return false;
}

// MakeTransactional @ 147a64080

void __thiscall UCurveBase::MakeTransactional(UCurveBase *this)

{
  code *pcVar1;
  EObjectFlags EVar2;
  bool bVar3;
  EObjectFlags EVar4;
  
  EVar4 = *(EObjectFlags *)&this[-1].field_0x10 | RF_Transactional;
  EVar2 = *(EObjectFlags *)&this[-1].field_0x10 & RF_MirroredGarbage;
  if ((EVar2 != RF_NoFlags) &&
     ((*(EObjectFlags *)&this[-1].field_0x10 & EVar4 & RF_MirroredGarbage) != EVar2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x4b,
                       L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)&this[-1].field_0x8,EVar4);
  return;
}

// ModifyOwner @ 147a65080

void __thiscall UCurveBase::ModifyOwner(UCurveBase *this)

{
  return;
}

// OnCurveChanged @ 147a66730

void __thiscall
UCurveBase::OnCurveChanged
          (UCurveBase *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// RepointCurveOwner @ 147a82d30

bool __thiscall
UCurveBase::RepointCurveOwner
          (UCurveBase *this,FPackageReloadedEvent *param_1,FCurveOwnerInterface **param_2)

{
  bool bVar1;
  UObject *local_res8 [4];
  
  local_res8[0] = (UObject *)0x0;
  bVar1 = FPackageReloadedEvent::GetRepointedObjectInternal
                    (param_1,(UObject *)&this[-1].field_0x8,local_res8);
  if (local_res8[0] != (UObject *)0x0) {
    *param_2 = (FCurveOwnerInterface *)(local_res8[0] + 1);
    return bVar1;
  }
  *param_2 = (FCurveOwnerInterface *)0x0;
  return bVar1;
}

// ResetCurve @ 147a837f0

void __thiscall UCurveBase::ResetCurve(UCurveBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *local_18;
  int local_10;
  
  (**(code **)(*(longlong *)&this->field_0x28 + 8))(&this->field_0x28,&local_18);
  uVar5 = 0;
  if (0 < local_10) {
    lVar6 = 0;
    iVar4 = local_10;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar4 = local_10, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)(lVar6 + 8 + (longlong)local_18) != 0) {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(**(longlong **)(lVar6 + 8 + (longlong)local_18) + 0x78))();
        iVar4 = local_10;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < iVar4);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetOnCurveChangedIsInteractive @ 147a90700

void __thiscall UCurveBase::SetOnCurveChangedIsInteractive(UCurveBase *this,bool param_1)

{
  return;
}

// StaticRegisterNativesUCurveBase @ 147a974d0

void __cdecl UCurveBase::StaticRegisterNativesUCurveBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCurveBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTimeRange @ 147aa3220

void __cdecl UCurveBase::execGetTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar2 = local_res10;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetTimeRange((UCurveBase *)param_1,pfVar2,pfVar3);
  return;
}

// execGetValueRange @ 147aa3440

void __cdecl UCurveBase::execGetValueRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar2 = local_res10;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetValueRange((UCurveBase *)param_1,pfVar2,pfVar3);
  return;
}

