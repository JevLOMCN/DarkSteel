// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 8

// FComputeKernelShaderMapId @ 1494c4460

FComputeKernelShaderMapId * __thiscall
FComputeKernelShaderMapId::FComputeKernelShaderMapId
          (FComputeKernelShaderMapId *this,FComputeKernelShaderMapId *param_1)

{
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  int iVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  
  pTVar1 = &this->ShaderTypeDependencies;
  this->FeatureLevel = param_1->FeatureLevel;
  this->ShaderCodeHash = param_1->ShaderCodeHash;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  FVar5 = (param_1->ShaderTypeDependencies).AllocatorInstance;
  iVar3 = (param_1->ShaderTypeDependencies).ArrayNum;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  (this->ShaderTypeDependencies).ArrayNum = iVar3;
  piVar2 = &(this->ShaderTypeDependencies).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    FVar4 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar4 & 1) != 0) {
      FVar4 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar4 >> 0x18));
    }
    ConstructItems<FShaderTypeDependency,FShaderTypeDependency,int>
              ((void *)FVar4,(FShaderTypeDependency *)FVar5,iVar3);
  }
  this->LayoutParams = param_1->LayoutParams;
  return this;
}

// operator== @ 1494c6280

bool __thiscall
FComputeKernelShaderMapId::operator==
          (FComputeKernelShaderMapId *this,FComputeKernelShaderMapId *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((((this->ShaderCodeHash == param_1->ShaderCodeHash) &&
       (this->FeatureLevel == param_1->FeatureLevel)) &&
      (iVar9 = (this->ShaderTypeDependencies).ArrayNum,
      iVar9 == (param_1->ShaderTypeDependencies).ArrayNum)) &&
     (((this->LayoutParams).Flags == (param_1->LayoutParams).Flags &&
      ((this->LayoutParams).MaxFieldAlignment == (param_1->LayoutParams).MaxFieldAlignment)))) {
    uVar8 = 0;
    if (0 < iVar9) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < iVar9) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
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
        FVar7 = (this->ShaderTypeDependencies).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)&(this->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                  ((longlong)FVar7 >> 0x18));
        }
        plVar1 = (longlong *)(lVar10 + (longlong)FVar7);
        uVar6 = 0;
        if ((int)uVar8 < (param_1->ShaderTypeDependencies).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
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
        FVar7 = (param_1->ShaderTypeDependencies).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                  ((longlong)FVar7 >> 0x18));
        }
        lVar2 = lVar10 + (longlong)FVar7;
        if (((*plVar1 != *(longlong *)(lVar10 + (longlong)FVar7)) ||
            ((int)plVar1[1] != *(int *)(lVar2 + 8))) ||
           ((*(longlong *)((longlong)plVar1 + 0xc) != *(longlong *)(lVar2 + 0xc) ||
            ((*(longlong *)((longlong)plVar1 + 0x14) != *(longlong *)(lVar2 + 0x14) ||
             (*(int *)((longlong)plVar1 + 0x1c) != *(int *)(lVar2 + 0x1c))))))) goto LAB_1494c63ee;
        iVar9 = (this->ShaderTypeDependencies).ArrayNum;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x20;
      } while ((int)uVar8 < iVar9);
    }
    bVar4 = true;
  }
  else {
LAB_1494c63ee:
    bVar4 = false;
  }
  return bVar4;
}

// ContainsShaderType @ 1494caf30

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
FComputeKernelShaderMapId::ContainsShaderType(FComputeKernelShaderMapId *this,FShaderType *param_1)

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

// GetComputeKernelHash @ 1494cf250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FComputeKernelShaderMapId::GetComputeKernelHash(FComputeKernelShaderMapId *this,FSHAHash *param_1)

{
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSHA1::FSHA1(&local_a8);
  FSHA1::Update(&local_a8,(uchar *)&this->ShaderCodeHash,8);
  FSHA1::Update(&local_a8,(uchar *)this,4);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,param_1->Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// GetTypeLayout @ 1494d34e0

FTypeLayoutDesc * __thiscall
FComputeKernelShaderMapId::GetTypeLayout(FComputeKernelShaderMapId *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FComputeKernelS;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FComputeKernelShaderMapId,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 1494d3960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FComputeKernelShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LayoutParams";
  DAT_15527fcb2 = Freeze::FindFieldNameLength(L"LayoutParams");
  _DAT_15527fc90 = FPlatformTypeLayoutParameters::StaticGetTypeLayout();
  _DAT_15527fca8 = 0x20;
  _DAT_15527fca0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15527fcac = 1;
  _DAT_15527fcb0 = 0;
  _DAT_15527fc98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderTypeDependencies";
  DAT_15527fc82 = Freeze::FindFieldNameLength(L"ShaderTypeDependencies");
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
  _DAT_15527fc70 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15527fc60 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15527fc78 = 0x10;
  _DAT_15527fc7c = 1;
  _DAT_15527fc80 = 0;
  _DAT_15527fc68 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderCodeHash";
  DAT_15527fc52 = Freeze::FindFieldNameLength(L"ShaderCodeHash");
  if ((DAT_154f115af & 2) == 0) {
    DAT_154f115af = DAT_154f115af | 3;
    _DAT_154f115a0 = 8;
    _DAT_154f11550 = L"unsigned long long";
    _DAT_154f11568 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallWriteMemoryImage;
    _DAT_154f11570 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallUnfrozenCopy;
    _DAT_154f11578 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallAppendHash;
    _DAT_154f11580 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallGetTargetAlignment;
    _DAT_154f11588 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallToString;
    _DAT_154f11560 = TStaticGetTypeLayoutHelper<unsigned___int64>::CallDestroy;
    _DAT_154f115a8 = 8;
    DAT_154f115ac = 0;
    _DAT_154f115a4 = 8;
  }
  _DAT_15527fc40 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15527fc30 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned___int64>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15527fc48 = 8;
  _DAT_15527fc4c = 1;
  _DAT_15527fc50 = 0;
  _DAT_15527fc38 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "FeatureLevel";
  DAT_15527fc22 = Freeze::FindFieldNameLength(L"FeatureLevel");
  if ((DAT_15526637f & 2) == 0) {
    DAT_15526637f = DAT_15526637f | 3;
    _DAT_155266370 = 4;
    _DAT_155266320 = L"ERHIFeatureLevel::Type";
    _DAT_155266338 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage;
    _DAT_155266340 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy;
    _DAT_155266348 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash;
    _DAT_155266350 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment
    ;
    _DAT_155266358 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString;
    _DAT_155266330 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy;
    _DAT_155266378 = 4;
    DAT_15526637c = 0;
    _DAT_155266374 = 4;
  }
  _DAT_15527fc10 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15527fc00 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIFeatureLevel::Type>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_15527fc18 = 0;
  _DAT_15527fc1c = 1;
  _DAT_15527fc20 = 0;
  _DAT_15527fc08 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FComputeKernelShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 1494d4250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FComputeKernelShaderMapId::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x10));
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  return;
}

// StaticGetTypeLayout @ 1494d7d20

FTypeLayoutDesc * __cdecl FComputeKernelShaderMapId::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FComputeKernelS;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FComputeKernelShaderMapId,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

