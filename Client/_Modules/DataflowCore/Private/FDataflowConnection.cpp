// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 41

// StaticStruct @ 1443e2590

UScriptStruct * __cdecl FDataflowConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConnection.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConnection,(UObject *)pUVar1,
                         L"DataflowConnection");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowConnection.OuterSingleton;
}

// FixAndPropagateType @ 1443e25d0

void __thiscall FDataflowConnection::FixAndPropagateType(FDataflowConnection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3708378250603397293>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowConnection.h"
                     ,0xad,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetContainerIndex @ 1443e2ad0

int __thiscall FDataflowConnection::GetContainerIndex(FDataflowConnection *this)

{
  return -1;
}

// GetContainerElementOffset @ 1443e2ae0

uint __thiscall FDataflowConnection::GetContainerElementOffset(FDataflowConnection *this)

{
  return 0xffffffff;
}

// RealAddress @ 1443e2d90

void * __thiscall FDataflowConnection::RealAddress(FDataflowConnection *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (this->OwningNode == (FDataflowNode *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3708378250603397373>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowConnection.h"
                       ,0xfd,"OwningNode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  return (void *)((longlong)&this->OwningNode->_padding_ + (ulonglong)this->Offset);
}

// IsConnected @ 1443e2e30

bool __thiscall FDataflowConnection::IsConnected(FDataflowConnection *this)

{
  return false;
}

// AddConnection @ 1443e2e80

bool __thiscall
FDataflowConnection::AddConnection(FDataflowConnection *this,FDataflowConnection *param_1)

{
  return false;
}

// RemoveConnection @ 1443e2f60

bool __thiscall
FDataflowConnection::RemoveConnection(FDataflowConnection *this,FDataflowConnection *param_1)

{
  return false;
}

// GetConnections @ 1443e2fe0

void __thiscall
FDataflowConnection::GetConnections
          (FDataflowConnection *this,
          TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Invalidate @ 1443e3000

void __thiscall FDataflowConnection::Invalidate(FDataflowConnection *this,FTimestamp *param_1)

{
  return;
}

// IsType<FDataflowCurveSelection> @ 14441bf50

bool __thiscall FDataflowConnection::IsType<FDataflowCurveSelection>(FDataflowConnection *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"FDataflowCurveSelection");
  return this->Type == local_res8[0];
}

// IsType<FDataflowFaceSelection> @ 14441bf90

bool __thiscall FDataflowConnection::IsType<FDataflowFaceSelection>(FDataflowConnection *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"FDataflowFaceSelection");
  return this->Type == local_res8[0];
}

// IsType<FDataflowGeometrySelection> @ 14441bfd0

bool __thiscall FDataflowConnection::IsType<FDataflowGeometrySelection>(FDataflowConnection *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"FDataflowGeometrySelection");
  return this->Type == local_res8[0];
}

// IsType<FDataflowTransformSelection> @ 14441c010

bool __thiscall FDataflowConnection::IsType<FDataflowTransformSelection>(FDataflowConnection *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"FDataflowTransformSelection");
  return this->Type == local_res8[0];
}

// IsType<FDataflowVertexSelection> @ 14441c050

bool __thiscall FDataflowConnection::IsType<FDataflowVertexSelection>(FDataflowConnection *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"FDataflowVertexSelection");
  return this->Type == local_res8[0];
}

// FDataflowConnection @ 14442bea0

