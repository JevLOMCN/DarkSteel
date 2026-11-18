// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 13

// StaticClass @ 14e2cedd0

UClass * __cdecl UPropertyValueSoftObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueSoftObject",
               &Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton,
               StaticRegisterNativesUPropertyValueSoftObject,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueSoftObject>,
               InternalVTableHelperCtorCaller<UPropertyValueSoftObject>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton;
}

// UPropertyValueSoftObject @ 14e2d4aa0

UPropertyValueSoftObject * __thiscall
UPropertyValueSoftObject::UPropertyValueSoftObject
          (UPropertyValueSoftObject *this,FVTableHelper *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueSoftObject__6B_;
  return this;
}

// UPropertyValueSoftObject @ 14e2d4ad0

UPropertyValueSoftObject * __thiscall
UPropertyValueSoftObject::UPropertyValueSoftObject
          (UPropertyValueSoftObject *this,FObjectInitializer *param_1)

{
  UPropertyValue::UPropertyValue((UPropertyValue *)this,param_1);
  *(undefined ***)this = &___7UPropertyValueSoftObject__6B_;
  return this;
}

// ~UPropertyValueSoftObject @ 14e2d5530

void __thiscall UPropertyValueSoftObject::~UPropertyValueSoftObject(UPropertyValueSoftObject *this)

{
  *(undefined ***)this = &___7UPropertyValueSoftObject__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  return;
}

// ApplyDataToResolvedObject @ 14e2d93f0

void __thiscall UPropertyValueSoftObject::ApplyDataToResolvedObject(UPropertyValueSoftObject *this)

{
  int iVar1;
  UVariantObjectBinding *this_00;
  longlong lVar2;
  FObjectPropertyBase *this_01;
  char cVar3;
  UClass *pUVar4;
  UObjectBase *this_02;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->field_0x130 != '\0') {
    cVar3 = (**(code **)(*(longlong *)this + 0x2b0))(this,0);
    if (cVar3 != '\0') {
      this_00 = *(UVariantObjectBinding **)&this->field_0x20;
      if (this_00 != (UVariantObjectBinding *)0x0) {
        pUVar4 = UVariantObjectBinding::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          this_02 = (UObjectBase *)UVariantObjectBinding::GetObject(this_00);
          if (this_02 != (UObjectBase *)0x0) {
            UObjectBase::AtomicallySetFlags(this_02,RF_Transactional);
          }
        }
      }
      lVar2 = *(longlong *)&this->field_0x80;
      if (lVar2 != 0) {
        pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          UObjectBase::AtomicallySetFlags(*(UObjectBase **)&this->field_0x80,RF_Transactional);
        }
      }
      if (*(longlong *)&this->field_0x90 == 0) {
        this_01 = *(FObjectPropertyBase **)&this->field_0x68;
        if ((this_01 != (FObjectPropertyBase *)0x0) &&
           ((*(uint *)(this_01->_padding_ + 0x18) >> 0x1d & 1) != 0)) {
          pTVar5 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
          FObjectPropertyBase::SetObjectPropertyValue
                    (this_01,*(void **)&this->field_0x88,
                     *(UObject **)(pTVar5->AllocatorInstance).Data);
        }
      }
      else {
        (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x78);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->field_0x28);
    }
  }
  return;
}

