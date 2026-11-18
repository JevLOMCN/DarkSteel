// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// FNiagaraVariable @ 148e547f0

FNiagaraVariable * __thiscall
FNiagaraVariable::FNiagaraVariable(FNiagaraVariable *this,FNiagaraVariable *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->VarData;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VarData).ArrayMax;
  iVar3 = (param_1->VarData).ArrayNum;
  _Src = (param_1->VarData).AllocatorInstance.Data;
  (this->VarData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// AllocateData @ 148e5b4f0

void __thiscall FNiagaraVariable::AllocateData(FNiagaraVariable *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(pFVar7);
  if ((this->VarData).ArrayNum != iVar4) {
    pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_)
    ;
    uVar5 = FNiagaraTypeDefinition::GetSize(pFVar7);
    iVar4 = (this->VarData).ArrayNum;
    if (iVar4 < (int)uVar5) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar5 - iVar4,&(this->VarData).AllocatorInstance,
                         &(this->VarData).ArrayNum,&(this->VarData).ArrayMax);
      memset((this->VarData).AllocatorInstance.Data + iVar6,0,(longlong)(int)(uVar5 - iVar4));
      return;
    }
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar4) {
      uVar8 = iVar4 - uVar5;
      if ((int)(uVar8 | uVar5) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar8 != 0) {
        _Dst = (this->VarData).AllocatorInstance.Data + (int)uVar5;
        iVar4 = ((this->VarData).ArrayNum - uVar8) - uVar5;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar4);
        }
        piVar1 = &(this->VarData).ArrayNum;
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&(this->VarData).AllocatorInstance,(this->VarData).ArrayNum,
                   &(this->VarData).ArrayMax);
      }
    }
  }
  return;
}

// SetValue<float> @ 149020b40

void __thiscall FNiagaraVariable::SetValue<float>(FNiagaraVariable *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AllocateData(this);
  memcpy((this->VarData).AllocatorInstance.Data,param_1,(longlong)(this->VarData).ArrayNum);
  return;
}

// SetValue<UE::Math::TVector2<float>_> @ 149020bc0

void __thiscall
FNiagaraVariable::SetValue<UE::Math::TVector2<float>_>
          (FNiagaraVariable *this,TVector2<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AllocateData(this);
  memcpy((this->VarData).AllocatorInstance.Data,param_1,(longlong)(this->VarData).ArrayNum);
  return;
}

// SetValue<UE::Math::TVector4<float>_> @ 149020c40

void __thiscall
FNiagaraVariable::SetValue<UE::Math::TVector4<float>_>
          (FNiagaraVariable *this,TVector4<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AllocateData(this);
  memcpy((this->VarData).AllocatorInstance.Data,param_1,(longlong)(this->VarData).ArrayNum);
  return;
}

// SetValue<UE::Math::TVector<float>_> @ 149020cc0

void __thiscall
FNiagaraVariable::SetValue<UE::Math::TVector<float>_>
          (FNiagaraVariable *this,TVector<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_00;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar3 != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AllocateData(this);
  memcpy((this->VarData).AllocatorInstance.Data,param_1,(longlong)(this->VarData).ArrayNum);
  return;
}

// SetValue<bool> @ 149020d40

