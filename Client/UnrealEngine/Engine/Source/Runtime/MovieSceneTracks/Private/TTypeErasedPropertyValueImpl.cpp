// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 24

// Copy @ 146652690

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<unsigned_char>::Copy
          (TTypeErasedPropertyValueImpl<unsigned_char> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_E_Private_MovieScene_UE__6B_;
  (__return_storage_ptr__->Data).Pad[0x10] = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652780

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>::Copy
          (TTypeErasedPropertyValueImpl<double> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_N_Private_MovieScene_UE__6B_;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652870

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::Math::TRotator<double>_>::Copy
          (TTypeErasedPropertyValueImpl<UE::Math::TRotator<double>_> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_U__TRotator_N_Math_UE___Private_MovieScene_UE__6B_;
  dVar3 = (this->Value).Yaw;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = (this->Value).Pitch;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x18) = dVar3;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x20) = (this->Value).Roll;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652960

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FDoubleIntermediateVector>::
Copy(TTypeErasedPropertyValueImpl<UE::MovieScene::FDoubleIntermediateVector> *this,
    TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *__return_storage_ptr__
    )

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFDoubleIntermediateVector_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  dVar3 = (this->Value).Y;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = (this->Value).X;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x18) = dVar3;
  dVar3 = (this->Value).W;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x20) = (this->Value).Z;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x28) = dVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652a50

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FFloatIntermediateVector>::
Copy(TTypeErasedPropertyValueImpl<UE::MovieScene::FFloatIntermediateVector> *this,
    TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *__return_storage_ptr__
    )

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFFloatIntermediateVector_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  dVar3 = (this->Value).Y;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = (this->Value).X;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x18) = dVar3;
  dVar3 = (this->Value).W;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x20) = (this->Value).Z;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x28) = dVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652b40

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediate3DTransform>::
Copy(TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediate3DTransform> *this,
    TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *__return_storage_ptr__
    )

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar7;
  
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bInline = false;
  pTVar6 = FMemory::Malloc(0x58,8);
  __return_storage_ptr__->bIsValid = true;
  *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
   (__return_storage_ptr__->Data).Pad = pTVar6;
  if (__return_storage_ptr__->bInline) {
    pTVar6 = __return_storage_ptr__;
  }
  *(undefined ***)(pTVar6->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((pTVar6->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(pTVar6->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFIntermediate3DTransform_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  dVar4 = (this->Value).T_Y;
  *(double *)((pTVar6->Data).Pad + 0x10) = (this->Value).T_X;
  *(double *)((pTVar6->Data).Pad + 0x18) = dVar4;
  dVar4 = (this->Value).R_X;
  *(double *)((pTVar6->Data).Pad + 0x20) = (this->Value).T_Z;
  *(double *)((pTVar6->Data).Pad + 0x28) = dVar4;
  dVar4 = (this->Value).R_Z;
  *(double *)((pTVar6->Data).Pad + 0x30) = (this->Value).R_Y;
  *(double *)((pTVar6->Data).Pad + 0x38) = dVar4;
  dVar4 = (this->Value).S_Y;
  *(double *)&pTVar6->field_0x40 = (this->Value).S_X;
  *(double *)pTVar6[1].Data.Pad = dVar4;
  *(double *)(pTVar6[1].Data.Pad + 8) = (this->Value).S_Z;
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  pTVar7 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar7 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar6 != pTVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652c70

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateColor>::Copy
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateColor> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFIntermediateColor_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  dVar3 = (this->Value).G;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = (this->Value).R;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x18) = dVar3;
  dVar3 = (this->Value).A;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x20) = (this->Value).B;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x28) = dVar3;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652d60

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FObjectComponent>::Copy
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FObjectComponent> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &
       ___7__TTypeErasedPropertyValueImpl_UFObjectComponent_MovieScene_UE___Private_MovieScene_UE__6B_
  ;
  pUVar2 = (this->Value).ObjectPtr.field0_0x0.DebugPtr;
  *(UObject **)((__return_storage_ptr__->Data).Pad + 0x10) = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  *(FObjectKey *)((__return_storage_ptr__->Data).Pad + 0x18) = (this->Value).ObjectKey;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652e60

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FString>::Copy
          (TTypeErasedPropertyValueImpl<FString> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_VFString___Private_MovieScene_UE__6B_;
  ::FString::FString((FString *)((__return_storage_ptr__->Data).Pad + 0x10),&this->Value);
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146652f50

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FText>::Copy
          (TTypeErasedPropertyValueImpl<FText> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar6;
  undefined1 local_res8 [8];
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl_VFText___Private_MovieScene_UE__6B_;
  (__return_storage_ptr__->Data).Pad[0x10] = '\0';
  (__return_storage_ptr__->Data).Pad[0x11] = '\0';
  (__return_storage_ptr__->Data).Pad[0x12] = '\0';
  (__return_storage_ptr__->Data).Pad[0x13] = '\0';
  (__return_storage_ptr__->Data).Pad[0x14] = '\0';
  (__return_storage_ptr__->Data).Pad[0x15] = '\0';
  (__return_storage_ptr__->Data).Pad[0x16] = '\0';
  (__return_storage_ptr__->Data).Pad[0x17] = '\0';
  pIVar2 = (this->Value).TextData.Reference;
  *(ITextData **)((__return_storage_ptr__->Data).Pad + 0x10) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  *(uint *)((__return_storage_ptr__->Data).Pad + 0x18) = (this->Value).Flags;
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  pTVar6 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar6 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar5 != pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Copy @ 146653060

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<__int64>::Copy
          (TTypeErasedPropertyValueImpl<__int64> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl__J_Private_MovieScene_UE__6B_;
  *(long64 *)((__return_storage_ptr__->Data).Pad + 0x10) = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 146688620

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<unsigned_char>::Get
          (TTypeErasedPropertyValueImpl<unsigned_char> *this)

{
  return &this->Value;
}

// Get @ 146688630

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double>::Get
          (TTypeErasedPropertyValueImpl<double> *this)

{
  return &this->Value;
}

// Get @ 146688640

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::Math::TRotator<double>_>::Get
          (TTypeErasedPropertyValueImpl<UE::Math::TRotator<double>_> *this)

{
  return &this->Value;
}

// Get @ 146688650

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FDoubleIntermediateVector>::
Get(TTypeErasedPropertyValueImpl<UE::MovieScene::FDoubleIntermediateVector> *this)

{
  return &this->Value;
}

// Get @ 146688660

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FFloatIntermediateVector>::Get
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FFloatIntermediateVector> *this)

{
  return &this->Value;
}

// Get @ 146688670

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediate3DTransform>::Get
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediate3DTransform> *this)

{
  return &this->Value;
}

// Get @ 146688680

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateColor>::Get
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FIntermediateColor> *this)

{
  return &this->Value;
}

// Get @ 146688690

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<UE::MovieScene::FObjectComponent>::Get
          (TTypeErasedPropertyValueImpl<UE::MovieScene::FObjectComponent> *this)

{
  return &this->Value;
}

// Get @ 1466886a0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FString>::Get
          (TTypeErasedPropertyValueImpl<FString> *this)

{
  return &this->Value;
}

// Get @ 1466886b0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<FText>::Get
          (TTypeErasedPropertyValueImpl<FText> *this)

{
  return &this->Value;
}

// Get @ 1466886c0

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<__int64>::Get
          (TTypeErasedPropertyValueImpl<__int64> *this)

{
  return &this->Value;
}

// Copy @ 1468ad190

TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double_const_>::Copy
          (TTypeErasedPropertyValueImpl<double_const_> *this,
          TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7ITypeErasedPropertyConstValueImpl_Private_MovieScene_UE__6B_;
  *(int *)((__return_storage_ptr__->Data).Pad + 8) = (int)this->_padding_;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &___7__TTypeErasedPropertyValueImpl___CBN_Private_MovieScene_UE__6B_;
  *(double *)((__return_storage_ptr__->Data).Pad + 0x10) = this->Value;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyValueImpl,64,8> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1468b5610

void * __thiscall
UE::MovieScene::Private::TTypeErasedPropertyValueImpl<double_const_>::Get
          (TTypeErasedPropertyValueImpl<double_const_> *this)

{
  return &this->Value;
}