// ApplyViaFunctionSetter @ 14e2d9eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPropertyValueSoftObject::ApplyViaFunctionSetter(UPropertyValueSoftObject *this,UObject *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  FObjectPropertyBase *this_00;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FFeedbackContext *pFVar7;
  UObject *pUVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FFieldClass *pFVar13;
  longlong lVar14;
  FFieldClass *pFVar15;
  UClass *pUVar16;
  FName *this_01;
  ulonglong uVar17;
  FObjectPropertyBase *pFVar18;
  void *_Dst;
  ForAnyElementType FVar19;
  ulonglong _Size;
  wchar_t *pwVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  size_t _Size_00;
  void *_Dst_00;
  char cVar24;
  undefined1 auStack_148 [64];
  char local_108;
  FEditorScriptExecutionGuard local_107 [3];
  int local_104;
  TFieldIterator<FProperty> local_100;
  FFieldClass *local_e8;
  TFieldIterator<FProperty> local_e0;
  TFieldIterator<FProperty> local_c8;
  FString local_b0;
  TFieldIterator<FProperty> local_a0;
  FString local_88;
  UObject *local_78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_70;
  FName local_68;
  UObject *local_60;
  FString local_58;
  FString local_48;
  ulonglong local_38;
  
  puVar23 = auStack_148;
  local_38 = __security_cookie.value ^ (ulonglong)&local_108;
  _Dst_00 = (void *)0x0;
  local_60 = param_1;
  if (param_1 == (UObject *)0x0) {
    puVar23 = auStack_148;
    if (1 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      puVar23 = auStack_148;
    }
  }
  else {
    local_a0.Struct = *(UStruct **)&this->field_0x90;
    if (local_a0.Struct == (UStruct *)0x0) {
      puVar23 = auStack_148;
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        puVar23 = auStack_148;
      }
    }
    else {
      local_a0.Field = (local_a0.Struct)->ChildProperties;
      local_a0.InterfaceIndex = -1;
      local_a0.bIncludeSuper = true;
      local_a0.bIncludeDeprecated = true;
      local_a0.bIncludeInterface = false;
      TFieldIterator<FProperty>::IterateToNext(&local_a0);
      while ((local_a0.Field != (FField *)0x0 &&
             (((ulonglong)local_a0.Field[1].ClassPrivate & 0x480) == 0x80))) {
        local_a0.Field = (local_a0.Field)->Next;
        TFieldIterator<FProperty>::IterateToNext(&local_a0);
      }
      uVar1 = *(ushort *)(*(longlong *)&this->field_0x90 + 0xb6);
      _Size = (ulonglong)uVar1;
      if (uVar1 != 0) {
        uVar17 = _Size + 0x1e;
        if (uVar17 <= _Size + 0xf) {
          uVar17 = 0xffffffffffffff0;
        }
        puVar23 = auStack_148 + -(uVar17 & 0xfffffffffffffff0);
        _Dst_00 = (void *)((longlong)&local_100 + -(uVar17 & 0xfffffffffffffff0));
      }
      *(undefined8 *)(puVar23 + -8) = 0x14e2da042;
      memset(_Dst_00,0,_Size);
      local_e0.Struct = *(UStruct **)&this->field_0x90;
      if (local_e0.Struct == (UStruct *)0x0) {
        local_e0.Field = (FField *)0x0;
      }
      else {
        local_e0.Field = (local_e0.Struct)->ChildProperties;
      }
      local_e0.InterfaceIndex = -1;
      local_e0.bIncludeSuper = true;
      local_e0.bIncludeDeprecated = true;
      local_e0.bIncludeInterface = false;
      *(undefined8 *)(puVar23 + -8) = 0x14e2da07a;
      TFieldIterator<FProperty>::IterateToNext(&local_e0);
      pFVar6 = local_e0.Field;
      while ((local_e0.Field = pFVar6, pFVar6 != (FField *)0x0 &&
             ((char)pFVar6[1].ClassPrivate < '\0'))) {
        if (((ulonglong)pFVar6[1].ClassPrivate >> 9 & 1) == 0) {
          pcVar3 = *(code **)(pFVar6->_padding_ + 0x150);
          iVar12 = (int)pFVar6[1]._padding_;
          if (iVar12 < 1) {
            *(int *)(puVar23 + 0x28) = iVar12;
            *(undefined4 *)(puVar23 + 0x20) = 0;
            *(undefined8 *)(puVar23 + -8) = 0x14e2da0f0;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst_00 == (void *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da11b;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
          *(undefined8 *)(puVar23 + -8) = 0x14e2da131;
          (*pcVar3)(pFVar6,(longlong)iVar12 + (longlong)_Dst_00);
        }
        local_e0.Field = pFVar6->Next;
        *(undefined8 *)(puVar23 + -8) = 0x14e2da142;
        TFieldIterator<FProperty>::IterateToNext(&local_e0);
        pFVar6 = local_e0.Field;
      }
      cVar24 = '\0';
      local_108 = '\0';
      pcVar3 = *(code **)(*(longlong *)this + 0x2d8);
      *(undefined8 *)(puVar23 + -8) = 0x14e2da169;
      pFVar13 = (FFieldClass *)(*pcVar3)(this);
      pcVar3 = *(code **)(*(longlong *)this + 0x2f8);
      local_e8 = pFVar13;
      *(undefined8 *)(puVar23 + -8) = 0x14e2da17f;
      local_104 = (*pcVar3)(this);
      *(undefined8 *)(puVar23 + -8) = 0x14e2da18a;
      local_70 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
      local_78 = *(UObject **)(local_70->AllocatorInstance).Data;
      local_100.Struct = *(UStruct **)&this->field_0x90;
      if (local_100.Struct == (UStruct *)0x0) {
        local_100.Field = (FField *)0x0;
      }
      else {
        local_100.Field = (local_100.Struct)->ChildProperties;
      }
      local_100.InterfaceIndex = -1;
      local_100.bIncludeSuper = true;
      local_100.bIncludeDeprecated = true;
      local_100.bIncludeInterface = false;
      *(undefined8 *)(puVar23 + -8) = 0x14e2da1d6;
      TFieldIterator<FProperty>::IterateToNext(&local_100);
      this_00 = (FObjectPropertyBase *)local_100.Field;
      while (((local_100.Field = (FField *)this_00, this_00 != (FObjectPropertyBase *)0x0 &&
              ((char)this_00->_padding_ < '\0')) && ((this_00->_padding_ & 0x500U) == 0))) {
        *(undefined8 *)(puVar23 + -8) = 0x14e2da20d;
        bVar9 = IsThisNotNull(this_00,"FField::GetName");
        if (bVar9) {
          *(undefined8 *)(puVar23 + -8) = 0x14e2da21e;
          ::FName::ToString((FName *)&this_00->_padding_,&local_b0);
        }
        else {
          *(undefined8 *)(puVar23 + -8) = 0x14e2da230;
          ::FString::FString(&local_b0,L"None");
        }
        pwVar20 = L"";
        if (local_b0.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = local_b0.Data.ArrayNum + -1;
          pwVar20 = (wchar_t *)local_b0.Data.AllocatorInstance.Data;
        }
        *(undefined8 *)(puVar23 + -8) = 0x14e2da24b;
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar20);
        if (*(int *)&this->field_0xe8 != *(int *)&this->field_0x114) {
          puVar21 = &this->field_0x118;
          if (*(undefined1 **)&this->field_0x120 != (undefined1 *)0x0) {
            puVar21 = *(undefined1 **)&this->field_0x120;
          }
          iVar12 = *(int *)(puVar21 + (ulonglong)(*(int *)&this->field_0x128 - 1U & uVar10) * 4);
          FVar19.Data = local_b0.Data.AllocatorInstance.Data;
          iVar11 = local_b0.Data.ArrayNum;
          while (local_b0.Data.AllocatorInstance.Data = FVar19.Data, iVar12 != -1) {
            lVar14 = (longlong)iVar12 * 0x28;
            iVar2 = *(int *)(*(longlong *)&this->field_0xe0 + 8 + lVar14);
            if (iVar2 == iVar11) {
              if (1 < iVar2) {
                pwVar20 = *(wchar_t **)(*(longlong *)&this->field_0xe0 + lVar14);
                *(undefined8 *)(puVar23 + -8) = 0x14e2da2cb;
                iVar11 = FGenericPlatformStricmp::Stricmp(pwVar20,(wchar_t *)FVar19.Data);
                bVar9 = iVar11 == 0;
                iVar11 = local_b0.Data.ArrayNum;
                goto LAB_14e2da2d0;
              }
LAB_14e2da38a:
              if ((iVar12 != -1) &&
                 (lVar14 = *(longlong *)&this->field_0xe0 + (longlong)iVar12 * 0x28, lVar14 != 0)) {
                puVar22 = (undefined8 *)(lVar14 + 0x10);
                goto LAB_14e2da2ed;
              }
              break;
            }
            bVar9 = iVar2 + iVar11 == 1;
LAB_14e2da2d0:
            if (bVar9) goto LAB_14e2da38a;
            FVar19.Data = local_b0.Data.AllocatorInstance.Data;
            iVar12 = *(int *)(lVar14 + 0x20 + *(longlong *)&this->field_0xe0);
          }
        }
        puVar22 = (undefined8 *)0x0;
LAB_14e2da2ed:
        FVar19.Data = local_b0.Data.AllocatorInstance.Data;
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          *(undefined8 *)(puVar23 + -8) = 0x14e2da2fb;
          FMemory::Free(FVar19.Data);
        }
        pFVar7 = GWarn;
        if (puVar22 != (undefined8 *)0x0) {
          iVar12 = (int)this_00->_padding_;
          if (iVar12 < 1) {
            *(int *)(puVar23 + 0x28) = iVar12;
            *(undefined4 *)(puVar23 + 0x20) = 0;
            *(undefined8 *)(puVar23 + -8) = 0x14e2da33f;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst_00 == (void *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da36e;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = *(int *)((longlong)&this_00->_padding_ + 4);
          if (*(int *)(puVar22 + 1) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = (wchar_t *)*puVar22;
          }
          *(undefined8 *)(puVar23 + -8) = 0x14e2da3cb;
          bVar9 = FProperty::ValidateImportFlags((FProperty *)this_00,0,(FOutputDevice *)pFVar7);
          if ((bVar9) && (pwVar20 != (wchar_t *)0x0)) {
            lVar14 = this_00->_padding_;
            *(FFeedbackContext **)(puVar23 + 0x30) = pFVar7;
            *(undefined4 *)(puVar23 + 0x28) = 0x8000000;
            *(undefined8 *)(puVar23 + 0x20) = 0;
            pcVar3 = *(code **)(lVar14 + 0xe8);
            *(undefined8 *)(puVar23 + -8) = 0x14e2da3ff;
            lVar14 = (*pcVar3)(this_00,pwVar20,(longlong)iVar12 + (longlong)_Dst_00,0);
            pFVar13 = local_e8;
            if (lVar14 != 0) goto LAB_14e2da4b9;
          }
          pFVar13 = local_e8;
          if (1 < (byte)LogVariantContent._0_1_) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da441;
            bVar9 = IsThisNotNull(this_00,"FField::GetName");
            if (bVar9) {
              *(undefined8 *)(puVar23 + -8) = 0x14e2da455;
              ::FName::ToString((FName *)&this_00->_padding_,&local_88);
            }
            else {
              *(undefined8 *)(puVar23 + -8) = 0x14e2da46a;
              ::FString::FString(&local_88,L"None");
            }
            *(undefined8 *)(puVar23 + -8) = 0x14e2da492;
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
            FVar19.Data = local_88.Data.AllocatorInstance.Data;
            pFVar13 = local_e8;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(puVar23 + -8) = 0x14e2da4a3;
              FMemory::Free(FVar19.Data);
              pFVar13 = local_e8;
            }
          }
        }
LAB_14e2da4b9:
        if ((local_108 == '\0') && ((FFieldClass *)this_00->_padding_ == pFVar13)) {
          *(undefined8 *)(puVar23 + -8) = 0x14e2da4d2;
          pFVar15 = FStructProperty::StaticClass();
          pFVar5 = pFVar13;
          if (pFVar15->Id == CASTCLASS_None) {
            for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
              if (pFVar5 == pFVar15) {
                bVar9 = true;
                goto LAB_14e2da504;
              }
            }
            bVar9 = false;
          }
          else {
            bVar9 = (pFVar13->CastFlags & pFVar15->Id) != CASTCLASS_None;
          }
LAB_14e2da504:
          if (bVar9) {
            pcVar3 = *(code **)(*(longlong *)this + 0x2e0);
            *(undefined8 *)(puVar23 + -8) = 0x14e2da514;
            pUVar16 = (UClass *)(*pcVar3)(this);
            pFVar18 = (FObjectPropertyBase *)0x0;
            if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) {
              pFVar18 = this_00;
            }
            if (pUVar16 != (pFVar18->PropertyClass).field0_0x0.DebugPtr) goto LAB_14e2da602;
          }
          iVar12 = (int)this_00->_padding_;
          if (iVar12 < 1) {
            *(int *)(puVar23 + 0x28) = iVar12;
            *(undefined4 *)(puVar23 + 0x20) = 0;
            *(undefined8 *)(puVar23 + -8) = 0x14e2da56c;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst_00 == (void *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da597;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pUVar8 = local_78;
          _Dst = (void *)((longlong)*(int *)((longlong)&this_00->_padding_ + 4) + (longlong)_Dst_00)
          ;
          if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x1d & 1) == 0) ||
             (this_00 == (FObjectPropertyBase *)0x0)) {
            _Size_00 = (size_t)local_104;
            _Src = (local_70->AllocatorInstance).Data;
            *(undefined8 *)(puVar23 + -8) = 0x14e2da5f4;
            memcpy(_Dst,_Src,_Size_00);
            local_108 = '\x01';
          }
          else {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da5d1;
            FObjectPropertyBase::SetObjectPropertyValue(this_00,_Dst,pUVar8);
            local_108 = '\x01';
          }
        }