void __thiscall FNiagaraVariable::SetValue<bool>(FNiagaraVariable *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  if (((TObjectPtr<UObject>_u_0)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr !=
       FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
     (pFVar3->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x67a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AllocateData(this);
  *(uint *)(this->VarData).AllocatorInstance.Data = -(uint)(*param_1 != false);
  return;
}

// FNiagaraVariable @ 149022e90

FNiagaraVariable * __thiscall FNiagaraVariable::FNiagaraVariable(FNiagaraVariable *this)

{
  int iVar1;
  
  this->_padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar1;
  (this->VarData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarData).ArrayNum = 0;
  (this->VarData).ArrayMax = 0;
  return this;
}

// SearchArrayForPartialNameMatch @ 149065000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FNiagaraVariable::SearchArrayForPartialNameMatch
          (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_1,FName *param_2)

{
  code *pcVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *_Str1;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_1128 [32];
  longlong local_1108;
  longlong local_1100;
  uint local_10f8;
  longlong local_10f0;
  FName local_10e8;
  FName local_10e0;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *local_10d8;
  TStringBuilderBase<wchar_t> local_10c8;
  wchar_t local_10a8 [1035];
  wchar_t local_892 [5];
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x149065022;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1128;
  local_10e8 = *param_2;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.End = local_52;
  local_10d8 = param_1;
  ::FName::AppendString(&local_10e8,&local_888);
  _Str1 = local_888.Base;
  iVar11 = -1;
  uVar12 = 0;
  iVar6 = param_1->ArrayNum;
  lVar9 = (longlong)local_888.CurPos - (longlong)local_888.Base;
  uVar13 = 0xffffffff;
  local_10f8 = 0xffffffff;
  if (0 < iVar6) {
    local_10f0 = 0;
    uVar13 = 0xffffffff;
    do {
      lVar2 = local_10f0;
      uVar5 = 0;
      if ((int)uVar12 < iVar6) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_1100 = (longlong)iVar6;
        local_1108 = (longlong)(int)uVar12;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
      }
      local_10e0 = *(FName *)((param_1->AllocatorInstance).Data + lVar2);
      local_10c8.Base = local_10a8;
      local_10c8.CurPos = local_10a8;
      local_10c8.End = local_892;
      local_10c8.bIsDynamic = false;
      local_10c8.bIsExternal = false;
      ::FName::AppendString(&local_10e0,&local_10c8);
      pwVar3 = local_10c8.Base;
      iVar6 = (int)((longlong)local_10c8.CurPos - (longlong)local_10c8.Base >> 1);
      iVar8 = (int)(lVar9 >> 1);
      if ((iVar8 == iVar6) &&
         ((((iVar8 == 0 || (iVar6 == 0)) ||
           (iVar7 = wcsncmp(_Str1,local_10c8.Base,(longlong)iVar6), iVar7 == 0)) && (iVar8 == iVar6)
          ))) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
        uVar13 = uVar12;
        break;
      }
      iVar7 = iVar11;
      uVar5 = local_10f8;
      if ((iVar6 < iVar8) && ((iVar11 == -1 || (iVar11 < iVar6)))) {
        iVar7 = iVar8;
        if (iVar6 < iVar8) {
          iVar7 = iVar6;
        }
        iVar10 = 0;
        if (0 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar6 == iVar10) {
          if ((iVar6 != 0) && (iVar10 != 0)) {
            iVar7 = iVar10;
            if (iVar6 < iVar10) {
              iVar7 = iVar6;
            }
            iVar7 = FGenericPlatformStricmp::Strnicmp(pwVar3,_Str1,(longlong)iVar7);
            if (iVar7 != 0) goto LAB_149065228;
          }
          if (iVar6 == iVar10) {
            if ((iVar6 < 0) || (iVar8 <= iVar6)) {
              local_1100 = CONCAT44(local_1100._4_4_,iVar8);
              local_1108 = CONCAT44(local_1108._4_4_,iVar6);
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                iVar6 = (*pcVar1)();
                return iVar6;
              }
            }
            iVar7 = iVar6;
            uVar5 = uVar12;
            uVar13 = uVar12;
            if (_Str1[iVar6] == L'.') goto LAB_14906522c;
          }
        }
LAB_149065228:
        iVar7 = iVar11;
        uVar5 = local_10f8;
        uVar13 = local_10f8;
      }
LAB_14906522c:
      local_10f8 = uVar5;
      iVar11 = iVar7;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10c8);
      uVar12 = uVar12 + 1;
      local_10f0 = local_10f0 + 0x20;
      iVar6 = local_10d8->ArrayNum;
      param_1 = local_10d8;
    } while ((int)uVar12 < iVar6);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return uVar13;
}

