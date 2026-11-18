// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 8

// FOpenColorIOShaderMapId @ 14d769100

FOpenColorIOShaderMapId * __thiscall
FOpenColorIOShaderMapId::FOpenColorIOShaderMapId
          (FOpenColorIOShaderMapId *this,FOpenColorIOShaderMapId *param_1)

{
  FMemoryImageString *pFVar1;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar2;
  int *piVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  
  pFVar1 = &this->ShaderCodeAndConfigHash;
  this->FeatureLevel = param_1->FeatureLevel;
  (pFVar1->Data).AllocatorInstance = (ForAnyElementType)0x0;
  FVar6 = (param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance;
  iVar4 = (param_1->ShaderCodeAndConfigHash).Data.ArrayNum;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
            ((longlong)FVar6 >> 0x18));
  }
  (this->ShaderCodeAndConfigHash).Data.ArrayNum = iVar4;
  piVar3 = &(this->ShaderCodeAndConfigHash).Data.ArrayMax;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar3);
    FVar5 = (pFVar1->Data).AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(pFVar1->Data).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    memcpy((void *)FVar5,(void *)FVar6,(longlong)iVar4 * 2);
  }
  (this->ShaderTypeDependencies).AllocatorInstance = (ForAnyElementType)0x0;
  FVar6 = (param_1->ShaderTypeDependencies).AllocatorInstance;
  pTVar2 = &this->ShaderTypeDependencies;
  iVar4 = (param_1->ShaderTypeDependencies).ArrayNum;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
            ((longlong)FVar6 >> 0x18));
  }
  (this->ShaderTypeDependencies).ArrayNum = iVar4;
  piVar3 = &(this->ShaderTypeDependencies).ArrayMax;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar3);
    FVar5 = pTVar2->AllocatorInstance;
    if (((ulonglong)FVar5 & 1) != 0) {
      FVar5 = (ForAnyElementType)
              ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
    }
    ConstructItems<FShaderTypeDependency,FShaderTypeDependency,int>
              ((void *)FVar5,(FShaderTypeDependency *)FVar6,iVar4);
  }
  this->LayoutParams = param_1->LayoutParams;
  return this;
}

// operator= @ 14d76a170

FOpenColorIOShaderMapId * __thiscall
FOpenColorIOShaderMapId::operator=(FOpenColorIOShaderMapId *this,FOpenColorIOShaderMapId *param_1)

{
  FMemoryImageString *pFVar1;
  FMemoryImageString *pFVar2;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar3;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  
  pFVar1 = &this->ShaderCodeAndConfigHash;
  this->FeatureLevel = param_1->FeatureLevel;
  pFVar2 = &param_1->ShaderCodeAndConfigHash;
  if (pFVar1 != pFVar2) {
    FVar9 = (pFVar2->Data).AllocatorInstance;
    piVar5 = &(this->ShaderCodeAndConfigHash).Data.ArrayMax;
    iVar6 = *piVar5;
    iVar7 = (param_1->ShaderCodeAndConfigHash).Data.ArrayNum;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pFVar2->Data).AllocatorInstance.field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    (this->ShaderCodeAndConfigHash).Data.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar6 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,iVar7,iVar6,(ForAnyElementType *)pFVar1,iVar7,piVar5);
      FVar8 = (pFVar1->Data).AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)
                ((longlong)&(pFVar1->Data).AllocatorInstance.field_0x0 + ((longlong)FVar8 >> 0x18));
      }
      if (iVar7 != 0) {
        memcpy((void *)FVar8,(void *)FVar9,(longlong)iVar7 * 2);
      }
    }
  }
  pTVar3 = &param_1->ShaderTypeDependencies;
  pTVar4 = &this->ShaderTypeDependencies;
  if (pTVar4 != pTVar3) {
    FVar9 = pTVar3->AllocatorInstance;
    piVar5 = &(this->ShaderTypeDependencies).ArrayMax;
    iVar6 = (param_1->ShaderTypeDependencies).ArrayNum;
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = (ForAnyElementType)
              ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
    }
    (this->ShaderTypeDependencies).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar5 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,8,iVar6,*piVar5,&pTVar4->AllocatorInstance,iVar6,piVar5);
      FVar8 = pTVar4->AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)
                ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
      }
      ConstructItems<FShaderTypeDependency,FShaderTypeDependency,int>
                ((void *)FVar8,(FShaderTypeDependency *)FVar9,iVar6);
    }
  }
  this->LayoutParams = param_1->LayoutParams;
  return this;
}

