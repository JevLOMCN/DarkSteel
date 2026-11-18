// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 7

// ~ILiveLinkSubject @ 14cfb6490

void __thiscall ILiveLinkSubject::~ILiveLinkSubject(ILiveLinkSubject *this)

{
  *this = (ILiveLinkSubject)&___7ILiveLinkSubject__6B_;
  return;
}

// EvaluateFrame @ 14cfb8310

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
ILiveLinkSubject::EvaluateFrame
          (ILiveLinkSubject *this,TSubclassOf<ULiveLinkRole> param_1,
          FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar6;
  UScriptStruct *pUVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  UClass *pUVar11;
  longlong lVar12;
  FLiveLinkSubjectKey *pFVar13;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar14;
  undefined8 uVar15;
  longlong *plVar16;
  UScriptStruct *pUVar17;
  void *pvVar18;
  void *pvVar19;
  FName FVar20;
  UScriptStruct *pUVar21;
  wchar_t *pwVar22;
  UScriptStruct *pUVar23;
  ForAnyElementType FVar24;
  UScriptStruct *local_res8;
  FName local_res20;
  FString local_a8;
  FString local_98;
  FString local_80;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  (**(code **)((longlong)*this + 0x30))(this,&local_res8);
  pUVar17 = local_res8;
  if ((local_res8 == (UScriptStruct *)0x0) ||
     (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_14cfb8a70:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_InvalidRole,"ILiveLinkSubject_InvalidRole");
      _Init_thread_footer(&::_TSS0);
    }
    lVar12 = (**(code **)((longlong)*this + 0x28))(this,local_50);
    ::FName::ToString((FName *)(lVar12 + 0x10),&local_98);
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar24.Data = local_98.Data.AllocatorInstance.Data;
    }
    pFVar13 = (FLiveLinkSubjectKey *)(**(code **)((longlong)*this + 0x28))(this,local_68);
    pwVar22 = L"Can\'t evaluate frame for \'%s\'. No role has been set.";
    FVar20 = NAME_InvalidRole;
  }
  else {
    iVar2 = (int)pUVar11->_padding_;
    if (((int)pUVar17->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((!bVar9) || (local_res8 == (UScriptStruct *)0x0)) goto LAB_14cfb8a70;
    lVar12 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar12 != 0) && (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 != (UClass *)0x0)) {
      iVar2 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar12 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        cVar8 = (**(code **)((longlong)*this + 0x40))(this);
        pUVar17 = local_res8;
        if (cVar8 == '\0') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            ::FName::FName(&NAME_HasValidFrameSnapshot,"ILiveLinkSubject_HasValidFrameSnapshot");
            _Init_thread_footer(&::_TSS2);
          }
          lVar12 = (**(code **)((longlong)*this + 0x28))(this,&local_80);
          ::FName::ToString((FName *)(lVar12 + 0x10),&local_a8);
          FVar24.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar24.Data = local_a8.Data.AllocatorInstance.Data;
          }
          pFVar13 = (FLiveLinkSubjectKey *)(**(code **)((longlong)*this + 0x28))(this,&local_98);
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Info,NAME_HasValidFrameSnapshot,pFVar13,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a7c290,
                     (wchar_t *)FVar24.Data);
          goto LAB_14cfb8af0;
        }
        pUVar21 = (UScriptStruct *)0x0;
        pUVar23 = pUVar21;
        if ((local_res8 != (UScriptStruct *)0x0) &&
           (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 != (UClass *)0x0)) {
          iVar2 = (int)pUVar11->_padding_;
          if (((int)pUVar17->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            pUVar23 = local_res8;
          }
        }
        lVar12 = *(longlong *)param_1.Class.field0_0x0;
        pUVar17 = pUVar21;
        if ((lVar12 != 0) && (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 != (UClass *)0x0)) {
          iVar2 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            pUVar17 = *(UScriptStruct **)param_1.Class.field0_0x0;
          }
        }
        pUVar7 = local_res8;
        if (pUVar23 != pUVar17) {
          if ((local_res8 == (UScriptStruct *)0x0) ||
             (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_14cfb8553:
            pUVar17 = pUVar21;
          }
          else {
            iVar2 = (int)pUVar11->_padding_;
            if (((int)pUVar7->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar11->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            pUVar17 = local_res8;
            if (!bVar9) goto LAB_14cfb8553;
          }
          lVar12 = *(longlong *)param_1.Class.field0_0x0;
          if ((lVar12 == 0) || (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_14cfb85bd:
            lVar12 = (**(code **)((longlong)*this + 0xb8))(this);
            pFVar14 = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)
                      (**(code **)((longlong)*this + 0xb8))(this);
            local_res20 = *(FName *)param_1.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FName)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_res20);
            }
            bVar9 = Translate(this,(TSubclassOf<ULiveLinkRole>)&local_res20,pFVar14,
                              (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)(lVar12 + 0x28),
                              param_2);
            if (bVar9) {
              return true;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              ::FName::FName(&NAME_CantTranslate,"ILiveLinkSubject_CantTranslate");
              _Init_thread_footer(&::_TSS3);
            }
            lVar12 = *(longlong *)param_1.Class.field0_0x0;
            pUVar17 = pUVar21;
            if ((lVar12 != 0) && (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 != (UClass *)0x0))
            {
              iVar2 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar12 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar11->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                pUVar17 = *(UScriptStruct **)param_1.Class.field0_0x0;
              }
            }
            lVar12 = pUVar17->_padding_;
            uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
            NAME_CantTranslate.Number = uVar10 + (int)((ulonglong)lVar12 >> 0x20);
            lVar12 = *(longlong *)param_1.Class.field0_0x0;
            if ((lVar12 != 0) && (pUVar11 = ULiveLinkRole::StaticClass(), pUVar11 != (UClass *)0x0))
            {
              iVar2 = (int)pUVar11->_padding_;
              if ((*(int *)(lVar12 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar11->_padding_)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                pUVar21 = *(UScriptStruct **)param_1.Class.field0_0x0;
              }
            }
            local_res20 = (FName)pUVar21->_padding_;
            ::FName::ToString(&local_res20,&local_98);
            lVar12 = (**(code **)((longlong)*this + 0x28))(this,local_68);
            ::FName::ToString((FName *)(lVar12 + 0x10),&local_a8);
            uVar15 = (**(code **)((longlong)*this + 0x28))(this,local_50);
            TVar6 = FLiveLinkLog::Instance;
            uVar5 = CONCAT44(NAME_CantTranslate.Number,NAME_CantTranslate.ComparisonIndex.Value);
            if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
              pcVar3 = *(code **)((longlong)*FLiveLinkLog::Instance.Ptr + 0x20);
              ::FString::PrintfImpl
                        (&local_80,
                         L"Can\'t evaluate frame for \'%s\'. The requested role is \'%s\' and no translators was able to translate it."
                        );
              (*pcVar3)(TVar6.Ptr,3,uVar5,uVar15,&local_80);
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
              return false;
            }
            return false;
          }
          iVar2 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if ((!bVar9) || (lVar12 = *(longlong *)param_1.Class.field0_0x0, lVar12 == 0))
          goto LAB_14cfb85bd;
          if (((int)pUVar17->_padding_ < *(int *)(lVar12 + 0x38)) ||
             (*(longlong *)(pUVar17->_padding_ + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
              lVar12 + 0x30)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_14cfb85bd;
        }
        plVar16 = (longlong *)(**(code **)((longlong)*this + 0xb8))(this);
        pUVar17 = (UScriptStruct *)(**(code **)(*plVar16 + 0x20))(plVar16);
        if (pUVar17 == (UScriptStruct *)0x0) {
LAB_14cfb8810:
          pUVar17 = pUVar21;
        }
        else {
          pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar2 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) goto LAB_14cfb8810;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res20,(FObjectPtr)&local_a8);
        FVar20 = local_res20;
        (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x40))(param_2);
        puVar4 = (undefined8 *)(param_2->StaticData).WrappedStruct._padding_;
        (param_2->StaticData).WrappedStruct.ScriptStruct.WeakPtr = (FWeakObjectPtr)FVar20;
        (*(code *)*puVar4)(param_2);
        lVar12 = (**(code **)(*plVar16 + 0x10))(plVar16);
        if (lVar12 != 0) {
          pUVar17 = (UScriptStruct *)
                    (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
          if (pUVar17 == (UScriptStruct *)0x0) {
LAB_14cfb88b4:
            pUVar17 = pUVar21;
          }
          else {
            pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar2 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar11->_padding_)) goto LAB_14cfb88b4;
          }
          pvVar18 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16);
          pvVar19 = (void *)(**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x18))
                                      (param_2);
          UScriptStruct::CopyScriptStruct(pUVar17,pvVar19,pvVar18,1);
        }
        pFVar1 = &param_2->FrameData;
        lVar12 = (**(code **)((longlong)*this + 0xb8))(this);
        plVar16 = (longlong *)(lVar12 + 0x28);
        pUVar17 = (UScriptStruct *)(**(code **)(*(longlong *)(lVar12 + 0x28) + 0x20))(plVar16);
        if (pUVar17 == (UScriptStruct *)0x0) {
LAB_14cfb892a:
          pUVar17 = pUVar21;
        }
        else {
          pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar2 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) goto LAB_14cfb892a;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res20,(FObjectPtr)&local_a8);
        FVar20 = local_res20;
        (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x40))(pFVar1);
        puVar4 = (undefined8 *)(pFVar1->WrappedStruct)._padding_;
        (param_2->FrameData).WrappedStruct.ScriptStruct.WeakPtr = (FWeakObjectPtr)FVar20;
        (*(code *)*puVar4)(pFVar1);
        lVar12 = (**(code **)(*plVar16 + 0x10))(plVar16);
        if (lVar12 == 0) {
          return true;
        }
        pUVar17 = (UScriptStruct *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
        if (pUVar17 != (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar2 = (int)pUVar11->_padding_;
          if ((iVar2 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar11->_padding_)) goto LAB_14cfb89d0;
        }
        pUVar17 = pUVar21;
LAB_14cfb89d0:
        pvVar18 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16);
        pvVar19 = (void *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
        UScriptStruct::CopyScriptStruct(pUVar17,pvVar19,pvVar18,1);
        return true;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&NAME_InvalidRequestedRole,"ILiveLinkSubject_InvalidRequestedRole");
      _Init_thread_footer(&::_TSS1);
    }
    lVar12 = (**(code **)((longlong)*this + 0x28))(this,local_50);
    ::FName::ToString((FName *)(lVar12 + 0x10),&local_98);
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar24.Data = local_98.Data.AllocatorInstance.Data;
    }
    pFVar13 = (FLiveLinkSubjectKey *)(**(code **)((longlong)*this + 0x28))(this,local_68);
    pwVar22 = L"Can\'t evaluate frame for \'%s\'. The requested role is invalid.";
    FVar20 = NAME_InvalidRequestedRole;
  }
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Warning,FVar20,pFVar13,(TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)pwVar22,
             (wchar_t *)FVar24.Data);
  local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