// operator= @ 14916b630

FNiagaraVariable * __thiscall
FNiagaraVariable::operator=(FNiagaraVariable *this,FNiagaraVariable *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->VarData;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  if (pTVar1 != &param_1->VarData) {
    iVar3 = (this->VarData).ArrayMax;
    piVar2 = &(this->VarData).ArrayMax;
    _Src = (param_1->VarData).AllocatorInstance.Data;
    iVar4 = (param_1->VarData).ArrayNum;
    (this->VarData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4);
      }
    }
  }
  return this;
}

// GetValue<float> @ 1492cd350

float __thiscall FNiagaraVariable::GetValue<float>(FNiagaraVariable *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeRegistry *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  float fVar6;
  float local_res8 [8];
  
  pFVar4 = FNiagaraTypeRegistry::Get();
  pFVar5 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,(int)this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar5);
  if (iVar3 != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  if (0 < (this->VarData).ArrayNum) {
    pFVar4 = FNiagaraTypeRegistry::Get();
    pFVar5 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,(int)this->_padding_);
    iVar3 = FNiagaraTypeDefinition::GetSize(pFVar5);
    if ((this->VarData).ArrayNum == iVar3) goto LAB_1492cd3e5;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDataAllocated()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                     ,0x5e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar6 = (float)(*pcVar1)();
    return fVar6;
  }
LAB_1492cd3e5:
  pFVar4 = FNiagaraTypeRegistry::Get();
  pFVar5 = FNiagaraTypeRegistry::GetRegisteredType(pFVar4,(int)this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar5);
  memcpy(local_res8,(this->VarData).AllocatorInstance.Data,(longlong)iVar3);
  return local_res8[0];
}

// operator= @ 1492d51e0

FNiagaraVariable * __thiscall
FNiagaraVariable::operator=(FNiagaraVariable *this,FNiagaraVariable *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->VarData;
  this->_padding_ = param_1->_padding_;
  pTVar2 = &this->VarData;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VarData).ArrayNum = (param_1->VarData).ArrayNum;
    (this->VarData).ArrayMax = (param_1->VarData).ArrayMax;
    (param_1->VarData).ArrayNum = 0;
    (param_1->VarData).ArrayMax = 0;
  }
  return this;
}

// Serialize @ 1493052e0

bool __thiscall FNiagaraVariable::Serialize(FNiagaraVariable *this,FArchive *param_1)

{
  int iVar1;
  UScriptStruct *this_00;
  FNiagaraTypeRegistry *pFVar2;
  FNiagaraTypeDefinition *pFVar3;
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  undefined8 local_1c;
  uint local_14;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) || (0x3f < iVar1)) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
    this_00 = FNiagaraTypeDefinition::StaticStruct();
    if ((param_1->field_0x28 & 4) == 0) {
      if ((param_1->field_0x28 & 1) != 0) {
        local_1c = 0xffffffffffffffff;
        local_28.DebugPtr = (UObject *)0x0;
        local_20 = 0;
        local_1e = '\0';
        local_14 = 0xffffffff;
        iVar1 = -1;
        UScriptStruct::SerializeItem(this_00,param_1,&local_28,(void *)0x0);
        if (local_28.DebugPtr != (UObject *)0x0) {
          pFVar2 = FNiagaraTypeRegistry::Get();
          iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal
                            (pFVar2,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
        }
        *(int *)&this->_padding_ = iVar1;
      }
    }
    else {
      pFVar2 = FNiagaraTypeRegistry::Get();
      pFVar3 = FNiagaraTypeRegistry::GetRegisteredType(pFVar2,(int)this->_padding_);
      local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_28.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28.DebugPtr);
      }
      local_20 = pFVar3->UnderlyingType;
      local_1e = pFVar3->Flags;
      local_1c._0_2_ = pFVar3->Size;
      local_1c._2_2_ = pFVar3->Alignment;
      local_1c._4_4_ = pFVar3->RegisteredTypeDefIndex;
      local_14 = pFVar3->UnderlyingTypePathNameHash;
      UScriptStruct::SerializeItem(this_00,param_1,&local_28,(void *)0x0);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (iVar1 < 0x40)) {
    return false;
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->VarData);
  return true;
}