// operator== @ 14d76a2b0

bool __thiscall
FOpenColorIOShaderMapId::operator==(FOpenColorIOShaderMapId *this,FOpenColorIOShaderMapId *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  
  pwVar9 = L"";
  if ((param_1->ShaderCodeAndConfigHash).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance;
    if (((ulonglong)pwVar10 & 1) != 0) {
      pwVar10 = (wchar_t *)
                ((longlong)&(param_1->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
                ((longlong)pwVar10 >> 0x18));
    }
  }
  if (((this->ShaderCodeAndConfigHash).Data.ArrayNum != 0) &&
     (pwVar9 = *(wchar_t **)&(this->ShaderCodeAndConfigHash).Data.AllocatorInstance,
     ((ulonglong)pwVar9 & 1) != 0)) {
    pwVar9 = (wchar_t *)
             ((longlong)&(this->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
             ((longlong)pwVar9 >> 0x18));
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
  if ((((iVar6 == 0) && (this->FeatureLevel == param_1->FeatureLevel)) &&
      (iVar6 = (this->ShaderTypeDependencies).ArrayNum,
      iVar6 == (param_1->ShaderTypeDependencies).ArrayNum)) &&
     (((this->LayoutParams).Flags == (param_1->LayoutParams).Flags &&
      ((this->LayoutParams).MaxFieldAlignment == (param_1->LayoutParams).MaxFieldAlignment)))) {
    uVar11 = 0;
    if (0 < iVar6) {
      lVar12 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar6) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar8 = (this->ShaderTypeDependencies).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)&(this->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                  ((longlong)FVar8 >> 0x18));
        }
        plVar1 = (longlong *)(lVar12 + (longlong)FVar8);
        uVar7 = 0;
        if ((int)uVar11 < (param_1->ShaderTypeDependencies).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        FVar8 = (param_1->ShaderTypeDependencies).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                  ((longlong)FVar8 >> 0x18));
        }
        lVar2 = lVar12 + (longlong)FVar8;
        if (((*plVar1 != *(longlong *)(lVar12 + (longlong)FVar8)) ||
            ((int)plVar1[1] != *(int *)(lVar2 + 8))) ||
           ((*(longlong *)((longlong)plVar1 + 0xc) != *(longlong *)(lVar2 + 0xc) ||
            ((*(longlong *)((longlong)plVar1 + 0x14) != *(longlong *)(lVar2 + 0x14) ||
             (*(int *)((longlong)plVar1 + 0x1c) != *(int *)(lVar2 + 0x1c))))))) goto LAB_14d76a45b;
        iVar6 = (this->ShaderTypeDependencies).ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while ((int)uVar11 < iVar6);
    }
    bVar4 = true;
  }
  else {
LAB_14d76a45b:
    bVar4 = false;
  }
  return bVar4;
}

// ContainsShaderType @ 14d76e3f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOpenColorIOShaderMapId::ContainsShaderType(FOpenColorIOShaderMapId *this,FShaderType *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = (this->ShaderTypeDependencies).ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar8) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar5 = (this->ShaderTypeDependencies).AllocatorInstance;
      if (((ulonglong)FVar5 & 1) != 0) {
        FVar5 = (ForAnyElementType)
                ((longlong)&(this->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                ((longlong)FVar5 >> 0x18));
      }
      if (*(ulong64 *)(lVar7 + (longlong)FVar5) == (param_1->HashedName).Hash) {
        return true;
      }
      iVar8 = (this->ShaderTypeDependencies).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while ((int)uVar6 < iVar8);
  }
  return false;
}