FDataflowConnection * __thiscall
FDataflowConnection::FDataflowConnection
          (FDataflowConnection *this,EDirection param_1,FConnectionParameters *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  FDataflowConnection *pFVar11;
  byte bVar12;
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  this->OwningNode = param_2->Owner;
  this->Property = param_2->Property;
  uVar2 = (param_2->Guid).A;
  uVar5 = (param_2->Guid).B;
  uVar6 = (param_2->Guid).C;
  uVar7 = (param_2->Guid).D;
  this->TypePolicy = (IDataflowTypePolicy *)0x0;
  (this->Guid).A = uVar2;
  (this->Guid).B = uVar5;
  (this->Guid).C = uVar6;
  (this->Guid).D = uVar7;
  uVar2 = param_2->Offset;
  this->bIsAnyType = false;
  this->bPinIsHidden = false;
  this->bCanHidePin = false;
  this->bHasConcreteType = false;
  this->Direction = param_1;
  this->Offset = uVar2;
  this->OriginalType = param_2->Type;
  (this->Type).ComparisonIndex = 0;
  (this->Type).Number = 0;
  FVar3 = param_2->Name;
  this->bLockType = false;
  this->Name = FVar3;
  (this->TypeDependencyGroup).ComparisonIndex = 0;
  (this->TypeDependencyGroup).Number = 0;
  pFVar10 = ::FName::ToString(&this->OriginalType,&local_28);
  iVar9 = ::FString::Find(pFVar10,L" ",1,IgnoreCase,FromStart,-1);
  if (iVar9 != -1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174731815>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0x27,"!OriginalType.ToString().Contains(L\" \")");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FDataflowConnection *)(*pcVar4)();
      return pFVar11;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::FName::ToString(&this->Type,&local_18);
  iVar9 = ::FString::Find(pFVar10,L" ",1,IgnoreCase,FromStart,-1);
  if (iVar9 != -1) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174731816>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0x28,"!Type.ToString().Contains(L\" \")");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FDataflowConnection *)(*pcVar4)();
      return pFVar11;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SetTypeInternal(this,param_2->Type);
  bVar8 = IsAnyType(&this->Type);
  bVar12 = this->field_0x35 & 0xfe | bVar8;
  this->field_0x35 = (~(bVar12 * '\x02') ^ bVar12) & 2 ^ bVar12;
  return this;
}

// FDataflowConnection @ 14442c040

FDataflowConnection * __thiscall
FDataflowConnection::FDataflowConnection
          (FDataflowConnection *this,EDirection param_1,FName param_2,FName param_3,
          FDataflowNode *param_4,FProperty *param_5,FGuid *param_6)

{
  undefined1 *puVar1;
  FDataflowNode *this_00;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FDataflowConnection *pFVar9;
  longlong *plVar10;
  UStruct *pUVar11;
  ForAnyElementType FVar12;
  byte bVar13;
  uint uVar14;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  this->bIsAnyType = false;
  this->bPinIsHidden = false;
  this->bCanHidePin = false;
  this->bHasConcreteType = false;
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  uVar14 = 0;
  this->OwningNode = param_4;
  this->Property = param_5;
  this->Direction = param_1;
  this->TypePolicy = (IDataflowTypePolicy *)0x0;
  this->OriginalType = param_2;
  uVar3 = param_6->B;
  uVar4 = param_6->C;
  uVar5 = param_6->D;
  (this->Guid).A = param_6->A;
  (this->Guid).B = uVar3;
  (this->Guid).C = uVar4;
  (this->Guid).D = uVar5;
  (this->Type).ComparisonIndex = 0;
  (this->Type).Number = 0;
  this->bLockType = false;
  this->Name = param_3;
  (this->TypeDependencyGroup).ComparisonIndex = 0;
  (this->TypeDependencyGroup).Number = 0;
  pFVar8 = ::FName::ToString(&this->OriginalType,&local_48);
  iVar7 = ::FString::Find(pFVar8,L" ",1,IgnoreCase,FromStart,-1);
  if ((iVar7 != -1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174731798>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0x16,"!OriginalType.ToString().Contains(L\" \")"), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FDataflowConnection *)(*pcVar2)();
    return pFVar9;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::ToString(&this->Type,&local_38);
  iVar7 = ::FString::Find(pFVar8,L" ",1,IgnoreCase,FromStart,-1);
  if ((iVar7 != -1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174731799>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0x17,"!Type.ToString().Contains(L\" \")"), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FDataflowConnection *)(*pcVar2)();
    return pFVar9;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = this->OwningNode;
  if (this_00 == (FDataflowNode *)0x0) {
    uVar14 = 0xffffffff;
  }
  else {
    plVar10 = (longlong *)(**(code **)(this_00->_padding_ + 0xb0))(this_00);
    if (plVar10 != (longlong *)0x0) {
      pUVar11 = (UStruct *)(**(code **)(*plVar10 + 0x20))(plVar10);
      if (pUVar11 != (UStruct *)0x0) {
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        FDataflowNode::FindProperty(this_00,pUVar11,&this->Name,&local_58);
        for (FVar12.Data = local_58.AllocatorInstance.Data;
            FVar12.Data != local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
            FVar12.Data = FVar12.Data + 8) {
          uVar14 = uVar14 + *(int *)(*(longlong *)FVar12.Data + 0x44);
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
      }
      (**(code **)(*plVar10 + 0x50))(plVar10,1);
    }
  }
  this->Offset = uVar14;
  SetTypeInternal(this,param_2);
  bVar6 = IsAnyType(&this->Type);
  bVar13 = this->field_0x35 & 0xfe | bVar6;
  this->field_0x35 = (~(bVar13 * '\x02') ^ bVar13) & 2 ^ bVar13;
  return this;
}

// ~FDataflowConnection @ 144433720

void __thiscall FDataflowConnection::~FDataflowConnection(FDataflowConnection *this)

{
  this->_padding_ = (longlong)&___7FDataflowConnection__6B_;
  return;
}

// FixAndPropagateType @ 144449340

void __thiscall FDataflowConnection::FixAndPropagateType(FDataflowConnection *this)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  int iVar5;
  FName FVar6;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this->Property == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0x10c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = this->Property;
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (pFVar1 != (FProperty *)0x0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,&local_18,&local_38,0);
    ::FString::RemoveSpacesInline(&local_38);
    ::FString::ConcatFF(&local_28,&local_18,&local_38);
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    pFVar4 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar6 = *pFVar4;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144449430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(this,FVar6);
  return;
}