// GetValue<UE::Math::TQuat<float>_> @ 14932b750

TQuat<float> * __thiscall
FNiagaraVariable::GetValue<UE::Math::TQuat<float>_>
          (FNiagaraVariable *this,TQuat<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *pFVar4;
  TQuat<float> *pTVar5;
  
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  if (iVar3 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0 < (this->VarData).ArrayNum) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_)
    ;
    iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
    if ((this->VarData).ArrayNum == iVar3) goto LAB_14932b7e3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDataAllocated()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                     ,0x5e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TQuat<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14932b7e3:
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  memcpy(__return_storage_ptr__,(this->VarData).AllocatorInstance.Data,(longlong)iVar3);
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector4<float>_> @ 14932b820

TVector4<float> * __thiscall
FNiagaraVariable::GetValue<UE::Math::TVector4<float>_>
          (FNiagaraVariable *this,TVector4<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *pFVar4;
  TVector4<float> *pTVar5;
  
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  if (iVar3 != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector4<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0 < (this->VarData).ArrayNum) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_)
    ;
    iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
    if ((this->VarData).ArrayNum == iVar3) goto LAB_14932b8b3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDataAllocated()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                     ,0x5e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector4<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14932b8b3:
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  memcpy(__return_storage_ptr__,(this->VarData).AllocatorInstance.Data,(longlong)iVar3);
  return __return_storage_ptr__;
}

// GetValue<UE::Math::TVector<float>_> @ 14932b900

TVector<float> * __thiscall
FNiagaraVariable::GetValue<UE::Math::TVector<float>_>
          (FNiagaraVariable *this,TVector<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *pFVar4;
  TVector<float> *pTVar5;
  
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  if (iVar3 != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0 < (this->VarData).ArrayNum) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_)
    ;
    iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
    if ((this->VarData).ArrayNum == iVar3) goto LAB_14932b993;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDataAllocated()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                     ,0x5e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TVector<float> *)(*pcVar1)();
    return pTVar5;
  }
LAB_14932b993:
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  memcpy(__return_storage_ptr__,(this->VarData).AllocatorInstance.Data,(longlong)iVar3);
  return __return_storage_ptr__;
}

// GetValue<FNiagaraPosition> @ 14932b9d0

FNiagaraPosition * __thiscall
FNiagaraVariable::GetValue<FNiagaraPosition>
          (FNiagaraVariable *this,FNiagaraPosition *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *pFVar4;
  FNiagaraPosition *pFVar5;
  
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  if (iVar3 != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraPosition *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (0 < (this->VarData).ArrayNum) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_)
    ;
    iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
    if ((this->VarData).ArrayNum == iVar3) goto LAB_14932ba63;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsDataAllocated()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                     ,0x5e4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNiagaraPosition *)(*pcVar1)();
    return pFVar5;
  }
LAB_14932ba63:
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&this->_padding_);
  iVar3 = FNiagaraTypeDefinition::GetSize(pFVar4);
  memcpy(__return_storage_ptr__,(this->VarData).AllocatorInstance.Data,(longlong)iVar3);
  return __return_storage_ptr__;
}

// ~FNiagaraVariable @ 14938a760

void __thiscall FNiagaraVariable::~FNiagaraVariable(FNiagaraVariable *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->VarData).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// StaticStruct @ 14940fdb0

UScriptStruct * __cdecl FNiagaraVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable,(UObject *)pUVar1,
                         L"NiagaraVariable");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariable.OuterSingleton;
}

