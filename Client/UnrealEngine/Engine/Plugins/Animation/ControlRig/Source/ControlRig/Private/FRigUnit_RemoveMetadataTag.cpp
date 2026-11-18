// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4eedb0

UScriptStruct * __cdecl FRigUnit_RemoveMetadataTag::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RemoveMetadataTag.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RemoveMetadataTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag,(UObject *)pUVar1,
                         L"RigUnit_RemoveMetadataTag");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_RemoveMetadataTag.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RemoveMetadataTag.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4eeef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_RemoveMetadataTag::GetExecuteContextStruct(FRigUnit_RemoveMetadataTag *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4ef880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_RemoveMetadataTag::Execute(FRigUnit_RemoveMetadataTag *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Tag,this->NameSpace,
                &this->Removed,&this->CachedIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52bf20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RemoveMetadataTag::Execute
          (FRigUnit_RemoveMetadataTag *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Tag,this->NameSpace,&this->Removed,&this->CachedIndex);
  return;
}

// RigVMExecute @ 14a54eea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RemoveMetadataTag::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigMetaDataNameSpace EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  FName *pFVar6;
  ERigMetaDataNameSpace *pEVar7;
  FRigVMMemoryHandle *pFVar8;
  bool *pbVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar7 = pFVar8[2].Ptr;
  }
  else {
    pEVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  EVar1 = *pEVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,pFVar6,EVar1,pbVar9,pFVar11);
  return;
}

// StaticExecute @ 14a58bb20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RemoveMetadataTag::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FName *param_3,
          ERigMetaDataNameSpace param_4,bool *param_5,FCachedRigElement *param_6)

{
  URigHierarchy *this;
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRigBaseElement *this_00;
  FRigBaseMetadata *pFVar5;
  FName FVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FName local_48;
  FName local_40;
  FRigBaseElement *local_38;
  
  *param_5 = false;
  this = param_1->Hierarchy;
  if ((this != (URigHierarchy *)0x0) &&
     (bVar3 = FCachedRigElement::UpdateCache(param_6,param_2,this), bVar3)) {
    uVar4 = 0xffffffff;
    if (param_6->Index != 0xffff) {
      uVar4 = (uint)param_6->Index;
    }
    this_00 = URigHierarchy::Get(this,uVar4);
    if (this_00 != (FRigBaseElement *)0x0) {
      local_38 = this_00;
      FLazyName::Resolve(&URigHierarchy::TagMetadataName);
      pFVar5 = FRigBaseElement::GetMetadata(this_00,&local_40,NameArray);
      if ((pFVar5 != (FRigBaseMetadata *)0x0) && (pFVar5->Type == NameArray)) {
        FControlRigExecuteContext::AdaptMetadataName
                  (param_1,(ERigMetaDataNameSpace)&local_48,(FName *)(ulonglong)param_4);
        if (((FName *)pFVar5[1]._padding_ <= &local_48) &&
           ((&local_48 < (FName *)pFVar5[1]._padding_ + (int)pFVar5[1].Name.Number &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = pFVar5[1].Name.ComparisonIndex.Value;
        if (uVar4 == 0) {
          *param_5 = false;
        }
        else {
          pFVar1 = (FName *)pFVar5[1]._padding_;
          uVar10 = 0;
          bVar3 = *pFVar1 != local_48;
          lVar7 = 0;
          FVar6 = local_48;
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            do {
              lVar7 = lVar7 + 1;
              uVar9 = uVar9 + 1;
              if ((int)uVar4 <= lVar7) break;
            } while (bVar3 == (pFVar1[lVar7] != FVar6));
            if (bVar3 != false) {
              if (uVar10 != uVar8) {
                memmove(pFVar1 + (int)uVar10,pFVar1 + (int)uVar8,(longlong)(int)(uVar9 - uVar8) << 3
                       );
                FVar6 = local_48;
              }
              uVar10 = uVar10 + (uVar9 - uVar8);
            }
            bVar3 = (bool)(bVar3 ^ 1);
            uVar8 = uVar9;
          } while (lVar7 < (int)uVar4);
          pFVar5[1].Name.ComparisonIndex.Value = uVar10;
          *param_5 = 0 < (int)(uVar4 - uVar10);
          if (0 < (int)(uVar4 - uVar10)) {
            FRigBaseElement::NotifyMetadataTagChanged(local_38,&local_48,false);
          }
        }
      }
    }
  }
  return;
}