// ForceSimpleType @ 144449810

void __thiscall FDataflowConnection::ForceSimpleType(FDataflowConnection *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *this_00;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  this_00 = ::FName::ToString(&this->Type,&local_18);
  pFVar4 = ::FName::ToString(local_res10,&local_28);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  bVar3 = ::FString::StartsWith(this_00,pwVar5,iVar6,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type.ToString().StartsWith(InType.ToString())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0x105,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SetTypeInternal(this,local_res10[0]);
  this->bHasConcreteType = true;
  return;
}

// ForceTypeDependencyGroup @ 1444498e0

void __thiscall
FDataflowConnection::ForceTypeDependencyGroup(FDataflowConnection *this,FName param_1)

{
  if (this->bIsAnyType) {
    this->TypeDependencyGroup = param_1;
  }
  return;
}

// GetOwningNodeGuid @ 14444c870

FGuid * __thiscall
FDataflowConnection::GetOwningNodeGuid(FDataflowConnection *this,FGuid *__return_storage_ptr__)

{
  FDataflowNode *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pFVar1 = this->OwningNode;
  if (pFVar1 != (FDataflowNode *)0x0) {
    uVar2 = (pFVar1->Guid).B;
    uVar3 = (pFVar1->Guid).C;
    uVar4 = (pFVar1->Guid).D;
    __return_storage_ptr__->A = (pFVar1->Guid).A;
    __return_storage_ptr__->B = uVar2;
    __return_storage_ptr__->C = uVar3;
    __return_storage_ptr__->D = uVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetOwningNodeTimestamp @ 14444c8c0

FTimestamp __thiscall FDataflowConnection::GetOwningNodeTimestamp(FDataflowConnection *this)

{
  ulong64 *in_RDX;
  
  if (this->OwningNode != (FDataflowNode *)0x0) {
    *in_RDX = (this->OwningNode->LastModifiedTimestamp).Value;
    return (FTimestamp)(ulong64)in_RDX;
  }
  *in_RDX = UE::Dataflow::FTimestamp::Invalid;
  return (FTimestamp)(ulong64)in_RDX;
}

// GetOwningNodeValueHash @ 14444c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FDataflowConnection::GetOwningNodeValueHash(FDataflowConnection *this)

{
  FDataflowNode *pFVar1;
  FProperty *this_00;
  uint uVar2;
  longlong *plVar3;
  UStruct *pUVar4;
  FFieldClass *pFVar5;
  TTuple<FProperty_const_*,void_const_*> *pTVar6;
  ICppStructOps *pIVar7;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator FStack_748;
  ulonglong uStack_20;
  
  pFVar1 = this->OwningNode;
  if (pFVar1 == (FDataflowNode *)0x0) {
    return 0;
  }
  uStack_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
  uVar9 = 0;
  plVar3 = (longlong *)(**(code **)(pFVar1->_padding_ + 0xb0))();
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = (UStruct *)(**(code **)(*plVar3 + 0x20))(plVar3);
    if (pUVar4 != (UStruct *)0x0) {
      pFVar5 = FProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&FStack_748,pFVar5,pUVar4,pFVar1,FullRecursion,IncludeDeprecated);
      while (0 < FStack_748.PropertyIteratorStack.ArrayNum) {
        pTVar6 = FPropertyValueIterator::operator->(&FStack_748);
        this_00 = *(FProperty **)pTVar6;
        if (this_00 != (FProperty *)0x0) {
          if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) &&
             (((UScriptStruct *)this_00[1]._padding_ == (UScriptStruct *)0x0 ||
              (pIVar7 = UScriptStruct::GetCppStructOps((UScriptStruct *)this_00[1]._padding_),
              pIVar7 == (ICppStructOps *)0x0)))) {
            FVar8 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&FStack_748;
            if (FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FVar8 = FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
            }
            DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                      ((FPropertyValueStackEntry *)FVar8,FStack_748.PropertyIteratorStack.ArrayNum);
            if (FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
                (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
              FMemory::Free((void *)FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData
                           );
            }
            (**(code **)(*plVar3 + 0x50))(plVar3,1);
            return 0;
          }
          if ((this_00->PropertyFlags & (CPF_TObjectPtr|CPF_HasGetValueTypeHash)) ==
              CPF_HasGetValueTypeHash) {
            pTVar6 = FPropertyValueIterator::operator->(&FStack_748);
            uVar2 = FProperty::GetValueTypeHash(this_00,*(void **)&pTVar6->field_0x8);
            uVar9 = uVar9 - uVar2 ^ uVar2 >> 0xd;
            uVar10 = (-0x61c88647 - uVar9) - uVar2 ^ uVar9 << 8;
            uVar2 = (uVar2 - uVar10) - uVar9 ^ uVar10 >> 0xd;
            uVar9 = (uVar9 - uVar2) - uVar10 ^ uVar2 >> 0xc;
            uVar10 = (uVar10 - uVar9) - uVar2 ^ uVar9 << 0x10;
            uVar2 = (uVar2 - uVar10) - uVar9 ^ uVar10 >> 5;
            uVar9 = (uVar9 - uVar2) - uVar10 ^ uVar2 >> 3;
            uVar10 = (uVar10 - uVar9) - uVar2 ^ uVar9 << 10;
            uVar9 = (uVar2 - uVar10) - uVar9 ^ uVar10 >> 0xf;
          }
        }
        FPropertyValueIterator::IterateToNext(&FStack_748);
      }
      FVar8 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&FStack_748;
      if (FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar8 = FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar8,FStack_748.PropertyIteratorStack.ArrayNum);
      if (FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)FStack_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
  }
  return uVar9;
}

// GetPropertyTooltip @ 14444df20

FString * __thiscall
FDataflowConnection::GetPropertyTooltip(FDataflowConnection *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPropertyTypeNameTooltip @ 14444df40

FString * __thiscall
FDataflowConnection::GetPropertyTypeNameTooltip
          (FDataflowConnection *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTypeNameFromProperty @ 14444e480

FName __cdecl FDataflowConnection::GetTypeNameFromProperty(FProperty *param_1)

{
  FName *pFVar1;
  int iVar2;
  longlong *in_RDX;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (in_RDX == (longlong *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    (**(code **)(*in_RDX + 0x68))();
    ::FString::RemoveSpacesInline(&local_38);
    ::FString::ConcatFF(&local_28,&local_18,&local_38);
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    pFVar1 = ::FName::FName(local_res10,iVar2,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    param_1->_padding_ = (longlong)*pFVar1;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
  }
  return (FName)param_1;
}

// InitFromType @ 1444504d0

void __thiscall FDataflowConnection::InitFromType(FDataflowConnection *this)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = IsAnyType(&this->Type);
  bVar2 = this->field_0x35 & 0xfe | bVar1;
  this->field_0x35 = (~(bVar2 * '\x02') ^ bVar2) & 2 ^ bVar2;
  return;
}

// IsAnyType @ 144450c40

bool __cdecl FDataflowConnection::IsAnyType(FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FAnyTypesRegistry *pFVar4;
  undefined1 *puVar5;
  
  FVar1 = *param_1;
  pFVar4 = UE::Dataflow::FAnyTypesRegistry::GetInstance();
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar4->TypeInfosByName).field_0x8 != *(int *)&(pFVar4->TypeInfosByName).field_0x34)
  {
    puVar5 = *(undefined1 **)&(pFVar4->TypeInfosByName).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar4->TypeInfosByName).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(pFVar4->TypeInfosByName).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&pFVar4->TypeInfosByName) == FVar1)
        goto LAB_144450cae;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&pFVar4->TypeInfosByName);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_144450cae:
  return iVar3 != -1;
}

