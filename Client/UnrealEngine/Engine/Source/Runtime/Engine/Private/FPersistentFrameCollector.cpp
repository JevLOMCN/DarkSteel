// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// HandleObjectReference @ 1476b6730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPersistentFrameCollector::HandleObjectReference
          (FPersistentFrameCollector *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  code *pcVar1;
  UObject *pUVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FProperty *local_res20;
  FString local_88;
  FString local_78;
  UObject **local_68;
  undefined1 *local_60;
  UObject **local_58;
  FProperty **local_50;
  FPersistentFrameCollector *local_48;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_2 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Referencer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                         ,0x956,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), pUVar2 = local_res18,
     !bVar3)) {
    uVar7 = 0;
    if (local_res18 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UFunction_NoRegister();
      iVar9 = (int)pUVar6->_padding_;
      if ((iVar9 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar6->_padding_)) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        uVar10 = *(int *)&pUVar2[2].field_0x8 + -1 + (int)*(short *)&pUVar2[2].field_0xc &
                 ~((int)*(short *)&pUVar2[2].field_0xc - 1U);
        ::FString::Reserve(&local_88,
                           ((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) + uVar10 * 2);
        uVar8 = uVar7;
        if (0 < (int)uVar10) {
          do {
            uVar5 = (uint)uVar8 & 0x8000001f;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
            }
            if (uVar5 == 0) {
              ::FString::AppendChars(&local_88,L"\n",1);
            }
            ::FString::PrintfImpl(&local_78,L"%02x ");
            if (local_78.Data.ArrayNum == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = local_78.Data.ArrayNum + -1;
            }
            ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            uVar7 = uVar7 + 1;
            uVar8 = (ulonglong)((uint)uVar8 + 1);
          } while ((longlong)uVar7 < (longlong)(int)uVar10);
        }
        if (4 < (byte)LogUObjectGlobals._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_virtual_void___cdecl_FPersistentFrameCollector::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                      ::__l21::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    local_60 = local_res10;
    local_58 = &local_res18;
    local_50 = &local_res20;
    local_68 = param_1;
    local_48 = this;
    bVar3 = `FPersistentFrameCollector::HandleObjectReference'::__l39::<lambda_2>::operator()
                      (&local_68);
    if (!bVar3) {
      *param_1 = (UObject *)0x0;
      return;
    }
  }
  if ((*param_1 != (UObject *)0x0) &&
     (((((*(uint *)&(*param_1)->field_0x8 >> 0x18 & 1) != 0 || (local_res20 == (FProperty *)0x0)) ||
       ((*(uint *)(local_res20->_padding_ + 0x18) >> 0x10 & 1) == 0)) ||
      (cVar4 = (**(code **)(this->InnerCollector->_padding_ + 0x68))
                         (this->InnerCollector,param_1,this->Blueprint), cVar4 == '\0')))) {
    (**(code **)(this->InnerCollector->_padding_ + 0x88))
              (this->InnerCollector,param_1,local_res18,local_res20);
  }
  return;
}

// HandleObjectReferences @ 1476b69c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPersistentFrameCollector::HandleObjectReferences
          (FPersistentFrameCollector *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  code *pcVar1;
  UObject *pUVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res18 [8];
  UObject *local_res20;
  FProperty *local_98;
  UObject *local_90;
  FString local_88;
  FString local_78;
  UObject **local_68;
  undefined1 *local_60;
  UObject **local_58;
  FProperty **local_50;
  FPersistentFrameCollector *local_48;
  
  if (0 < param_2) {
    if ((param_4 != (FProperty *)0x0) && ((*(uint *)(param_4->_padding_ + 0x18) >> 0x15 & 1) != 0))
    {
      param_4 = (FProperty *)param_4[1]._padding_;
    }
    lVar10 = (longlong)param_2;
    local_res20 = param_3;
    if (param_2 != 0) {
      do {
        uVar7 = 0;
        local_98 = param_4;
        local_90 = local_res20;
        if ((local_res20 == (UObject *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Referencer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                               ,0x956,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((UObjectBase *)*param_1 == (UObjectBase *)0x0) ||
           (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true),
           pUVar2 = local_90, bVar3)) {
LAB_1476b6bd4:
          if ((*param_1 != (UObject *)0x0) &&
             (((((*(uint *)&(*param_1)->field_0x8 >> 0x18 & 1) != 0 ||
                (local_98 == (FProperty *)0x0)) ||
               ((*(uint *)(local_98->_padding_ + 0x18) >> 0x10 & 1) == 0)) ||
              (cVar4 = (**(code **)(this->InnerCollector->_padding_ + 0x68))
                                 (this->InnerCollector,param_1,this->Blueprint), cVar4 == '\0')))) {
            (**(code **)(this->InnerCollector->_padding_ + 0x88))
                      (this->InnerCollector,param_1,local_90,local_98);
          }
        }
        else {
          if (local_90 != (UObject *)0x0) {
            pUVar6 = Z_Construct_UClass_UFunction_NoRegister();
            iVar9 = (int)pUVar6->_padding_;
            if ((iVar9 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
                &pUVar6->_padding_)) {
              local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.Data.ArrayNum = 0;
              local_88.Data.ArrayMax = 0;
              uVar8 = *(int *)&pUVar2[2].field_0x8 + -1 + (int)*(short *)&pUVar2[2].field_0xc &
                      ~((int)*(short *)&pUVar2[2].field_0xc - 1U);
              uVar5 = uVar8;
              if ((int)uVar8 < 0) {
                uVar5 = uVar8 + 0x1f;
              }
              ::FString::Reserve(&local_88,((int)uVar5 >> 5) + uVar8 * 2);
              if (0 < (int)uVar8) {
                do {
                  if ((uVar7 & 0x1f) == 0) {
                    ::FString::AppendChars(&local_88,L"\n",1);
                  }
                  ::FString::PrintfImpl(&local_78,L"%02x ");
                  if (local_78.Data.ArrayNum == 0) {
                    iVar9 = 0;
                  }
                  else {
                    iVar9 = local_78.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  uVar7 = uVar7 + 1;
                } while ((int)uVar7 < (int)uVar8);
              }
              if (4 < (byte)LogUObjectGlobals._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&`public:_virtual_void___cdecl_FPersistentFrameCollector::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                            ::__l21::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
          }
          local_60 = local_res18;
          local_58 = &local_90;
          local_50 = &local_98;
          local_68 = param_1;
          local_48 = this;
          bVar3 = `FPersistentFrameCollector::HandleObjectReference'::__l39::<lambda_2>::operator()
                            (&local_68);
          if (bVar3) goto LAB_1476b6bd4;
          *param_1 = (UObject *)0x0;
        }
        param_1 = param_1 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 1476ba9f0

bool __thiscall FPersistentFrameCollector::IsIgnoringArchetypeRef(FPersistentFrameCollector *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001476ba9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->InnerCollector->_padding_ + 0x40))();
  return (bool)uVar1;
}

// IsIgnoringTransient @ 1476baa10

bool __thiscall FPersistentFrameCollector::IsIgnoringTransient(FPersistentFrameCollector *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001476baa17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->InnerCollector->_padding_ + 0x40))();
  return (bool)uVar1;
}

// operator() @ 15050f550

bool __thiscall
`FPersistentFrameCollector::HandleObjectReference'::__l39::<lambda_2>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UObject *this_01;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4144715368457303670>);
  if (bVar5) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(*(longlong *)((longlong)this + 0x20) + 0x20),&local_28,
               (UObject *)0x0,None);
    FField::GetFullName((FField *)**(undefined8 **)((longlong)this + 0x18),&local_38);
    this_00 = (UObjectBaseUtility *)**(undefined8 **)((longlong)this + 0x10);
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    this_01 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar7);
    if (this_01 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"NULL");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4144715368457303670>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FPersistentFrameCollector::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'::`39'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15050f68e;
    }
  }
  bVar5 = false;
LAB_15050f68e:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

