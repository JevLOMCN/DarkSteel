// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 3

// AddEndpoint @ 1446eb170

void __thiscall
FImagePixelPipe::AddEndpoint
          (FImagePixelPipe *this,
          TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  lpCriticalSection = &this->EndPointLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1->Ptr == (FImageStreamEndpoint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEndpoint",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteStream.cpp"
                       ,0x3a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->EndPoints).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->EndPoints).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->EndPoints).ArrayNum;
  piVar1 = &(this->EndPoints).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->EndPoints).AllocatorInstance,piVar1);
  }
  (this->EndPoints).ArrayNum = iVar5 + 1;
  *(FImageStreamEndpoint **)((this->EndPoints).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       param_1->Ptr;
  param_1->Ptr = (FImageStreamEndpoint *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001446eb26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddEndpoint @ 1446eb280

void __thiscall
FImagePixelPipe::AddEndpoint
          (FImagePixelPipe *this,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *local_18 [2];
  
  local_18[0] = ::operator_new(0x40);
  if (local_18[0] == (undefined8 *)0x0) {
    local_18[0] = (undefined8 *)0x0;
  }
  else {
    *local_18[0] = &`FImagePixelPipe::AddEndpoint'::`2'::FFunctorEndpoint::_vftable_;
    lVar2 = *(longlong *)param_1;
    local_18[0][2] = lVar2;
    local_18[0][7] = 0;
    if (lVar2 != 0) {
      puVar7 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar7)();
    }
  }
  lpCriticalSection = &this->EndPointLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_18[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InEndpoint",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteStream.cpp"
                         ,0x3a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->EndPoints).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->EndPoints).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->EndPoints).ArrayNum;
    piVar1 = &(this->EndPoints).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->EndPoints).AllocatorInstance,piVar1);
    }
    (this->EndPoints).ArrayNum = iVar6 + 1;
    *(undefined8 **)((this->EndPoints).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    local_18[0] = (undefined8 *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_18[0] != (undefined8 *)0x0) {
      (**(code **)*local_18[0])(local_18[0],1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Push @ 1446eea00

void __thiscall
FImagePixelPipe::Push
          (FImagePixelPipe *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_res10;
  
  if (param_1->Ptr != (FImagePixelData *)0x0) {
    lpCriticalSection = &this->EndPointLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = (this->EndPoints).ArrayNum;
    uVar6 = 0;
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        if (uVar6 == iVar5 - 1U) {
          uVar4 = 0;
          if ((int)uVar6 < iVar5) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)((this->EndPoints).AllocatorInstance.Data + lVar7);
          (**(code **)(*plVar1 + 8))(plVar1,param_1);
        }
        else {
          uVar4 = 0;
          if ((int)uVar6 < iVar5) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)((this->EndPoints).AllocatorInstance.Data + lVar7);
          (**(code **)(param_1->Ptr->_padding_ + 0x10))(param_1->Ptr,&local_res10);
          (**(code **)(*plVar1 + 8))(plVar1,&local_res10);
          if (local_res10 != (undefined8 *)0x0) {
            (**(code **)*local_res10)(local_res10,1);
          }
        }
        iVar5 = (this->EndPoints).ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < iVar5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