LAB_14cfb8af0:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return false;
}

// PreprocessFrame @ 14cfbe010

void __thiscall
ILiveLinkSubject::PreprocessFrame
          (ILiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  return;
}

// PreprocessFrame @ 14cfbe020

void __thiscall
ILiveLinkSubject::PreprocessFrame
          (ILiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  return;
}

// RemapFrame @ 14cfbe030

void __thiscall
ILiveLinkSubject::RemapFrame
          (ILiveLinkSubject *this,FLiveLinkSkeletonStaticData *param_1,
          FLiveLinkAnimationFrameData *param_2)

{
  return;
}

// SupportsRole @ 14cfbe390

bool __thiscall
ILiveLinkSubject::SupportsRole(ILiveLinkSubject *this,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  ILiveLinkFrameTranslatorWorker *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  UClass *pUVar8;
  longlong lVar9;
  longlong lVar10;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar11;
  longlong lVar12;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar13;
  undefined1 local_res8 [8];
  UObject *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *local_48;
  int local_40;
  
  plVar7 = (longlong *)(**(code **)((longlong)*this + 0x30))(this,local_res18);
  lVar10 = 0;
  lVar2 = *plVar7;
  lVar12 = lVar10;
  if ((lVar2 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar12 = *plVar7;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  lVar9 = lVar10;
  if ((lVar2 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar9 = *(longlong *)param_1.Class.field0_0x0;
    }
  }
  if (lVar12 != lVar9) {
    plVar7 = (longlong *)(**(code **)((longlong)*this + 0x30))(this,local_res20);
    lVar2 = *plVar7;
    if ((lVar2 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar10 = *plVar7;
      }
    }
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
        if ((*(int *)(lVar10 + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          return true;
        }
      }
    }
    (**(code **)((longlong)*this + 0x60))(this,&local_48);
    iVar1 = local_40;
    pTVar11 = local_48 + local_40;
    pTVar13 = local_48;
    while( true ) {
      if (local_40 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar13 == pTVar11) {
        DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_48,local_40);
        if (local_48 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
          FMemory::Free(local_48);
        }
        return false;
      }
      pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
      this_00 = pTVar13->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 == (ILiveLinkFrameTranslatorWorker *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Translator.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\ILiveLinkSubject.cpp"
                           ,0x3e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      local_res10 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      bVar5 = ILiveLinkFrameTranslatorWorker::CanTranslate
                        (this_00,(TSubclassOf<ULiveLinkRole>)&local_res10);
      if (bVar5) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pTVar13 = pTVar13 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return true;
}

// Translate @ 14cfbe650

bool __cdecl
ILiveLinkSubject::Translate
          (ILiveLinkSubject *param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_4,
          FLiveLinkSubjectFrameData *param_5)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ILiveLinkFrameTranslatorWorker *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  UClass *pUVar9;
  longlong lVar10;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar11;
  longlong lVar12;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar13;
  bool local_78;
  undefined1 local_77;
  undefined1 local_76 [6];
  UObject *local_70;
  undefined1 local_68 [8];
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *local_60;
  int local_58;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *local_50;
  int local_48;
  
  local_78 = false;
  (**(code **)((longlong)*param_1 + 0x60))(param_1,&local_60);
  iVar5 = local_58;
  pTVar13 = local_60 + local_58;
  pTVar11 = local_60;
  do {
    if (local_58 != iVar5) {
      local_77 = 0;
      `TCheckedPointerIterator<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_77);
    }
    if (pTVar11 == pTVar13) {
      bVar6 = false;
      goto LAB_14cfbe83a;
    }
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar3 == (ILiveLinkFrameTranslatorWorker *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Translator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\ILiveLinkSubject.cpp"
                         ,0x4f,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_68);
    lVar12 = *plVar8;
    if ((lVar12 == 0) || (pUVar9 = ULiveLinkRole::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14cfbe76c:
      lVar12 = 0;
    }
    else {
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar12 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14cfbe76c;
      lVar12 = *plVar8;
    }
    lVar10 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar10 == 0) || (pUVar9 = ULiveLinkRole::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14cfbe7ab:
      lVar10 = 0;
    }
    else {
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(lVar10 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14cfbe7ab;
      lVar10 = *(longlong *)param_2.Class.field0_0x0;
    }
    if (lVar12 == lVar10) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar11 = pTVar11 + 1;
  } while( true );
  if ((pIVar3 == (ILiveLinkFrameTranslatorWorker *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,param_3,param_4,param_5);
  bVar6 = true;
  local_78 = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14cfbe83a:
  DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_60,local_58);
  if (local_60 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
    FMemory::Free(local_60);
  }
  if (bVar6 == false) {
    (**(code **)((longlong)*param_1 + 0x60))(param_1,&local_50);
    iVar5 = local_48;
    pTVar13 = local_50 + local_48;
    pTVar11 = local_50;
    while( true ) {
      if (local_48 != iVar5) {
        local_76[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_76);
      }
      if (pTVar11 == pTVar13) goto LAB_14cfbe972;
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pIVar3 = pTVar11->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar3 == (ILiveLinkFrameTranslatorWorker *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_70 = *(UObject **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_70);
      }
      bVar6 = ILiveLinkFrameTranslatorWorker::CanTranslate
                        (pIVar3,(TSubclassOf<ULiveLinkRole>)&local_70);
      if (bVar6) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar11 = pTVar11 + 1;
    }
    if ((pIVar3 == (ILiveLinkFrameTranslatorWorker *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,param_3,param_4,param_5);
    local_78 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14cfbe972:
    DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(local_50,local_48);
    bVar6 = local_78;
    if (local_50 != (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)0x0) {
      FMemory::Free(local_50);
    }
  }
  return bVar6;
}

