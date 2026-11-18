// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 4

// AddUniqueImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&> @ 14ed557d0

int __thiscall
TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSizedDefaultAllocator<32>_>
::AddUniqueImpl<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
          (TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSizedDefaultAllocator<32>_>
           *this,TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(uint *)&pFVar5->field_0x0 == param_1->Value) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(uint *)(pFVar1 + (longlong)iVar4 * 4) = param_1->Value;
  return iVar4;
}

// CopyToEmpty<enum_UE::Online::ESchemaServiceAttributeFlags,int> @ 14efd7f70

void __thiscall
TArray<enum_UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_>::
CopyToEmpty<enum_UE::Online::ESchemaServiceAttributeFlags,int>
          (void *this,ESchemaServiceAttributeFlags *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2);
  }
  return;
}

// CopyToEmpty<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,int> @ 14efd8000

void __thiscall
TArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>::
CopyToEmpty<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,int>
          (void *this,ESchemaServiceAttributeSupportedTypeFlags *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  if (param_2 != 0) {
    memcpy(*(void **)this,param_1,(longlong)param_2);
  }
  return;
}

// TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_> @ 14efe2680

TArray<UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_> * __thiscall
TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_>::
TArray<enum_UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_>
          (void *this,initializer_list<UE::Online::ESchemaAttributeFlags> *param_1)

{
  ESchemaAttributeFlags *_Src;
  int iVar1;
  
  _Src = param_1->_First;
  iVar1 = *(int *)&param_1->_Last - (int)_Src;
  *(undefined8 *)this = 0;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1);
  return this;
}