// GetOpenColorIOHash @ 14d771510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOpenColorIOShaderMapId::GetOpenColorIOHash(FOpenColorIOShaderMapId *this,FSHAHash *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSHA1::FSHA1(&local_a8);
  iVar1 = (this->ShaderCodeAndConfigHash).Data.ArrayNum;
  uVar3 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar3 = 0;
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)&(this->ShaderCodeAndConfigHash).Data.AllocatorInstance;
    if (((ulonglong)pwVar2 & 1) != 0) {
      pwVar2 = (wchar_t *)
               ((longlong)&(this->ShaderCodeAndConfigHash).Data.AllocatorInstance.field_0x0 +
               ((longlong)pwVar2 >> 0x18));
    }
  }
  FSHA1::UpdateWithString(&local_a8,pwVar2,uVar3);
  FSHA1::Update(&local_a8,(uchar *)this,4);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,param_1->Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// GetTypeLayout @ 14d772da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FOpenColorIOShaderMapId::GetTypeLayout(FOpenColorIOShaderMapId *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FOpenColorIOSha;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FOpenColorIOShaderMapId,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LayoutParams";
    DAT_15536a612 = Freeze::FindFieldNameLength(L"LayoutParams");
    _DAT_15536a5f0 = FPlatformTypeLayoutParameters::StaticGetTypeLayout();
    DAT_15536a5f8 = ::TypeBuffer[0x10];
    DAT_15536a5f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a5f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a5f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a5f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a5f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a5f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a5f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a600 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a608 = 0x28;
    _DAT_15536a60c = 1;
    _DAT_15536a610 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypeDependencies";
    DAT_15536a5e2 = Freeze::FindFieldNameLength(L"ShaderTypeDependencies");
    if ((DAT_15526b69f & 2) == 0) {
      DAT_15526b69f = DAT_15526b69f | 3;
      _DAT_15526b690 = 0x10;
      _DAT_15526b640 = L"(TArray<T, AllocatorType>)";
      _DAT_15526b658 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallWriteMemoryImage;
      _DAT_15526b660 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallUnfrozenCopy;
      _DAT_15526b668 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallAppendHash;
      _DAT_15526b670 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_15526b678 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallToString;
      _DAT_15526b650 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallDestroy;
      _DAT_15526b698 = 8;
      DAT_15526b69c = 0;
      _DAT_15526b694 = 0x10;
    }
    _DAT_15536a5d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a5c0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15536a5c8 = ::TypeBuffer[0x10];
    DAT_15536a5c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a5c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a5c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a5c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a5c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a5c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a5c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a5d8 = 0x18;
    _DAT_15536a5dc = 1;
    _DAT_15536a5e0 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderCodeAndConfigHash";
    DAT_15536a5b2 = Freeze::FindFieldNameLength(L"ShaderCodeAndConfigHash");
    _DAT_15536a590 = FMemoryImageString::StaticGetTypeLayout();
    DAT_15536a598 = ::TypeBuffer[0x10];
    DAT_15536a598_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a598_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a598_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a598_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a598_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a598_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a598_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a5a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a5a8 = 8;
    _DAT_15536a5ac = 1;
    _DAT_15536a5b0 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FeatureLevel";
    DAT_15536a582 = Freeze::FindFieldNameLength(L"FeatureLevel");
    if ((DAT_15526637f & 2) == 0) {
      DAT_15526637f = DAT_15526637f | 3;
      _DAT_155266370 = 4;
      _DAT_155266320 = L"ERHIFeatureLevel::Type";
      _DAT_155266338 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage
      ;
      _DAT_155266340 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy;
      _DAT_155266348 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash;
      _DAT_155266350 =
           TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment;
      _DAT_155266358 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString;
      _DAT_155266330 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy;
      _DAT_155266378 = 4;
      DAT_15526637c = 0;
      _DAT_155266374 = 4;
    }
    _DAT_15536a570 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a560 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIFeatureLevel::Type>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15536a568 = ::TypeBuffer[0x10];
    DAT_15536a568_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a568_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a568_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a568_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a568_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a568_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a568_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a578 = 0;
    _DAT_15536a57c = 1;
    _DAT_15536a580 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 14d7733e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FOpenColorIOShaderMapId::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x18));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 8));
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  return;
}