LAB_14e2da602:
        cVar24 = local_108;
        local_100.Field = (FField *)this_00->_padding_;
        *(undefined8 *)(puVar23 + -8) = 0x14e2da613;
        TFieldIterator<FProperty>::IterateToNext(&local_100);
        this_00 = (FObjectPropertyBase *)local_100.Field;
      }
      local_68 = *(FName *)(*(longlong *)&this->field_0x90 + 0x18);
      *(undefined8 *)(puVar23 + -8) = 0x14e2da645;
      ::FName::ToString(&local_68,&local_58);
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar19.Data = local_58.Data.AllocatorInstance.Data;
      }
      *(undefined8 *)(puVar23 + -8) = 0x14e2da663;
      iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"SetVisibility");
      if (((iVar12 == 0) && (*(short *)(*(longlong *)&this->field_0x90 + 0xb6) == 2)) &&
         (_Dst_00 != (void *)0x0)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        *(undefined8 *)(puVar23 + -8) = 0x14e2da694;
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        *(undefined1 *)((longlong)_Dst_00 + 1) = 1;
      }
      if (cVar24 == '\0') {
        if (1 < (byte)LogVariantContent._0_1_) {
          pcVar3 = *(code **)(*(longlong *)this + 0x2d8);
          *(undefined8 *)(puVar23 + -8) = 0x14e2da6e6;
          this_01 = (FName *)(*pcVar3)(this);
          *(undefined8 *)(puVar23 + -8) = 0x14e2da6f5;
          ::FName::ToString(this_01,&local_48);
          *(undefined8 *)(puVar23 + -8) = 0x14e2da71a;
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da72b;
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x14e2da6ac;
        FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_107);
        pUVar8 = local_60;
        uVar4 = *(undefined8 *)&this->field_0x90;
        pcVar3 = *(code **)(*(longlong *)local_60 + 0x260);
        *(undefined8 *)(puVar23 + -8) = 0x14e2da6c6;
        (*pcVar3)(pUVar8,uVar4,_Dst_00);
        *(undefined8 *)(puVar23 + -8) = 0x14e2da6cf;
        FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_107);
      }
      local_c8.Struct = *(UStruct **)&this->field_0x90;
      if (local_c8.Struct == (UStruct *)0x0) {
        local_c8.Field = (FField *)0x0;
      }
      else {
        local_c8.Field = (local_c8.Struct)->ChildProperties;
      }
      local_c8.InterfaceIndex = -1;
      local_c8.bIncludeSuper = true;
      local_c8.bIncludeDeprecated = true;
      local_c8.bIncludeInterface = false;
      *(undefined8 *)(puVar23 + -8) = 0x14e2da766;
      TFieldIterator<FProperty>::IterateToNext(&local_c8);
      pFVar6 = local_c8.Field;
      while ((pFVar6 != (FField *)0x0 && ((char)pFVar6[1].ClassPrivate < '\0'))) {
        if ((~(byte)((ulonglong)pFVar6[1].ClassPrivate >> 0x24) & 1) != 0) {
          pcVar3 = *(code **)(pFVar6->_padding_ + 0x138);
          iVar12 = (int)pFVar6[1]._padding_;
          local_c8.Field = pFVar6;
          if (iVar12 < 1) {
            *(int *)(puVar23 + 0x28) = iVar12;
            *(undefined4 *)(puVar23 + 0x20) = 0;
            *(undefined8 *)(puVar23 + -8) = 0x14e2da7c6;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst_00 == (void *)0x0) {
            *(undefined8 *)(puVar23 + -8) = 0x14e2da7f5;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
          *(undefined8 *)(puVar23 + -8) = 0x14e2da80b;
          (*pcVar3)(pFVar6,(longlong)iVar12 + (longlong)_Dst_00);
        }
        local_c8.Field = pFVar6->Next;
        *(undefined8 *)(puVar23 + -8) = 0x14e2da81c;
        TFieldIterator<FProperty>::IterateToNext(&local_c8);
        pFVar6 = local_c8.Field;
      }
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x14e2da838;
  return;
}

