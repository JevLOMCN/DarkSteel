// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 2

// FMultiCallback @ 14f01ec30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMultiCallback * __thiscall
FChunkDownloader::FMultiCallback::FMultiCallback
          (FMultiCallback *this,TFunction<void___cdecl(bool)> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->NumPending = 0;
  this->NumSucceeded = 0;
  this->NumFailed = 0;
  *(undefined8 *)&this->IndividualCb = 0;
  *(undefined8 *)&(this->IndividualCb).field_0x28 = 0;
  lVar1 = *(longlong *)param_1;
  *(longlong *)&this->OuterCallback = lVar1;
  *(undefined8 *)&(this->OuterCallback).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&(this->OuterCallback).field_0x10);
  }
  local_48 = *(longlong *)&this->IndividualCb;
  uVar3 = *(undefined8 *)&(this->IndividualCb).field_0x8;
  local_38 = *(longlong *)&(this->IndividualCb).field_0x10;
  uStack_30 = *(undefined8 *)&(this->IndividualCb).field_0x18;
  uVar2 = *(undefined8 *)&(this->IndividualCb).field_0x20;
  plStack_20 = *(longlong **)&(this->IndividualCb).field_0x28;
  *(code **)&this->IndividualCb =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>,void,bool>
       ::Call;
  *(undefined8 *)&(this->IndividualCb).field_0x8 = uStack_40;
  *(undefined4 *)&(this->IndividualCb).field_0x10 = 0x530db818;
  *(undefined4 *)&(this->IndividualCb).field_0x14 = 1;
  *(FMultiCallback **)&(this->IndividualCb).field_0x18 = this;
  *(undefined4 *)&(this->IndividualCb).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->IndividualCb).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->IndividualCb).field_0x28 = 0;
  *(undefined4 *)&(this->IndividualCb).field_0x2c = 0;
  local_28 = uVar2;
  if (local_48 != 0) {
    plVar5 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    uStack_40 = uVar3;
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// operator() @ 14f01f570

void __thiscall
`FChunkDownloader::FMultiCallback::FMultiCallback'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  
  **(int **)this = **(int **)this + -1;
  if (param_1) {
    piVar1 = (int *)(*(longlong *)this + 4);
    *piVar1 = *piVar1 + 1;
  }
  else {
    piVar1 = (int *)(*(longlong *)this + 8);
    *piVar1 = *piVar1 + 1;
  }
  if (**(int **)this < 1) {
    if ((**(int **)this != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumPending == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ChunkDownloader\\Source\\Private\\ChunkDownloader.cpp"
                           ,0x8b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0x40) != (void *)0x0) {
      local_res10[0] = *(int *)(lVar2 + 8) < 1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0x40));
      pcVar4 = *(code **)(lVar2 + 0x40);
      plVar7 = (longlong *)(lVar2 + 0x50);
      if (*(longlong **)(lVar2 + 0x68) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x68);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,local_res10);
    }
    pvVar3 = *(void **)this;
    if (pvVar3 != (void *)0x0) {
      if (*(longlong *)((longlong)pvVar3 + 0x40) != 0) {
        plVar7 = (longlong *)((longlong)pvVar3 + 0x50);
        if (*(longlong **)((longlong)pvVar3 + 0x68) != (longlong *)0x0) {
          plVar7 = *(longlong **)((longlong)pvVar3 + 0x68);
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (*(longlong *)((longlong)pvVar3 + 0x10) != 0) {
        plVar7 = (longlong *)((longlong)pvVar3 + 0x20);
        if (*(longlong **)((longlong)pvVar3 + 0x38) != (longlong *)0x0) {
          plVar7 = *(longlong **)((longlong)pvVar3 + 0x38);
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      ::operator_delete(pvVar3,0x70);
    }
  }
  return;
}