// IsAnytypeDependencyConnected @ 144450d60

bool __thiscall FDataflowConnection::IsAnytypeDependencyConnected(FDataflowConnection *this)

{
  bool local_res8 [8];
  FDataflowConnection *local_res10;
  FName local_res18 [2];
  <lambda_1> local_28;
  
  if ((this->OwningNode != (FDataflowNode *)0x0) &&
     (local_res18[0] = this->TypeDependencyGroup, local_res18[0] != (FName)0x0)) {
    local_28.bIsAnyDependencyConnected = local_res8;
    local_res10 = (FDataflowConnection *)0x0;
    local_28.IgnoreConnection = &local_res10;
    local_res8[0] = false;
    local_28.DependencyGroup = local_res18;
    FDataflowNode::
    ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
              (this->OwningNode,&local_28);
    return local_res8[0];
  }
  return false;
}

// IsExtendedType @ 144451520

bool __thiscall FDataflowConnection::IsExtendedType(FDataflowConnection *this,FName param_1)

{
  ForAnyElementType FVar1;
  bool bVar2;
  FString *this_00;
  FString *pFVar3;
  int iVar4;
  FName local_res10 [3];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  this_00 = ::FName::ToString(local_res10,&local_18);
  ::FString::FString(&local_38,"<");
  pFVar3 = ::FName::ToString(&this->Type,&local_28);
  ::FString::ConcatFF(&local_48,pFVar3,&local_38);
  iVar4 = local_48.Data.ArrayNum + -1;
  FVar1.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(this_00,(wchar_t *)FVar1.Data,iVar4,IgnoreCase);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsOwningNodeEnabled @ 1444516d0

bool __thiscall FDataflowConnection::IsOwningNodeEnabled(FDataflowConnection *this)

{
  if (((this->OwningNode != (FDataflowNode *)0x0) && (this->OwningNode->bActive != false)) &&
     (bDataflowEnableGraphEval)) {
    return true;
  }
  return false;
}

// IsSafeToTryChangingType @ 1444517c0

bool __thiscall FDataflowConnection::IsSafeToTryChangingType(FDataflowConnection *this)

{
  char cVar1;
  bool local_res8 [8];
  FDataflowConnection *local_res10;
  FName local_res18 [2];
  <lambda_1> local_28;
  
  if ((this->bIsAnyType) && (!this->bLockType)) {
    cVar1 = (**(code **)(this->_padding_ + 0x28))();
    if (cVar1 == '\0') {
      if ((this->OwningNode != (FDataflowNode *)0x0) &&
         (local_res18[0] = this->TypeDependencyGroup, local_res18[0] != (FName)0x0)) {
        local_28.bIsAnyDependencyConnected = local_res8;
        local_res10 = (FDataflowConnection *)0x0;
        local_28.IgnoreConnection = &local_res10;
        local_28.DependencyGroup = local_res18;
        local_res8[0] = false;
        FDataflowNode::
        ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
                  (this->OwningNode,&local_28);
        return local_res8[0] == false;
      }
      return true;
    }
  }
  return false;
}

// Rename @ 14445e760

void __thiscall FDataflowConnection::Rename(FDataflowConnection *this,FName param_1)

{
  this->Name = param_1;
  return;
}

// ResetToOriginalType @ 14445ed20

bool __thiscall FDataflowConnection::ResetToOriginalType(FDataflowConnection *this)

{
  char cVar1;
  bool local_res8 [8];
  FDataflowConnection *local_res10;
  FName local_res18 [2];
  <lambda_1> local_28;
  
  if (!this->bIsAnyType) {
    return true;
  }
  if ((!this->bLockType) && (cVar1 = (**(code **)(this->_padding_ + 0x28))(), cVar1 == '\0')) {
    if ((this->OwningNode != (FDataflowNode *)0x0) && (this->TypeDependencyGroup != (FName)0x0)) {
      local_28.bIsAnyDependencyConnected = local_res8;
      local_res10 = (FDataflowConnection *)0x0;
      local_28.IgnoreConnection = &local_res10;
      local_28.DependencyGroup = local_res18;
      local_res8[0] = false;
      local_res18[0] = this->TypeDependencyGroup;
      FDataflowNode::
      ForEachConnection<_FDataflowNode::IsAnytypeDependencyConnected_::__l2::<lambda_1>_>
                (this->OwningNode,&local_28);
      if (local_res8[0] != false) {
        return false;
      }
    }
    SetTypeInternal(this,this->OriginalType);
    this->bHasConcreteType = false;
    return true;
  }
  return false;
}

// SetAsAnyType @ 1444636d0

void __thiscall
FDataflowConnection::SetAsAnyType(FDataflowConnection *this,bool param_1,FName *param_2)

{
  bool bVar1;
  
  this->bIsAnyType = false;
  this->field_0x35 = this->field_0x35 | param_1;
  if (param_1) {
    SetTypeInternal(this,*param_2);
    bVar1 = IsAnyType(param_2);
    this->bHasConcreteType = false;
    this->field_0x35 = this->field_0x35 | !bVar1 * '\x02';
  }
  return;
}

// SetConcreteType @ 144463720

bool __thiscall FDataflowConnection::SetConcreteType(FDataflowConnection *this,FName param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *this_00;
  FString *pFVar5;
  int iVar6;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->Type != param_1) {
    local_res8 = param_1;
    this_00 = ::FName::ToString(&local_res8,&local_18);
    ::FString::FString(&local_38,"<");
    pFVar5 = ::FName::ToString(&this->Type,&local_28);
    ::FString::ConcatFF(&local_48,pFVar5,&local_38);
    iVar6 = local_48.Data.ArrayNum + -1;
    FVar2.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = ::FString::StartsWith(this_00,(wchar_t *)FVar2.Data,iVar6,IgnoreCase);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      SetTypeInternal(this,param_1);
      this->bHasConcreteType = true;
      return true;
    }
    bVar3 = IsSafeToTryChangingType(this);
    if (bVar3) {
      bVar3 = SupportsType(this,param_1);
      if (bVar3) {
        SetTypeInternal(this,param_1);
        this->bHasConcreteType = true;
        return true;
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732015>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xef,"SupportsType(InType)");
      if (bVar3) goto code_r0x0001444638a7;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1810835547174732013>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                         ,0xed,"IsSafeToTryChangingType()");
      if (bVar3) {
code_r0x0001444638a7:
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

// SetTypeDependencyGroup @ 144464f20

FDataflowConnection * __thiscall
FDataflowConnection::SetTypeDependencyGroup(FDataflowConnection *this,FName param_1)

{
  if (this->bIsAnyType == true && !this->bHasConcreteType) {
    this->TypeDependencyGroup = param_1;
  }
  return this;
}

// SetTypeInternal @ 144464f40

void __thiscall FDataflowConnection::SetTypeInternal(FDataflowConnection *this,FName param_1)

{
  FName *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *this_01;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  this_00 = &this->Type;
  local_res10 = param_1;
  if (*this_00 != param_1) {
    ::FName::ToString(&local_res10,&local_28);
    iVar3 = ::FString::Find(&local_28,L" ",1,IgnoreCase,FromStart,-1);
    if (iVar3 == -1) {
      *this_00 = local_res10;
    }
    else {
      ::FString::RemoveSpacesInline(&local_28);
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      pFVar4 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                              FNAME_Add);
      *this_00 = *pFVar4;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this_01 = ::FName::ToString(this_00,&local_18);
  iVar3 = ::FString::Find(this_01,L" ",1,IgnoreCase,FromStart,-1);
  if (iVar3 != -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174731895>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0x77,"!Type.ToString().Contains(L\" \")");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTypePolicy @ 144465070

void __thiscall
FDataflowConnection::SetTypePolicy(FDataflowConnection *this,IDataflowTypePolicy *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->TypePolicy == (IDataflowTypePolicy *)0x0) {
    this->TypePolicy = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SupportsType @ 1444662d0

bool __thiscall FDataflowConnection::SupportsType(FDataflowConnection *this,FName param_1)

{
  IDataflowTypePolicy *pIVar1;
  bool bVar2;
  undefined1 uVar3;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  bVar2 = IsAnyType(local_res10);
  if (bVar2) {
    return false;
  }
  if (this->bIsAnyType) {
    pIVar1 = this->TypePolicy;
    if (pIVar1 != (IDataflowTypePolicy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014446631f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*pIVar1)(pIVar1,param_1);
      return (bool)uVar3;
    }
    return true;
  }
  return param_1 == this->Type;
}