// GetDataFromResolvedObject @ 14e2dc810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValueSoftObject::GetDataFromResolvedObject
          (UPropertyValueSoftObject *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_res8;
  
  iVar3 = (**(code **)(*(longlong *)this + 0x2f8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,iVar3,Default);
  bVar2 = UPropertyValue::HasValidResolve((UPropertyValue *)this);
  if (((bVar2) && (plVar1 = *(longlong **)&this->field_0x68, plVar1 != (longlong *)0x0)) &&
     ((*(uint *)(plVar1[1] + 0x18) >> 0x1d & 1) != 0)) {
    local_res8 = (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)&this->field_0x88);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,&local_res8,(longlong)iVar3);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2de710

UClass * __cdecl UPropertyValueSoftObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueSoftObject",
               &Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton,
               StaticRegisterNativesUPropertyValueSoftObject,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyValueSoftObject>,
               InternalVTableHelperCtorCaller<UPropertyValueSoftObject>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton;
}

// GetPropertyClass @ 14e2deba0

FFieldClass * __thiscall UPropertyValueSoftObject::GetPropertyClass(UPropertyValueSoftObject *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FSoftObjectProperty",0x20000000,
                 CASTCLASS_FSoftObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,FSoftObjectProperty::Construct);
      atexit(`FSoftObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// GetValueSizeInBytes @ 14e2e00a0

int __thiscall UPropertyValueSoftObject::GetValueSizeInBytes(UPropertyValueSoftObject *this)

{
  return 8;
}

// IsRecordedDataCurrent @ 14e2e1050

bool __thiscall UPropertyValueSoftObject::IsRecordedDataCurrent(UPropertyValueSoftObject *this)

{
  char cVar1;
  int iVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  void *local_18;
  int local_10;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  if ((cVar1 == '\0') || (this->field_0x130 == '\0')) {
    return false;
  }
  pTVar3 = UPropertyValue::GetRecordedData((UPropertyValue *)this);
  (**(code **)(*(longlong *)this + 0x2c0))(this,&local_18);
  iVar2 = pTVar3->ArrayNum;
  if (iVar2 == local_10) {
    if (iVar2 != 0) {
      iVar2 = memcmp((pTVar3->AllocatorInstance).Data,local_18,(longlong)iVar2);
      if (iVar2 != 0) goto LAB_14e2e10bc;
    }
    bVar4 = true;
  }
  else {
LAB_14e2e10bc:
    bVar4 = false;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar4;
}

// SetRecordedData @ 14e2e6710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPropertyValueSoftObject::SetRecordedData
          (UPropertyValueSoftObject *this,uchar *param_1,int param_2,int param_3)

{
  if (param_2 == 8) {
    UPropertyValue::SetRecordedData((UPropertyValue *)this,param_1,8,param_3);
    return;
  }
  if (4 < (byte)LogVariantContent._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    return;
  }
  return;
}

// StaticRegisterNativesUPropertyValueSoftObject @ 14e2e70b0

void __cdecl UPropertyValueSoftObject::StaticRegisterNativesUPropertyValueSoftObject(void)

{
  return;
}

