// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~FD3D12BaseShaderResource @ 1459abd90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12BaseShaderResource::~FD3D12BaseShaderResource(FD3D12BaseShaderResource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  lpCriticalSection = &this->RenameListenersCS;
  this->_padding_ = (longlong)&___7FD3D12BaseShaderResource__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->RenameListeners).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,0x3ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&this->ResourceLocation);
  pFVar2 = (this->RenameListeners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// ResourceRenamed @ 1459d70b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BaseShaderResource::ResourceRenamed
          (FD3D12BaseShaderResource *this,FD3D12ContextArray *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->RenameListenersCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->RenameListeners).AllocatorInstance.Data;
    iVar2 = (this->RenameListeners).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RenameListeners).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FD3D12ShaderResourceRenameListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      (**(code **)**(undefined8 **)pFVar3)
                (*(undefined8 **)pFVar3,param_1,this,&this->ResourceLocation);
      pFVar3 = pFVar3 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459d7136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddRenameListener @ 1459ff910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BaseShaderResource::AddRenameListener
          (FD3D12BaseShaderResource *this,FD3D12ShaderResourceRenameListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FD3D12ShaderResourceRenameListener *local_res10 [3];
  
  lpCriticalSection = &this->RenameListenersCS;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->RenameListeners).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)(this->RenameListeners).ArrayNum * 8;
  do {
    if (pFVar6 == pFVar2) {
LAB_1459ff98b:
      pFVar2 = (this->RenameListeners).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar2 + (longlong)(this->RenameListeners).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->RenameListeners).ArrayNum;
      piVar1 = &(this->RenameListeners).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->RenameListeners).AllocatorInstance,piVar1);
      }
      (this->RenameListeners).ArrayNum = iVar5 + 1;
      *(FD3D12ShaderResourceRenameListener **)
       ((this->RenameListeners).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(FD3D12ShaderResourceRenameListener **)pFVar6 == local_res10[0]) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RenameListeners.Contains(InRenameListener)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x386,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1459ff98b;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// RemoveRenameListener @ 145a2daf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12BaseShaderResource::RemoveRenameListener
          (FD3D12BaseShaderResource *this,FD3D12ShaderResourceRenameListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FD3D12ShaderResourceRenameListener *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FD3D12ShaderResourceRenameListener *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->RenameListenersCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->RenameListeners).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->RenameListeners).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->RenameListeners).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->RenameListeners).AllocatorInstance.Data;
    bVar3 = *(FD3D12ShaderResourceRenameListener **)pFVar1 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(FD3D12ShaderResourceRenameListener **)(pFVar1 + lVar8 * 8) != pFVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->RenameListeners).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_145a2dca5;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Removed == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                     ,0x38f,
                     L"Should have exactly one registered listener during remove (same listener shouldn\'t registered twice and we shouldn\'t call this if not registered"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a2dca5:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