// StaticGetTypeLayout @ 14d778080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FOpenColorIOShaderMapId::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '0';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FOpenColorIOSha;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FOpenColorIOShaderMapId,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LayoutParams";
    DAT_15536a612 = Freeze::FindFieldNameLength(L"LayoutParams");
    _DAT_15536a5f0 = FPlatformTypeLayoutParameters::StaticGetTypeLayout();
    DAT_15536a5f8 = ::TypeBuffer[0x10];
    DAT_15536a5f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a5f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a5f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a5f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a5f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a5f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a5f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a600 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a608 = 0x28;
    _DAT_15536a60c = 1;
    _DAT_15536a610 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypeDependencies";
    DAT_15536a5e2 = Freeze::FindFieldNameLength(L"ShaderTypeDependencies");
    if ((DAT_15526b69f & 2) == 0) {
      DAT_15526b69f = DAT_15526b69f | 3;
      _DAT_15526b690 = 0x10;
      _DAT_15526b640 = L"(TArray<T, AllocatorType>)";
      _DAT_15526b658 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallWriteMemoryImage;
      _DAT_15526b660 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallUnfrozenCopy;
      _DAT_15526b668 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallAppendHash;
      _DAT_15526b670 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_15526b678 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallToString;
      _DAT_15526b650 =
           TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
           CallDestroy;
      _DAT_15526b698 = 8;
      DAT_15526b69c = 0;
      _DAT_15526b694 = 0x10;
    }
    _DAT_15536a5d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a5c0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15536a5c8 = ::TypeBuffer[0x10];
    DAT_15536a5c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a5c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a5c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a5c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a5c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a5c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a5c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a5d8 = 0x18;
    _DAT_15536a5dc = 1;
    _DAT_15536a5e0 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderCodeAndConfigHash";
    DAT_15536a5b2 = Freeze::FindFieldNameLength(L"ShaderCodeAndConfigHash");
    _DAT_15536a590 = FMemoryImageString::StaticGetTypeLayout();
    DAT_15536a598 = ::TypeBuffer[0x10];
    DAT_15536a598_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a598_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a598_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a598_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a598_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a598_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a598_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a5a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a5a8 = 8;
    _DAT_15536a5ac = 1;
    _DAT_15536a5b0 = 0;
    `public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FeatureLevel";
    DAT_15536a582 = Freeze::FindFieldNameLength(L"FeatureLevel");
    if ((DAT_15526637f & 2) == 0) {
      DAT_15526637f = DAT_15526637f | 3;
      _DAT_155266370 = 4;
      _DAT_155266320 = L"ERHIFeatureLevel::Type";
      _DAT_155266338 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage
      ;
      _DAT_155266340 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy;
      _DAT_155266348 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash;
      _DAT_155266350 =
           TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment;
      _DAT_155266358 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString;
      _DAT_155266330 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy;
      _DAT_155266378 = 4;
      DAT_15526637c = 0;
      _DAT_155266374 = 4;
    }
    _DAT_15536a570 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15536a560 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIFeatureLevel::Type>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15536a568 = ::TypeBuffer[0x10];
    DAT_15536a568_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15536a568_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15536a568_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15536a568_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15536a568_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15536a568_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15536a568_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FOpenColorIOShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15536a578 = 0;
    _DAT_15536a57c = 1;
    _DAT_15536a580 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

