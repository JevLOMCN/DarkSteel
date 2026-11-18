// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 1488a37a0

UScriptStruct * __cdecl FAnimInstanceLocatorFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment,(UObject *)pUVar1,
                         L"AnimInstanceLocatorFragment");
  }
  return Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.OuterSingleton;
}

// ComputePriority @ 1488bae60

uint __cdecl FAnimInstanceLocatorFragment::ComputePriority(UObject *param_1,UObject *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return 1000;
    }
  }
  return 0;
}

// Initialize @ 1488cbaa0

FInitializeResult * __thiscall
FAnimInstanceLocatorFragment::Initialize
          (FAnimInstanceLocatorFragment *this,FInitializeResult *__return_storage_ptr__,
          FInitializeParams *param_1)

{
  int iVar1;
  UAnimInstance *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UAnimInstance *pUVar6;
  FInitializeResult *pFVar7;
  UObjectBaseUtility *this_00;
  FInitializeParams *local_res18 [2];
  USkeletalMeshComponent *local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  
  local_38 = (USkeletalMeshComponent *)param_1->Context;
  if (local_38 == (USkeletalMeshComponent *)0x0) {
LAB_1488cbb37:
    this_00 = (UObjectBaseUtility *)param_1->Object;
    if (this_00 == (UObjectBaseUtility *)0x0) {
LAB_1488cbb79:
      local_38 = (USkeletalMeshComponent *)param_1->Object;
      if (local_38 != (USkeletalMeshComponent *)0x0) {
        pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(local_38->_padding_ + 0x38)) &&
           (this_00 = (UObjectBaseUtility *)0x0,
           (longlong *)
           *(undefined1 **)(*(longlong *)(local_38->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) goto LAB_1488cbbaa;
      }
      local_38 = (USkeletalMeshComponent *)0x0;
      this_00 = (UObjectBaseUtility *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_1488cbb79;
      pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      local_38 = (USkeletalMeshComponent *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar5);
    }
LAB_1488cbbaa:
    if (local_38 == (USkeletalMeshComponent *)0x0) {
      local_res18[0] = param_1;
      bVar4 = `FAnimInstanceLocatorFragment::Initialize'::__l18::<lambda_1>::operator()(local_res18)
      ;
      if (!bVar4) {
        local_38 = (USkeletalMeshComponent *)0x0;
        uStack_30 = 2;
        goto LAB_1488cbc13;
      }
    }
    if (this_00 != (UObjectBaseUtility *)0x0) {
      USkeletalMeshComponent::GetPostProcessInstance(local_38);
    }
    this->Type = AnimInstance;
    if (local_38 == (USkeletalMeshComponent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRelativeToContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorInitializeResult.h"
                         ,0x28,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FInitializeResult *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(local_38->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(local_38->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_1488cbb37;
    pUVar2 = (UAnimInstance *)param_1->Object;
    if (pUVar2 == (UAnimInstance *)0x0) {
LAB_1488cbb2d:
      this->Type = AnimInstance;
    }
    else {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_1488cbb2d;
      pUVar6 = USkeletalMeshComponent::GetPostProcessInstance(local_38);
      if (pUVar2 != pUVar6) goto LAB_1488cbb2d;
      this->Type = PostProcessAnimInstance;
    }
  }
  uStack_30 = 1;
LAB_1488cbc13:
  __return_storage_ptr__->RelativeToContext = (UObject *)local_38;
  *(ulonglong *)&__return_storage_ptr__->Type = CONCAT71(uStack_2f,uStack_30);
  return __return_storage_ptr__;
}

// Resolve @ 1488db750

FResolveResult * __thiscall
FAnimInstanceLocatorFragment::Resolve
          (FAnimInstanceLocatorFragment *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  UClass *pUVar3;
  UAnimInstance *pUVar4;
  undefined1 local_res18;
  undefined7 uStack_f;
  
  this_00 = (USkeletalMeshComponent *)param_1->Context;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      if (this->Type == PostProcessAnimInstance) {
        pUVar4 = USkeletalMeshComponent::GetPostProcessInstance(this_00);
        (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar4;
        (__return_storage_ptr__->Value)._padding_ =
             CONCAT71(uStack_f,local_res18) & 0xfffffffffffffffc;
      }
      else {
        pUVar4 = USkeletalMeshComponent::GetAnimInstance(this_00);
        (__return_storage_ptr__->Value)._padding_ = (longlong)pUVar4;
        (__return_storage_ptr__->Value)._padding_ =
             CONCAT71(uStack_f,local_res18) & 0xfffffffffffffffc;
      }
      goto LAB_1488db7e2;
    }
  }
  plVar1 = &(__return_storage_ptr__->Value)._padding_;
  *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
  (__return_storage_ptr__->Value)._padding_ = 0;
LAB_1488db7e2:
  (__return_storage_ptr__->Value).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// ToString @ 1488e8030

void __thiscall
FAnimInstanceLocatorFragment::ToString
          (FAnimInstanceLocatorFragment *this,TStringBuilderBase<wchar_t> *param_1)

{
  void *pvVar1;
  
  if (this->Type == PostProcessAnimInstance) {
    if (param_1->End < param_1->CurPos + 0xc) {
      TStringBuilderBase<wchar_t>::Extend(param_1,0xc);
    }
    pvVar1 = FGenericPlatformString::Memcpy(param_1->CurPos,L"post_process",0x18);
    param_1->CurPos = (wchar_t *)((longlong)pvVar1 + 0x18);
  }
  return;
}

// TryParseString @ 1488e8a40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FParseStringResult * __thiscall
FAnimInstanceLocatorFragment::TryParseString
          (FAnimInstanceLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FParseStringResult *pFVar11;
  TRefCountPtr<ITextData> TVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 local_res18 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_138;
  FParseStringResult local_128;
  FText local_110;
  undefined8 local_100;
  FParseStringResult local_f8;
  undefined1 local_e0 [8];
  FTextFormat local_d8;
  FText local_c8;
  FFormatArgumentValue local_b8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FText local_78;
  FText local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FTextFormat local_38;
  
  local_res18[0] = 0;
  iVar14 = param_1->Size;
  if (iVar14 != 0) {
    local_58 = UE::UniversalObjectLocator::DefaultAnimInstance;
    iVar7 = 7;
    if (iVar14 < 7) {
      iVar7 = iVar14;
    }
    iVar7 = FGenericPlatformStricmp::Strnicmp
                      (param_1->DataPtr,UE::UniversalObjectLocator::DefaultAnimInstance.DataPtr,
                       (longlong)iVar7);
    if ((iVar7 != 0) || (iVar14 != 7)) {
      local_98 = UE::UniversalObjectLocator::PostProcessAnimInstance;
      iVar7 = 0xc;
      if (iVar14 < 0xc) {
        iVar7 = iVar14;
      }
      iVar7 = FGenericPlatformStricmp::Strnicmp
                        (param_1->DataPtr,
                         UE::UniversalObjectLocator::PostProcessAnimInstance.DataPtr,(longlong)iVar7
                        );
      if ((iVar7 == 0) && (iVar14 == 0xc)) {
        this->Type = AnimInstance;
        local_f8.ErrorMessage.TextData.Reference = (ITextData *)0x0;
        local_f8.ErrorMessage.Flags = 0;
        local_f8.ErrorMessage._12_4_ = 0;
        local_f8.NumCharsParsed = 0;
        local_f8.bSuccess = false;
        local_f8._21_3_ = 0;
        FText::FText(&local_f8.ErrorMessage);
        local_f8._21_3_ = local_f8._21_3_;
        local_f8.NumCharsParsed = 0;
        local_f8.bSuccess = true;
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,&local_f8);
        TVar12.Reference = local_f8.ErrorMessage.TextData.Reference;
      }
      else {
        local_128.ErrorMessage.TextData.Reference = (ITextData *)0x0;
        local_128.ErrorMessage.Flags = 0;
        local_128.ErrorMessage._12_4_ = 0;
        local_128.NumCharsParsed = 0;
        local_128.bSuccess = false;
        local_128._21_3_ = 0;
        FText::FText(&local_128.ErrorMessage);
        local_128._16_8_ = local_128._16_8_ & 0xffffff0000000000;
        if ((param_2->Flags & ErrorMessaging) == None) {
          pFVar8 = FText::FText(&local_78);
          bVar4 = false;
          bVar3 = false;
          bVar5 = true;
        }
        else {
          local_88.DataPtr = param_1->DataPtr;
          local_88.Size = param_1->Size;
          local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
          pFVar8 = FText::FromStringView(&local_48,&local_88);
          pFVar9 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"AnimInstanceLocatorFragment",
                              L"Error_InvalidAnimInstanceType",
                              L"Invalid anim instance type \'{0}\'.");
          pFVar10 = FTextFormat::FTextFormat(&local_38,pFVar9,Default);
          local_b8.Type = Text;
          FText::FText((FText *)&local_b8.TextValue,pFVar8);
          if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar11 = (FParseStringResult *)(*pcVar2)();
            return pFVar11;
          }
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_138.AllocatorInstance.Data,&local_b8,1);
          local_d8.TextFormatData.Object = (pFVar10->TextFormatData).Object;
          local_d8.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar10->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_c8,&local_d8,&local_138);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
          if ((FFormatArgumentValue *)local_138.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
          if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar10->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar1 = (pFVar8->TextData).Reference;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 0x10))();
          }
          pFVar8 = &local_c8;
          bVar4 = true;
          bVar3 = true;
          bVar5 = false;
        }
        bVar6 = FText::IsEmpty(pFVar8);
        TVar12.Reference = local_128.ErrorMessage.TextData.Reference;
        if (!bVar6) {
          pIVar1 = (pFVar8->TextData).Reference;
          if (local_128.ErrorMessage.TextData.Reference != pIVar1) {
            local_128.ErrorMessage.TextData.Reference = pIVar1;
            if (pIVar1 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
            }
            if (TVar12.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar12.Reference + 0x10))(TVar12.Reference);
            }
          }
          local_128.ErrorMessage.Flags = pFVar8->Flags;
        }
        local_128.bSuccess = false;
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,&local_128);
        if ((bVar5) && (local_78.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if ((bVar3) && (local_c8.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        TVar12.Reference = local_128.ErrorMessage.TextData.Reference;
        if ((bVar4) && (local_68.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          TVar12.Reference = local_128.ErrorMessage.TextData.Reference;
        }
      }
      goto LAB_1488e8dae;
    }
  }
  this->Type = AnimInstance;
  local_110.TextData.Reference = (ITextData *)0x0;
  local_110.Flags = 0;
  local_110._12_4_ = 0;
  local_100 = 0;
  FText::FText(&local_110);
  local_100 = CONCAT35((int3)((ulonglong)local_100 >> 0x28),0x100000000);
  (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_110.TextData.Reference;
  uVar13 = true;
  iVar14 = 0;
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 8))
              (local_110.TextData.Reference,local_e0);
    uVar13 = local_100._4_1_;
    iVar14 = (int)local_100;
  }
  (__return_storage_ptr__->ErrorMessage).Flags = local_110.Flags;
  __return_storage_ptr__->NumCharsParsed = iVar14;
  __return_storage_ptr__->bSuccess = (bool)uVar13;
  TVar12.Reference = local_110.TextData.Reference;
LAB_1488e8dae:
  if (TVar12.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar12.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 1505333c0

bool __thiscall
`FAnimInstanceLocatorFragment::Initialize'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2617305722462928800>);
  if (bVar2) {
    bVar4 = **(longlong **)this != 0;
    if (bVar4) {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2617305722462928800>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150533444;
    }
  }
  bVar2 = false;
LAB_150533444:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

